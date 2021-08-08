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
To automatically source scripts, insert the following commands in the home directory.
```bash
$ echo "source /opt/ros/noetic/setup.bash" >> ~/.bashrc
$ source ~/.bashrc
$ cd ~/catkin_ws
$ echo "source devel/setup.bash" >> ~/.bashrc
$ source ~/.bashrc
```
Close the terminal and open a new one. The scripts should now be automatically sourced.

The source of this instructions are in this link: http://wiki.ros.org/catkin/Tutorials/create_a_workspace


Thirdly, clone the repository and run catkin_make to build the your package. 

```bash
$ cd catkin_ws/src
$ git clone https://github.com/ykim879/roomba-navigation
$ cd ..
$ catkin_make
```
## Impement the project
To implement the project, follow the following 3 steps on different terminal windows.
### 1. Lauch roscore
Launch roscore by using following command:
```bash
$ roscore
```
### 2. Launch Gazebo
Proceed the following commands in your home directory (the directory you are in when you open the terminal).
```bash
$ cd catkin_ws/src
$ roslaunch create_gazebo create_gazebo.launch
```
### 3. Launch UWB Simulation and Chan Ho and Harbi Localization Simulation 
Proceed the following commands in your home directory (the directory you are in when you open the terminal).
```bash
$ cd catkin_ws/src
$ roslaunch advoard_localization chan_ho_harbi.launch
```
### 4. Launch Roomba's Control Code

```bash
$ cd catkin_ws/src
$ roslaunch create_control create_control.launch
```

## STL files
STL files on the root folder is consisted of 3D-CAD floor plan of one of the building in Georgia Tech, Klaus building.

**153-1 revised.stl**: 3D-CAD floor plan for the first floor.

**153-2.stl**: 3D-CAD floor plan for the second floor.

**153-3.stl**: 3D-CAD floor plan for the third floor.
