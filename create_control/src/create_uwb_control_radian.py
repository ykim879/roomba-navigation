#!/usr/bin/env python3
'''
__author__ = "Bekir Bostanci"
__license__ = "BSD"
__version__ = "0.0.1"
__maintainer__ = "Bekir Bostanci"
__email__ = "bekirbostanci@gmail.com"
'''

'''
Edited by Nicholas Leone
Original File="initialpose_uwb_average.py"
in advoard_localization package ("https://github.com/advoard/advoard_localization").

__email__ = "nicholasjinleone@gmail.com"
__email__ = "nleone6@gatech.edu"
'''

'''
Navigational Code for the Roomba. 
Subscribes to localization_data_harbi_multi_topic to obtain its calculated position from the Harbi localization algorithm.
Uses the global planner's "make_plan" service to obtain the calculated path.
Roomba follows the path's waypoints until it reaches the goal.
'''

from logging import error
from os import path
import rospy

from geometry_msgs.msg import PoseWithCovarianceStamped
from geometry_msgs.msg import Pose
from geometry_msgs.msg import PointStamped
from geometry_msgs.msg import Twist
from std_msgs.msg import Float32
from geometry_msgs.msg import PoseStamped
from nav_msgs.srv import GetPlan
from nav_msgs.msg import Path


import sys
import math
from threading import Timer
import time 

import numpy as np

from rospy.names import scoped_name




global robot_pose, previous_pose
previous_pose = Pose()
robot_pose = Pose()
counter = 0
global current_goal_position, current_goal_vector
current_goal_position = 0
current_goal_vector = 0
global move_once
move_once = False
global robot_poses
robot_poses = []
global loop_count, current_distance_remaining, previous_distance_remaining, way_points_skip
way_points_skip = 5
current_distance_remaining = 0
previous_distance_remaining = 0
loop_count = 0
global path_navigation
path_navigation = Path()

start_pose = PoseStamped()
start_pose.header.frame_id = "map"
start_pose.pose.position.x = 0.0
start_pose.pose.position.y = 0.0

finish_pose = PoseStamped()
finish_pose.header.frame_id = "map"
finish_pose.pose.position.x = 0.0
finish_pose.pose.position.y = 20.0

'''
Starts the create_uwb_control node

velocity_publisher: Publishes velocity messages to control Roomba

angle_publisher: Publishes the magnitude of the difference between the angles of two vectors:
    1. Vector that represents Roomba's current orientation
    2. Vecotr that point towards the next way point from the Roomba's current position.

path_publisher: Publishes a path. The publishes is run multiple times for easy access to the path.

global_planner: Service that requests a path from the global planner

path_navigation: Path calculated from the global planner's "make_plan" service.
'''




rospy.init_node('create_uwb_control', anonymous=True)
velocity_publisher = rospy.Publisher("create/diff_drive_controller/cmd_vel", Twist, queue_size=10)
pose_publisher = rospy.Publisher("create_pose", Pose, queue_size=10)
angle_publisher = rospy.Publisher("create_angle", Float32, queue_size=10)
path_publisher = rospy.Publisher("create_path", Path, queue_size=10)
global_planner = rospy.ServiceProxy('/gp/planner/make_plan', GetPlan)
path_navigation = global_planner(start_pose, finish_pose, 0.0)

current_goal_position = [path_navigation.plan.poses[0].pose.position.x, 
    path_navigation.plan.poses[0].pose.position.y]

current_goal_vector = current_goal_position

global way_points
way_points = len(path_navigation.plan.poses)
global current_way_point
current_way_point = 0

'''
Method that is run when the create_uwb_control node is subscribed to the localization_data_harbi_topic

When first run, the Roomba moves forward for a short distance. 
This is done to determine the initial orientation and position of the Roomba.
This process is not repeated again on future runs of the method.
This idea was originally from "initialpose_uwb_average.py"
in advoard_localization package.

Every time the method is run, the robot's x and y position calculated by the localization_data_harbi_topic is appended
to the robot_pose array.

Every ten times the method is run, the positions in the array are averaged. The averaged positions are then used to calculate
a vector that represents the Roomba's current orientation. A second vector that points to the next way point is calculated
and put into turn_calculation method to turn the Roomba towards the next way point.

The current Roomba's position is put into the move method to determine whether the Roomba should move forward or
update its next target way point.
'''

def subscribe_data(current_position):
    global move_once, loop_count, previous_pose, current_goal_vector
    vector_pose = Pose()
    avg_robot_pose = Pose()
    robot_pose.position.x = current_position.position.x
    robot_pose.position.y = current_position.position.y
    if move_once == False:
        drive_straight(0.05)
        move_once = True
    robot_poses.append(robot_pose)
    path_publisher.publish(path_navigation.plan)    

    if loop_count == 10:
        avg_robot_pose.position.x, avg_robot_pose.position.y = avg_pose(robot_poses)
        vector_pose.position.x = avg_robot_pose.position.x - previous_pose.position.x
        vector_pose.position.y = avg_robot_pose.position.y - previous_pose.position.y
        current_goal_vector = [(current_goal_position[0] - avg_robot_pose.position.x) / 2,
            (current_goal_position[1] - avg_robot_pose.position.y) / 2]

        turn_calculation(vector_pose)
        move(current_position)
        robot_poses.clear()
        loop_count = -1
        previous_pose = avg_robot_pose
        

    pose_publisher.publish(robot_pose)
    loop_count += 1

'''
Averages all the x and y positions in an array.
'''

def avg_pose(poses):
    x_position = 0
    y_position = 0
    for pose in poses:
        x_position += pose.position.x
        y_position += pose.position.y
    
    
    x_position = x_position / len(poses)
    y_position = y_position / len(poses)

    return x_position, y_position

'''
Calculates magnitude of the difference in angle between two vectors.
One vector represents the current Roomba's orientation. 
The second vector represents the direction towards the next way point in the path.
Also calculates the direction of the goal vector relative to the current vector.

After the calculation, the Roomba then turns towards to the goal vector via the turn_drive method.
'''   


def turn_calculation(current_position):
    global current_goal_vector
    current_pose_vector = [current_position.position.x, current_position.position.y]
    #Find angle between current robot's vector and goal position vector
    norm_vector_dot_product = np.dot(np.linalg.norm(current_pose_vector), np.linalg.norm(current_goal_vector))
    vector_dot_product = np.dot(current_pose_vector,current_goal_vector)
    angle = np.arccos(vector_dot_product / norm_vector_dot_product)
    angle_direction = current_position.position.x * current_goal_vector[1] - current_position.position.y * current_goal_vector[0]
    angle_publisher.publish(angle)
    if angle_direction > 0:
        turn_drive(angle)
    elif angle_direction < 0:
        turn_drive(-angle)

'''
Calculates the distance remaining to the next way point.

If too far away from the waypoint, the Roomba will move forward via the drive_straight method.

If close enough to the waypoint, the Roomba will select the next way point to move towards. 
The way_points_skip variable determines how many way points that'll be skipped within the path until selecting 
the next way point to move towards.
'''

def move(current_position):
    global current_goal_position, current_distance_remaining, previous_distance_remaining
    global current_goal_vector, way_points, current_way_point, way_points_skip  

    distance_x = current_goal_position[0] - current_position.position.x
    distance_y = current_goal_position[1] - current_position.position.y

    current_distance_remaining= math.sqrt((distance_x)**2 + distance_y**2)

    ## If the Roomba is less than or equal to 0.4 meters away from the current way point, it'll select the next way point.
    if current_distance_remaining <= 0.4:
        if (current_way_point < (way_points - 1)):
            if current_way_point + way_points_skip > way_points - 1: 
                current_way_point = way_points_skip
            else:
                current_way_point += 5
            current_goal_position = [path_navigation.plan.poses[current_way_point].pose.position.x,
                path_navigation.plan.poses[current_way_point].pose.position.y]
        print(current_goal_position)
    else:
        drive_straight(1.0)
    previous_distance_remaining = current_distance_remaining
    

'''
Roomba turns for 0.25 radians per second. Duration is based on the magnitude of the requested angle.

Direction of turn is based on whether the angle is a positive or negative value.
'''
def turn_drive(angle):
    angle_mag = np.abs(angle)
    vel_msg = Twist()
    if(angle > 0):
        vel_msg.angular.z = 0.25
        velocity_publisher.publish(vel_msg)
        rospy.sleep(angle_mag*4)
        vel_msg.angular.z = 0
        velocity_publisher.publish(vel_msg)
        rospy.sleep(2)
    elif(angle < 0):
        vel_msg.angular.z = -0.25
        velocity_publisher.publish(vel_msg)
        rospy.sleep(angle_mag*4)
        vel_msg.angular.z = 0
        velocity_publisher.publish(vel_msg)
        rospy.sleep(2)

'''
Roomba drives straight for 1 second. Its velocity is based on the magnitude and sign of the speed parameter.
'''

def drive_straight(speed):
    vel_msg = Twist()        
    vel_msg.linear.x = speed
    velocity_publisher.publish(vel_msg)
    rospy.sleep(1)
    vel_msg.linear.x = 0
    velocity_publisher.publish(vel_msg)
    rospy.sleep(2)

if __name__ == "__main__":
    subscriber =rospy.Subscriber('localization_data_harbi_multi_topic', Pose, subscribe_data, queue_size=1, buff_size=2**24)
    rospy.spin()