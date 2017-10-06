#!/bin/bash

export ROS_IP=`hostname -I`

alias sshpico="ssh ropod@192.168.44.81"
alias sshpico-wired="ssh ropod@10.0.0.2"
alias pico-core='export ROS_MASTER_URI=http://192.168.44.81:11311'
alias pico-core-wired='export ROS_MASTER_URI=http://10.0.0.2:11311'
