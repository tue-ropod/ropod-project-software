#!/bin/bash

export ROS_PACKAGE_PATH=~/ros/:$ROS_PACKAGE_PATH
export CATKIN_WORKSPACE=~/ropod-project/catkin_workspace

export ED_PLUGIN_PATH=$CATKIN_WORKSPACE/devel/lib
export ED_MODEL_PATH=$CATKIN_WORKSPACE/src/functionalities/ED/ed_object_models/models

source /opt/ros/kinetic/setup.bash
source /home/ropod/ropod-project/catkin_workspace/devel/setup.bash

alias build="cd $CATKIN_WORKSPACE; catkin_make"
alias clean_build="cd $CATKIN_WORKSPACE;
                   rm -rf build/ devel/;
                   cd $CATKIN_WORKSPACE/src/; 
                   rm CMakelists.txt; 
                   cd $CATKIN_WORKSPACE; 
                   catkin_make;"

