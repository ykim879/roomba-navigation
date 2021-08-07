## Create Navigation

The create_navigation package is what allows the creation of a path for the Roomba to follow. This package utilizes the Global Planner package that's part of the move_base package in ROS. 

## Global Planner

The Global Planner requires a map server and the proper set-up of transform bewteen coordinate frames. Before the Global Planner can even run, the transforms between the map frame to the /odom frame, and the /odom frame to the base_link frame need to be in place. The map server contains the map and its configurations required for the global planner to construct a costmap. 

The transforms bewteen coordinate frames are handled by static transforms nodes that are launched along with create_gazebo.launch (/odom to base_link) and create_navigation_v3.launch (map to /odom).


More information about coordinate frames and transforms:
  - https://www.ros.org/reps/rep-0105.html
  - http://wiki.ros.org/tf2

### Map Server
The map server is a node that provides map data via ROS service. For the map server to properly function, it requires the directory that contains the yaml configuration file. This file contains the name of the map and parameters needed for the map server to construct an occupancy grid of the map.



More information about Map Server
  - http://wiki.ros.org/map_server

