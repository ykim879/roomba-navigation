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
ROS Implementation of Harbi Localization Algorithm

Subscribes to uwb_data_topic.

Uses Harbi Localization Algorithm to calculate the position of the Roomba using only three UWB devices.

NOTE: Cannot handle more than three UWB devices.
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


rospy.init_node('localization_data__harbi_node', anonymous=True)
pub = rospy.Publisher('localization_data_harbi_topic', Pose, queue_size=10)



def subscribe_data(uwb_data_cell):
    all_destination_id = uwb_data_cell.destination_id
    all_distance = uwb_data_cell.distance
    robot_pos = position_calculation_harbi(sensor_pos,all_distance) 
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
    return [(base_anchor_distance - distance[0]), (base_anchor_distance - distance[1])]

def getCoordinateDifferenceMatrix( anchor_coordinate_differences):
    #Original: -1 * np.linalg.inv(np.array())
        return np.linalg.inv(
            np.array(
                [[anchor_coordinate_differences[0][0], anchor_coordinate_differences[0][1]],
                 [anchor_coordinate_differences[1][0], anchor_coordinate_differences[1][1]]]
            )
        )

def getAnchorCoordinateDifferences( base_anchor_pos, anchors_pos):
        return [(pos[0] - base_anchor_pos[0], pos[1] - base_anchor_pos[1]) for pos in anchors_pos]

def getRangeDifferenceMatrix( R):
        return np.array([[R[0]], [R[1]]])

def getRangeKMatrix( R, base_K, K):
        return 0.5 * np.array([[R[0]*R[0] - K[0] + base_K], [R[1]*R[1] - K[1] + base_K]])


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
    noise = np.array([0,0])
    noise = np.random.normal(0, math.sqrt(0.001 / (c**2)), 2)    
    base_anchor_pos = sensor_pos[0]
    base_anchor_dist = dist[0]
    anchors_pos = []
    anchors_pos.append(sensor_pos[1])
    anchors_pos.append(sensor_pos[2])
    anchors_dist = []
    anchors_dist.append(dist[1] + noise[0]*c)
    anchors_dist.append(dist[2] + noise[1]*c)
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

def position_calculation_harbi(sensor_pos, dist):
    base_K = sensor_pos[0][0] ** 2 + sensor_pos[0][1] ** 2
    K = getK((sensor_pos[1], sensor_pos[2]))
    noise = np.array([0,0])
    noise = np.random.normal(0, math.sqrt(0.001 / (c**2)), 3)
    base_anchor_pos1 = sensor_pos[0]
    base_anchor_dist1 = dist[0]
    r_coeff_0, constant_0 = coordinatesInTermsOfR(base_anchor_pos1, base_anchor_dist1, (sensor_pos[1], sensor_pos[2]),
        ((dist[1] + noise[1]*c), (dist[2] + noise[2]*c)))
    print(f'R Coefficient Final {r_coeff_0}')
    chanHoR1 = chanHoApproximationOfR(base_anchor_pos1, r_coeff_0, constant_0)

    if(chanHoR1 < 0): 
        xo1 = 0
        yo1 = 0
    else:            
        xo1 = r_coeff_0[0][0] * chanHoR1 + constant_0[0][0]
        yo1 = r_coeff_0[1][0] * chanHoR1 + constant_0[1][0]
    
    base_anchor_pos2 = sensor_pos[1]
    base_anchor_dist2 = dist[1]
    r_coeff_1, constant_1 = coordinatesInTermsOfR(base_anchor_pos2, base_anchor_dist2, (sensor_pos[0], sensor_pos[2]),
        ((dist[0] + noise[0]*c), (dist[2] + noise[2]*c)))
    chanHoR2 = chanHoApproximationOfR(base_anchor_pos2, r_coeff_1, constant_1)

    #Originally chanHoR1 < 0
    if(chanHoR2 < 0): 
        xo2 = 0
        yo2 = 0
    else:            
        xo2 = r_coeff_1[0][0] * chanHoR2 + constant_1[0][0]
        yo2 = r_coeff_1[1][0] * chanHoR2 + constant_1[1][0]
    
    x1 = base_anchor_pos1[0]
    y1 = base_anchor_pos1[1]
    x2 = base_anchor_pos2[0]
    y2 = base_anchor_pos2[1]

    Q = np.array(
            [[ (x1 - xo1) / chanHoR1, (x2 - xo2) / chanHoR2],
             [ (y1 - yo1) / chanHoR1, (y2 - yo2) / chanHoR2]]
        )

    Qt = np.transpose(Q)

    omega = math.sqrt(0.5 * np.trace(np.matmul(Qt, Q)))

    anchor_coordinate_differences = getAnchorCoordinateDifferences(base_anchor_pos1, (sensor_pos[1], sensor_pos[2]))
    coordinate_difference_matrix = getCoordinateDifferenceMatrix(anchor_coordinate_differences)

    R = getR(base_anchor_dist1,(dist[1], dist[2]))
    range_difference_matrix = getRangeDifferenceMatrix(R)
    range_k_matrix = getRangeKMatrix(R, base_K, K)

    x, y = np.matmul(coordinate_difference_matrix, range_difference_matrix * omega * chanHoR1 + range_k_matrix)
    
    x_print = x[0]
    y_print = y[0]

    #print(f"Actual x: {robot_pose_x}\tHarbi x: {x_print}\tError: {round((x_print - robot_pose_x) / robot_pose_x * 100, 3)}%")
    #print(f"Actual y: {robot_pose_y}\tHarbi y: {y_print}\tError: {round((y_print - robot_pose_y) / robot_pose_y * 100, 3)}%\n")

    #if(x < 0):
    #    x = -(x**2)
    #else:
    #    x = (x**2)
    
    #if(y < 0):
    #    y = -(y**2)
    #else:
    #    y = (y**2)

    return x, y


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
    
