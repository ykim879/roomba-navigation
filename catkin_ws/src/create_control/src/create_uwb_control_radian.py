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
in advoard_localization package.

__email__ = "nicholasjinleone@gmail.com"
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
global current_goal_position, goal_positions, current_goal_vector
goal_positions = [[2,0], [1,1]]
current_goal_position = goal_positions[0]
current_goal_vector = goal_positions[0]
global move_once, loop_once
move_once = False
loop_once = False
global robot_poses
robot_poses = []
global loop_count, current_distance, previous_distance
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


rospy.init_node('create_uwb_control', anonymous=True)
velocity_publisher = rospy.Publisher("create/diff_drive_controller/cmd_vel", Twist, queue_size=10)
pose_publisher = rospy.Publisher("create_pose", Pose, queue_size=10)
angle_publisher = rospy.Publisher("create_angle", Float32, queue_size=10)
path_publisher = rospy.Publisher("create_path", Path, queue_size=10)
global_planner = rospy.ServiceProxy('/gp/planner/make_plan', GetPlan)
path_navigation = global_planner(start_pose, finish_pose, 0.0)

#step_one = PoseStamped()
#step_one = path_navigation.plan.poses[0]
current_goal_position = [path_navigation.plan.poses[0].pose.position.x, 
    path_navigation.plan.poses[0].pose.position.y]

current_goal_vector = current_goal_position

global way_points
way_points = len(path_navigation.plan.poses)
global current_way_point
current_way_point = 0

def subscribe_data(current_position):
    global move_once, loop_count, loop_once, previous_pose, current_goal_vector
    vector_pose = Pose()
    avg_robot_pose = Pose()
    robot_pose.position.x = current_position.position.x
    robot_pose.position.y = current_position.position.y
    if move_once == False:
        drive_straight(0.05)
        ##turn_radian(robot_pose)
        move_once = True
    # turn_radian(robot_pose)
    # move(robot_pose)
    robot_poses.append(robot_pose)
    path_publisher.publish(path_navigation.plan)

    

    if loop_count == 10:
        avg_robot_pose.position.x, avg_robot_pose.position.y = avg_pose(robot_poses)
        vector_pose.position.x = avg_robot_pose.position.x - previous_pose.position.x
        vector_pose.position.y = avg_robot_pose.position.y - previous_pose.position.y
        current_goal_vector = [(current_goal_position[0] - avg_robot_pose.position.x) / 2,
            (current_goal_position[1] - avg_robot_pose.position.y) / 2]

        turn_radian(vector_pose)
        #loop_once = True
        move(current_position)
        robot_poses.clear()
        loop_once = False
        loop_count = -1
        previous_pose = avg_robot_pose
        

    pose_publisher.publish(robot_pose)
    loop_count += 1

def avg_pose(poses):
    x_position = 0
    y_position = 0
    for pose in poses:
        x_position += pose.position.x
        y_position += pose.position.y
    
    
    x_position = x_position / len(poses)
    y_position = y_position / len(poses)

    return x_position, y_position   


def turn_radian(current_position):
    global current_goal_vector
    current_pose_vector = [current_position.position.x, current_position.position.y]
    #Find angle between current robot's vector and goal position vector
    norm_vector_dot_product = np.dot(np.linalg.norm(current_pose_vector), np.linalg.norm(current_goal_vector))
    vector_dot_product = np.dot(current_pose_vector,current_goal_vector)
    angle = np.arccos(vector_dot_product / norm_vector_dot_product)
    angle_direction = current_position.position.x * current_goal_vector[1] - current_position.position.y * current_goal_vector[0]
    angle_publisher.publish(angle)
    if angle_direction > 0:
        turn_angle(angle)
    elif angle_direction < 0:
        turn_angle(-angle)

def move(current_position):
    global current_goal_position, current_distance_remaining, previous_distance_remaining
    global current_goal_vector, way_points, current_way_point  

    distance_x = current_goal_position[0] - current_position.position.x
    distance_y = current_goal_position[1] - current_position.position.y

    current_distance_remaining= math.sqrt((distance_x)**2 + distance_y**2)   

    if current_distance_remaining <= 0.4:
        # current_goal_vector = [(goal_positions[1][0] - goal_positions[0][0]) / 2,
        #     (goal_positions[1][1] - goal_positions[0][1]) / 2]
        if (current_way_point < (way_points - 1)):
            if current_way_point + 5 > way_points - 1: 
                current_way_point = way_points
            else:
                current_way_point += 5
            current_goal_position = [path_navigation.plan.poses[current_way_point].pose.position.x,
                path_navigation.plan.poses[current_way_point].pose.position.y]
        print(current_goal_position)
    else:
        drive_straight(1.0)
    previous_distance_remaining = current_distance_remaining
    


def turn_angle(angle):
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

def drive_straight(speed):
    vel_msg = Twist()        
    vel_msg.linear.x = speed
    velocity_publisher.publish(vel_msg)
    rospy.sleep(1)
    ##vel_msg.linear.x = -speed/10
    ##velocity_publisher.publish(vel_msg)
    ##rospy.sleep(0.5)
    vel_msg.linear.x = 0
    velocity_publisher.publish(vel_msg)
    rospy.sleep(2)

if __name__ == "__main__":
    subscriber =rospy.Subscriber('localization_data_harbi_multi_topic', Pose, subscribe_data, queue_size=1, buff_size=2**24)
    rospy.spin()