# roomba-navigation
## Set up
To set up this repository, you need linux environemnt and ros-noetic.
You can proceed installation on by following the link: http://wiki.ros.org/noetic/Installation

Secondly, you need to create a workspace for catkin by following the command in the home directory (the directory you are in when you open the terminal)
```bash
$ source /opt/ros/noetic/setup.bash
$ mkdir -p ~/catkin_ws/src
$ cd ~/catkin_ws/
$ catkin_make
$ source devel/setup.bash
```
The source of this instructions are in this link: http://wiki.ros.org/catkin/Tutorials/create_a_workspace

Thirdly, clone the repository. 
After cloning the repository, copy create_control, create_description, and create_gazebo file in roomba-navigation/catkin_ws/src/ directory and paste it on your catkin-ws/src directory (the directory you made on second step). 
## Impement the project
To implement the project, follow the following 3 steps on different terminal windows.
### Lauch roscore
Launch roscore by using following command:
```bash
$ roscore
```
### Launching the roomba-gazebo-world 
Proceed the following commands in your home directory (the directory you are in when you open the terminal).
```bash
$ source /opt/ros/noetic/setup.bash
$ cd catkin_ws/
$ source devel/setup.bash
$ cd src
$ roslaunch create_gazebo/launch/create_gazebo.launch
```

### Launching the roomba-gazebo-control
Proceed the following commands in your home directory (the directory you are in when you open the terminal).
```bash
$ source /opt/ros/noetic/setup.bash
$ cd catkin_ws/
$ source devel/setup.bash
$ cd src
$ roslaunch create_control/launch/create_control.launch
```



## STL files
STL files on the root folder is consisted of 3D-CAD floor plan of one of the building in Georgia Tech, Klaus building.

**153-1 revised.stl**: 3D-CAD floor plan for the first floor.

**153-2.stl**: 3D-CAD floor plan for the second floor.

**153-3.stl**: 3D-CAD floor plan for the third floor.
