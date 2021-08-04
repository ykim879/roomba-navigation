#!/usr/bin/env python3

from logging import error

from scipy.linalg.decomp_svd import null_space
import rospy
from pozyx_simulation.msg import  uwb_data
from geometry_msgs.msg import Pose
from gazebo_msgs.msg import ModelStates

import tf
import time
import math

import numpy as np
import matplotlib.pyplot as plt 
import math
from scipy.linalg import eigvals
import re

all_distance = []
all_destination_id = []
pose_x = 0 
pose_y = 0

global sensor_pos
sensor_pos = []
base_K = 0
global r_coefficient, constant, c, counter
r_coefficient = []
constant = []
counter = 0
c = 0.299792458

global robot_pose_x,robot_pose_y,robot_pose_z
robot_pose_x =0
robot_pose_y =0
robot_pose_z =0

rospy.init_node('position_error_node', anonymous=True)
pub_chan_ho = rospy.Publisher('position_error_chan_ho_topic', Pose, queue_size=10)
pub_harbi = rospy.Publisher('position_error_harbi_topic', Pose, queue_size=10)


def subscribe_data_robot_poses(ModelStates):
    #for the get real position of robot subscribe model states topic
    global robot_pose_x, robot_pose_y, robot_pose_z
    global counter
    counter = counter + 1

    #gazebo/modelstate topic frequency is 100 hz. We descrese 10 hz with log method
    if counter % 100 == 0:
        counter = 0

        #ModelStates.pose[2] = turtlebot3 model real position on modelstates
        #robot_pose_x =ModelStates.pose[MODELSTATE_INDEX].position.x*1000
        #robot_pose_y =ModelStates.pose[MODELSTATE_INDEX].position.y*1000
        #robot_pose_z =ModelStates.pose[MODELSTATE_INDEX].position.z*1000

        robot_pose_x = ModelStates.pose[MODELSTATE_INDEX].position.x
        robot_pose_y = ModelStates.pose[MODELSTATE_INDEX].position.y
        robot_pose_z = ModelStates.pose[MODELSTATE_INDEX].position.z

def subscribe_data_position_error_chan_ho(calc_pose):
    error_pose = Pose()
    error_pose.position.x = np.abs(calc_pose.position.x - robot_pose_x)
    error_pose.position.y = np.abs(calc_pose.position.y - robot_pose_y)
    pub_chan_ho.publish(error_pose)

def subscribe_data_position_error_harbi(calc_pose):
    error_pose = Pose()
    error_pose.position.x = np.abs(calc_pose.position.x - robot_pose_x)
    error_pose.position.y = np.abs(calc_pose.position.y - robot_pose_y)
    pub_harbi.publish(error_pose)

if __name__ == "__main__":
    #get uwb anchors postion
    #global sensor_pos

    MODELSTATE_INDEX = rospy.get_param('/pozyx_simulation/modelstate_index',2)
    rospy.loginfo("%s is %s", rospy.resolve_name('/pozyx_simulation/modelstate_index'), MODELSTATE_INDEX)


    time.sleep(0.5)

    #get robot real position => you can change ModelStates.pose[] different robot's
    rospy.Subscriber('gazebo/model_states', ModelStates, subscribe_data_robot_poses)

    rospy.Subscriber('localization_data_chan_ho_topic', Pose, subscribe_data_position_error_chan_ho)

    rospy.Subscriber('localization_data_harbi_topic', Pose, subscribe_data_position_error_harbi)

    # spin() simply keeps python from exiting until this node is stopped
    rospy.spin()