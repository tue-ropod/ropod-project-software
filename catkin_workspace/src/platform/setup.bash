#!/bin/bash

export ROS_PACKAGE_PATH=~/ros/:$ROS_PACKAGE_PATH
export CATKIN_WORKSPACE=~/ropod-project/catkin_workspace

export ED_PLUGIN_PATH=$CATKIN_WORKSPACE/devel/lib
export ED_MODEL_PATH=$CATKIN_WORKSPACE/src/functionalities/ED/ed_object_models/models

source /opt/ros/kinetic/setup.bash
source /home/ropod/ropod-project/catkin_workspace/devel/setup.bash

alias build="cd ~/ropod-project/catkin-workspace/; catkin_make"
alias clean_build="cd ~/ropod-project/catkin-workspace/;
                   rm -rf build/ devel/;
                   cd src/; 
                   rm CMakelists.txt; 
                   cd ../; 
                   catkin_make;"
