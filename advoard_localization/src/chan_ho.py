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

Original File="sqrrange_leastsqr_localization.py"
in advoard_localization package ("https://github.com/advoard/advoard_localization").

Chan_Ho Algorithm="TDoALocalization.py" and "UnitTests.py"
in Klauba Navigation package ("https://github.com/arjun11verma/KlaubaNavigation")



__email__ = "nicholasjinleone@gmail.com"
__email__ = "nleone6@gatech.edu"
'''

'''
ROS Implementation of Chan Ho Localization Algorithm

Subscribes to uwb_data_topic.

Uses Chan Ho Localization Algorithm to calculate the position of the Roomba using three or more UWB devices.
'''

from logging import error
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


rospy.init_node('localization_data_chan_ho_node', anonymous=True)
pub = rospy.Publisher('localization_data_chan_ho_topic', Pose, queue_size=10)




def subscribe_data(uwb_data_cell):
    all_destination_id = uwb_data_cell.destination_id
    all_distance = uwb_data_cell.distance
    robot_pos = position_calculation_chan_ho(sensor_pos,all_distance) 
    publish_data(robot_pos[0],robot_pos[1])
  


def publish_data(pose_x,pose_y):
    robot_pos = Pose()
    robot_pos.position.x = float(pose_x)
    robot_pos.position.y = float(pose_y)
    robot_pos.position.z = 0.0

    robot_pos.orientation.x = 0.0
    robot_pos.orientation.x = 0.0
    robot_pos.orientation.x = 0.0
    robot_pos.orientation.w = 0.0
    rospy.loginfo(robot_pos)
    pub.publish(robot_pos)



def getK(sensor_pos):
    return [sensor[0]**2 + sensor[1]**2 for sensor in sensor_pos]

def getR(base_anchor_distance, distance):    
    return [(base_anchor_distance - dist) for dist in distance]

def getCoordinateDifferenceMatrix(anchor_coordinate_differences):
    #Original: -1 * np.linalg.inv(np.array())
    coordinate_difference_array = []
    for coordinate_difference in anchor_coordinate_differences:
        coordinate_difference_array.append([coordinate_difference[0], coordinate_difference[1]])

    return np.linalg.pinv(np.array(coordinate_difference_array))

def getAnchorCoordinateDifferences( base_anchor_pos, anchors_pos):
    return [(pos[0] - base_anchor_pos[0], pos[1] - base_anchor_pos[1]) for pos in anchors_pos]

def getRangeDifferenceMatrix(R):
    range_difference_array = []
    for range_difference in R:
        range_difference_array.append([range_difference])

    return np.array(range_difference_array)

def getRangeKMatrix( R, base_K, K):
    i = 0
    range_K_array = []
    while i < (len(R)):
        range_K_array.append([R[i]*R[i] - K[i] + base_K])
        i += 1

    return 0.5 * np.array(range_K_array)


def coordinatesInTermsOfR( base_anchor_pos, base_anchor_dist, anchors_pos, anchors_dist):
    base_K = base_anchor_pos[0]**2 + base_anchor_pos[1]**2
    K = getK(anchors_pos)
    print(f'K: {K}')
    anchor_coordinate_differences = getAnchorCoordinateDifferences(base_anchor_pos, anchors_pos)
    print(f'Anchor Coordinate Differences: {anchor_coordinate_differences}')
    R = getR(base_anchor_dist, anchors_dist)
    print(f'R: {R}')
    coordinate_difference_matrix = getCoordinateDifferenceMatrix(anchor_coordinate_differences)
    print(f'Coordinate Difference Matrix: {coordinate_difference_matrix}')
    range_difference_matrix = getRangeDifferenceMatrix(R)
    print(f'Range Difference Matrix: {range_difference_matrix}')
    range_k_matrix = getRangeKMatrix(R, base_K, K)
    print(f'Range K Matrix: {range_k_matrix}')

    r_coefficient_temp = (np.matmul(coordinate_difference_matrix, range_difference_matrix))
    constant_temp = (np.matmul(coordinate_difference_matrix, range_k_matrix))


    r_coefficient_temp = np.array(r_coefficient_temp)
    constant_temp = np.array(constant_temp)

    ##print(r_coefficient_temp[1])

    print(f'R_Coefficient: {r_coefficient_temp}')
    print(f'Constant: {constant_temp}')

    return r_coefficient_temp, constant_temp

def chanHoApproximationOfR(base_anchor_pos, r_coefficient, constant):
        # since r is equal to the distance formula, R(1) = K(1) - 2X(1)x - 2Y(1)y + x^2 + y^2
        base_K = base_anchor_pos[0]**2 + base_anchor_pos[1]**2
        
        
        # 0 = (r1_squared_coeff) * (r1)^2 + (r1_linear_coeff) * (r1) + (r1_const)
        # x = a * r1 + b
        # y = c * r1 + d

        a = r_coefficient[0]
        b = constant[0]
        c = r_coefficient[1]
        d = constant[1]

        x1 = base_anchor_pos[0]
        y1 = base_anchor_pos[1]

        k1 = base_K

        r1_squared_coeff = a**2 + c**2 - 1
        r1_linear_coeff = -2*x1*a - 2*y1*c + 2*a*b + 2*c*d
        r1_const = k1 - 2*x1*b - 2*y1*d + b**2 + d**2

        print(f'Squared:  {r1_squared_coeff}')
        print(f'Linear:  {r1_linear_coeff}')
        print(f'Const:  {r1_const}')

        # For a quadratic
        # 0 = ax^2 + bx + c
        # we have
        # x = (-b +- sqrt(b^2 - 4ac)) / (2a)

        discriminant_sq = r1_linear_coeff**2 - 4*r1_squared_coeff*r1_const
        if discriminant_sq < 0:
            #raise ValueError("These values result in an imaginary R")
            print("These values result in an imaginary R")
            return 0

        discriminant = math.sqrt(discriminant_sq)
        print(f'Discriminant: {discriminant}')
        r1_one = ((-r1_linear_coeff) + discriminant) / (2 * r1_squared_coeff)
        r1_two = ((-r1_linear_coeff) - discriminant) / (2 * r1_squared_coeff)

        print(f'One: {r1_one}, Two: {r1_two}')

        return min(r1_one, r1_two) if (r1_one > 0 and r1_two > 0) else max(r1_one, r1_two)

    
#added => cagdas tekok 
def position_calculation_chan_ho(sensor_pos,dist):
    i = 0
    noise = np.array([0,0])
    noise = np.random.normal(0, math.sqrt(0.001 / (c**2)), len(sensor_pos))    
    base_anchor_pos = sensor_pos[0]
    base_anchor_dist = dist[0] + noise[0]*c
    anchors_pos = []
    anchors_dist = []
    while i < (len(sensor_pos) - 1):
        anchors_pos.append(sensor_pos[i+1])
        anchors_dist.append(dist[i+1] + noise[i+1]*c)
        i += 1
    
    # anchors_pos.append(sensor_pos[1])
    # anchors_pos.append(sensor_pos[2])

    # anchors_dist.append(dist[1] + noise[0]*c)
    # anchors_dist.append(dist[2] + noise[1]*c)
    r_coefficient, constant = coordinatesInTermsOfR(base_anchor_pos, base_anchor_dist, anchors_pos, anchors_dist)
    print(f'R Coefficient Final {r_coefficient}')
    chanho_approximated_r = chanHoApproximationOfR(base_anchor_pos, r_coefficient, constant)

    if(chanho_approximated_r > 0):
            approx_x = r_coefficient[0][0]*chanho_approximated_r + constant[0][0]
            approx_y = r_coefficient[1][0]*chanho_approximated_r + constant[1][0]

            approx_x_print = approx_x[0]
            approx_y_print = approx_y[0]

            #print(f"Actual x: {robot_pose_x}\tChan-Ho x: {approx_x_print}\tError: {round((approx_x_print - robot_pose_x) / robot_pose_x * 100, 3)}%")
            #print(f"Actual y: {robot_pose_y}\tChan-Ho y: {approx_y_print}\tError: {round((approx_y_print - robot_pose_y) / robot_pose_y * 100, 3)}%\n")

            #publish_error(robot_pose_x, robot_pose_y, approx_x_print, approx_y_print)
            
            # if(approx_x_print < 0):
            #     approx_x_print = -(approx_x_print**2)
            # else:
            #     approx_x_print = (approx_x_print**2)
    
            # if(approx_y_print < 0):
            #     approx_y_print = -(approx_y_print**2)
            # else:
            #     approx_y_print = (approx_y_print**2)
            
            return np.array([approx_x, approx_y])

    else:
            ##raise RuntimeError("TDoA values out of range")
            print("TDoA values are out of range.")
            return np.array([0,0])


def get_anchors_pos():
    max_anchor = 100
    sensor_pos = []   
    uwb_id = 'uwb_anchor_'
    listener = tf.TransformListener()
    
    for i in range(max_anchor):
        try:
            time.sleep(0.3)
            (trans,rot) = listener.lookupTransform('/map', uwb_id+str(i), rospy.Time(0))
            sensor_pos.append(trans)
        except (tf.LookupException, tf.ConnectivityException, tf.ExtrapolationException):
            break



    if sensor_pos == [] :
        rospy.logwarn("There is not found any anchors. Function is working again.")    
        get_anchors_pos()


    return sensor_pos


if __name__ == "__main__":
    #get uwb anchors postion
    #global sensor_pos
    sensor_pos = get_anchors_pos()

    time.sleep(0.5)

    #get robot real position => you can change ModelStates.pose[] different robot's
    #rospy.Subscriber('gazebo/model_states', ModelStates, subscribe_data_robot_poses)

    rospy.Subscriber('uwb_data_topic', uwb_data, subscribe_data)

    # spin() simply keeps python from exiting until this node is stopped
    rospy.spin()
    
