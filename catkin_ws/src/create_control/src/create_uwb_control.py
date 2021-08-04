#!/usr/bin/env python3
'''
__author__ = "Bekir Bostanci"
__license__ = "BSD"
__version__ = "0.0.1"
__maintainer__ = "Bekir Bostanci"
__email__ = "bekirbostanci@gmail.com"
'''

from logging import error
from os import path
import rospy

from geometry_msgs.msg import PoseWithCovarianceStamped
from geometry_msgs.msg import Pose
from geometry_msgs.msg import PoseStamped
from geometry_msgs.msg import PointStamped
from geometry_msgs.msg import Twist
from navfn.srv import MakeNavPlan

import sys
import math
from threading import Timer
import time 

import numpy as np

from rospy.names import scoped_name


global first_pose 
global second_pose 
first_pose = None
second_pose = None
global control_finish_move_x, control_finish_move_y, control_finish_total_move, turn_finish
control_finish_move_x = False
control_finish_move_y = False
control_finish_total_move = False
turn_finish = False
global robot_pose
robot_pose = Pose()
poses_initial = []
poses_final= []
counter = 0
global goal_position
goal_position = [-2,2]
global move_once
move_once = False



rospy.init_node('create_uwb_control', anonymous=True)
velocity_publisher = rospy.Publisher("create/diff_drive_controller/cmd_vel", Twist, queue_size=10)
pose_publisher = rospy.Publisher("create_pose", Pose, queue_size=10)
rospy.wait_for_service('/gp/planner/make_plan')





def subscribe_data(current_position):
    robot_pose.position.x = current_position.position.x
    robot_pose.position.y = current_position.position.y
    move(robot_pose)
    pose_publisher.publish(robot_pose)


    

def move(current_position):
    global control_finish_move_x, control_finish_move_y, turn_finish 
    #Receiveing the user's input

    distance_x = goal_position[0] - current_position.position.x
    distance_y = goal_position[1] - current_position.position.y

    if distance_x <= 0.2 and distance_x >= -0.2:
        control_finish_move_x = True
    if distance_y <= 0.2 and distance_y >= -0.2:
        control_finish_move_y = True
    
    #Since we are moving just in x-axis
    if(control_finish_move_x == False):        
        if(distance_x > 0):
            drive_straight('f', 0.1)
        elif(distance_x < 0):
            drive_straight('b', 0.1)
    if(control_finish_move_y == False and control_finish_move_x == True):
        if turn_finish == False:        
            if(distance_y > 0):
                turn_90('l')
                turn_finish = True
        
            elif(distance_y < 0):
                turn_90('r')
                turn_finish = True
        
        drive_straight('f', 0.1)
        
        
    

    
def turn_90(direction):
    vel_msg = Twist()
    if(direction == 'l'):
        vel_msg.angular.z = math.pi/10
        velocity_publisher.publish(vel_msg)
        rospy.sleep(5.1)
        vel_msg.angular.z = 0
        velocity_publisher.publish(vel_msg)
        rospy.sleep(3)
    elif(direction == 'r'):
        vel_msg.angular.z = -math.pi/10
        velocity_publisher.publish(vel_msg)
        rospy.sleep(5.1)
        vel_msg.angular.z = 0
        velocity_publisher.publish(vel_msg)
        rospy.sleep(3)

def drive_straight(direction, speed):
    vel_msg = Twist()
    if(direction == 'f'):        
        vel_msg.linear.x = speed
        velocity_publisher.publish(vel_msg)
        rospy.sleep(1)
        ##vel_msg.linear.x = -speed/10
        ##velocity_publisher.publish(vel_msg)
        ##rospy.sleep(0.5)
        vel_msg.linear.x = 0
        velocity_publisher.publish(vel_msg)
        rospy.sleep(3)
    elif(direction == "b"):
        vel_msg.linear.x = -speed
        velocity_publisher.publish(vel_msg)
        rospy.sleep(1)
        ##vel_msg.linear.x = speed/10
        ##velocity_publisher.publish(vel_msg)
        ##rospy.sleep(0.5)
        vel_msg.linear.x = 0
        velocity_publisher.publish(vel_msg)
        rospy.sleep(3)

if __name__ == "__main__":
    subscriber =rospy.Subscriber('localization_data_chan_ho_topic', Pose, subscribe_data, queue_size=1, buff_size=2**24)
    rospy.spin()