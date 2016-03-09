ED RVIZ Plugins [![Build Status](https://travis-ci.org/tue-robotics/ed_rviz_plugins.svg?branch=master)](https://travis-ci.org/tue-robotics/ed_rviz_plugins)
======

## Introduction

Visualizes the ed_gui_server output in RVIZ.

## Installation

Requirements:
* ED (https://github.com/tue-robotics/ed.git)
* A 2D Range Finder (http://wiki.ros.org/Sensors) which scans in a plane parallel to the floor
* A [TF](wiki.ros.org/tf) containing transforms from the robots' odometry frame to the laser range finder frame

Check out the following packages in your workspace:

    cd <your_catkin_workspace>/src
    git clone https://github.com/tue-robotics/ed_localization.git

And compile

    cd <your_catkin_workspace>:
    catkin_make
    
## Tutorial

All ED tutorials can be found in the ed_tutorials package: https://github.com/tue-robotics/ed_tutorials.git
