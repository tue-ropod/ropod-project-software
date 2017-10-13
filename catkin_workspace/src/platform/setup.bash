#!/bin/bash

export CATKIN_WORKSPACE=~/ropod-project-software/catkin_workspace

export ED_PLUGIN_PATH=$CATKIN_WORKSPACE/devel/lib
export ED_MODEL_PATH=$CATKIN_WORKSPACE/src/functionalities/ED/ed_object_models/models

export PICO_IP=192.168.44.81
export PICO_IP_WIRED=10.0.0.2

source /opt/ros/kinetic/setup.bash
source $CATKIN_WORKSPACE/devel/setup.bash

alias buildit="cd $CATKIN_WORKSPACE; catkin_make"
alias clean_build="cd $CATKIN_WORKSPACE;
                   rm -rf build/ devel/;
                   cd $CATKIN_WORKSPACE/src/; 
                   rm CMakelists.txt; 
                   cd $CATKIN_WORKSPACE; 
                   catkin_make;"


alias catkin_workspace="cd $CATKIN_WORKSPACE"
alias applications="cd $CATKIN_WORKSPACE/src/applications"
alias functionalities="cd $CATKIN_WORKSPACE/src/functionalities"
alias platform="cd $CATKIN_WORKSPACE/src/platform"

alias teleop='rosrun robot_common teleop.py'
alias pstart='roslaunch pico_bringup start.launch'
