## Create Navigation

The create_navigation package is what allows the creation of a path for the Roomba to follow. This package utilizes the Global Planner package that's part of the move_base package in ROS. 

## Global Planner

The Global Planner requires a map server and the proper set-up of transform bewteen coordinate frames. Before the Global Planner can even run, the transforms between the map frame to the /odom frame, and the /odom frame to the base_link frame need to be in place. The map server contains the map and its configurations required for the global planner to construct a costmap. 

The transforms bewteen coordinate frames are handled by static transforms nodes that are launched along with create_gazebo.launch (/odom to base_link) and create_navigation_v3.launch (map to /odom).

The Global Planner also has a set of parameters that need to be set. These parameters are loaded within the Global Planner package in the create_navigation_v3.launch file. The base_global_planner_params.yaml in the params folder contains parameters for the Global Planner. These parameters relates to how the Global Planner creates a path. The parameters for the Global Planner's costmap are found directly in the Global Planner package in the create_navigation_v3.launch file. These parameters determine how the Global Planner anaylzes the costmap.


More information about coordinate frames and transforms:
  - https://www.ros.org/reps/rep-0105.html
  - http://wiki.ros.org/tf2

### Map Server
The map server is a node that provides map data via ROS service. For the map server to properly function, it requires the directory that contains the yaml configuration file. In this package, the map.yaml file is located in the params folder. This file contains the name of the map and parameters needed for the map server to construct an occupancy grid of the map.

Out of the list of parameters found in the map.yaml file, the resolution parameters is the most important.



More information about Map Server
  - http://wiki.ros.org/map_server

