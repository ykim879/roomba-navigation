## Create Navigation

The create_navigation package is what allows the creation of a path for the Roomba to follow. This package utilizes the Global Planner package that's part of the move_base package in ROS.

<p align="center">
  <img width="460" height="300" src="https://user-images.githubusercontent.com/25068094/128765672-7a3025d6-d7f5-47cd-86f0-d6ed71c1b3d3.png">
</p>

## Global Planner

The Global Planner requires a map server and the proper set-up of transform bewteen coordinate frames. Before the Global Planner can even run, the transforms between the map frame to the /odom frame, and the /odom frame to the base_link frame need to be in place. The map server contains the map and its configurations required for the global planner to construct a costmap. 

The transforms bewteen coordinate frames are handled by static transforms nodes that are launched along with create_gazebo.launch (/odom to base_link) and create_navigation_v3.launch (map to /odom).

The Global Planner also has a set of parameters that need to be set. These parameters are loaded within the Global Planner package in the create_navigation_v3.launch file. The base_global_planner_params.yaml in the params folder contains parameters for the Global Planner. These parameters relates to how the Global Planner creates a path. The parameters for the Global Planner's costmap are found directly in the Global Planner package in the create_navigation_v3.launch file. These parameters determine how the Global Planner anaylzes the costmap.


More information about coordinate frames and transforms:
  - https://www.ros.org/reps/rep-0105.html
  - http://wiki.ros.org/tf2

### Map Server
The map server is a node that provides map data via ROS service. For the map server to properly function, it requires the directory that contains the yaml configuration file. In this package, the map.yaml file is located in the params folder. This file contains the name of the map and parameters needed for the map server to construct an occupancy grid of the map.

Out of the list of parameters found in the map.yaml file, the resolution parameter is the most important. The resolution parameter refers to the resolution of the map, which is measured in meters per pixel. The resolution parameter needs to be set where the scale between the costmap and the 3D model of the KACB building is one-to-one.

More information about Map Server
  - http://wiki.ros.org/map_server

### Calculation of the Resolution Parameter

1. Convert the .stl file of one of the three floors of the KACB into a .pgm file. This is done by converting .stl to .jpg, and then converting the .jpg to .pgm. 
  - STL to JPG Converter: https://products.aspose.app/cad/conversion/stl-to-jpg
  - JPG to PGM Converter: https://convertio.co/jpg-pgm/

2. Pick a wall to measure. Use a pixel counter tool to measure the wall's length in pixels.
  - Pixel Counter: https://www.rapidtables.com/web/tools/pixel-ruler.html

3. Measure the same wall (in inches) in the .stl file. Use Autodesk Inventor to measure the model in the .stl file. 

4. Use the scale (8 ft / 1 in.) in the CAD file of the KACB buildin (153.1.pdf) to convert the wall length in the .stl file to the real length of the wall.

5. Convert the real length of the wall into meters.

6. Divide the real length of the wall by the length of the wall in pixels. The resolution of the map is obtained.





