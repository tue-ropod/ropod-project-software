#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block ROPOD_4Wheel_Tdistkinb_cntr/Platform vel command/Subscribe1
extern SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_ROPOD_4Wheel_Tdistkinb_cntr_geometry_msgs_Twist> Sub_ROPOD_4Wheel_Tdistkinb_cntr_1899;

// For Block ROPOD_4Wheel_Tdistkinb_cntr/Odometry publisher/Publish
extern SimulinkPublisher<nav_msgs::Odometry, SL_Bus_ROPOD_4Wheel_Tdistkinb_cntr_nav_msgs_Odometry> Pub_ROPOD_4Wheel_Tdistkinb_cntr_1896;

// For Block ROPOD_4Wheel_Tdistkinb_cntr/ROS Controllers conf/Get Parameter
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_4249;

// For Block ROPOD_4Wheel_Tdistkinb_cntr/ROS Controllers conf/Get Parameter1
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_4250;

// For Block ROPOD_4Wheel_Tdistkinb_cntr/ROS Controllers conf/Get Parameter10
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_4251;

// For Block ROPOD_4Wheel_Tdistkinb_cntr/ROS Controllers conf/Get Parameter11
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_4252;

// For Block ROPOD_4Wheel_Tdistkinb_cntr/ROS Controllers conf/Get Parameter12
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_4253;

// For Block ROPOD_4Wheel_Tdistkinb_cntr/ROS Controllers conf/Get Parameter13
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_4254;

// For Block ROPOD_4Wheel_Tdistkinb_cntr/ROS Controllers conf/Get Parameter14
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_4255;

// For Block ROPOD_4Wheel_Tdistkinb_cntr/ROS Controllers conf/Get Parameter2
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_4256;

// For Block ROPOD_4Wheel_Tdistkinb_cntr/ROS Controllers conf/Get Parameter3
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_4257;

// For Block ROPOD_4Wheel_Tdistkinb_cntr/ROS Controllers conf/Get Parameter4
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_4258;

// For Block ROPOD_4Wheel_Tdistkinb_cntr/ROS Controllers conf/Get Parameter5
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_4259;

// For Block ROPOD_4Wheel_Tdistkinb_cntr/ROS Controllers conf/Get Parameter6
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_4260;

// For Block ROPOD_4Wheel_Tdistkinb_cntr/ROS Controllers conf/Get Parameter7
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_4261;

// For Block ROPOD_4Wheel_Tdistkinb_cntr/ROS Controllers conf/Get Parameter8
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_4262;

// For Block ROPOD_4Wheel_Tdistkinb_cntr/ROS Controllers conf/Get Parameter9
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_4263;

// For Block ROPOD_4Wheel_Tdistkinb_cntr/ROS Ropod kinematic parameters2/Get Parameter
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_4283;

// For Block ROPOD_4Wheel_Tdistkinb_cntr/ROS Ropod kinematic parameters2/Get Parameter1
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_4284;

// For Block ROPOD_4Wheel_Tdistkinb_cntr/ROS Ropod kinematic parameters2/Get Parameter10
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_4285;

// For Block ROPOD_4Wheel_Tdistkinb_cntr/ROS Ropod kinematic parameters2/Get Parameter11
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_4286;

// For Block ROPOD_4Wheel_Tdistkinb_cntr/ROS Ropod kinematic parameters2/Get Parameter12
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_4287;

// For Block ROPOD_4Wheel_Tdistkinb_cntr/ROS Ropod kinematic parameters2/Get Parameter13
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_4288;

// For Block ROPOD_4Wheel_Tdistkinb_cntr/ROS Ropod kinematic parameters2/Get Parameter14
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_4289;

// For Block ROPOD_4Wheel_Tdistkinb_cntr/ROS Ropod kinematic parameters2/Get Parameter15
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_4290;

// For Block ROPOD_4Wheel_Tdistkinb_cntr/ROS Ropod kinematic parameters2/Get Parameter16
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_4291;

// For Block ROPOD_4Wheel_Tdistkinb_cntr/ROS Ropod kinematic parameters2/Get Parameter17
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_4292;

// For Block ROPOD_4Wheel_Tdistkinb_cntr/ROS Ropod kinematic parameters2/Get Parameter2
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_4293;

// For Block ROPOD_4Wheel_Tdistkinb_cntr/ROS Ropod kinematic parameters2/Get Parameter3
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_4294;

// For Block ROPOD_4Wheel_Tdistkinb_cntr/ROS Ropod kinematic parameters2/Get Parameter4
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_4295;

// For Block ROPOD_4Wheel_Tdistkinb_cntr/ROS Ropod kinematic parameters2/Get Parameter5
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_4296;

// For Block ROPOD_4Wheel_Tdistkinb_cntr/ROS Ropod kinematic parameters2/Get Parameter6
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_4297;

// For Block ROPOD_4Wheel_Tdistkinb_cntr/ROS Ropod kinematic parameters2/Get Parameter7
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_4298;

// For Block ROPOD_4Wheel_Tdistkinb_cntr/ROS Ropod kinematic parameters2/Get Parameter8
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_4299;

// For Block ROPOD_4Wheel_Tdistkinb_cntr/ROS Ropod kinematic parameters2/Get Parameter9
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_4300;

// For Block ROPOD_4Wheel_Tdistkinb_cntr/ROS Smart wheels conf/Get Parameter
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_4323;

// For Block ROPOD_4Wheel_Tdistkinb_cntr/ROS Smart wheels conf/Get Parameter1
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_4324;

// For Block ROPOD_4Wheel_Tdistkinb_cntr/ROS Smart wheels conf/Get Parameter2
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_4325;

// For Block ROPOD_4Wheel_Tdistkinb_cntr/ROS Smart wheels conf/Get Parameter3
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_4326;

// For Block ROPOD_4Wheel_Tdistkinb_cntr/ROS Smart wheels conf/Get Parameter4
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_4327;

// For Block ROPOD_4Wheel_Tdistkinb_cntr/ROS Smart wheels conf/Get Parameter5
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_4328;

// For Block ROPOD_4Wheel_Tdistkinb_cntr/ROS Smart wheels conf/Get Parameter6
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_4329;

// For Block ROPOD_4Wheel_Tdistkinb_cntr/ROS Smart wheels conf/Get Parameter7
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_4330;

// For Block ROPOD_4Wheel_Tdistkinb_cntr/ROS base conf/Get Parameter
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_4342;

// For Block ROPOD_4Wheel_Tdistkinb_cntr/ROS base conf/Get Parameter1
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_4343;

// For Block ROPOD_4Wheel_Tdistkinb_cntr/ROS base conf/Get Parameter2
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_4344;

// For Block ROPOD_4Wheel_Tdistkinb_cntr/ROS base conf/Get Parameter3
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_4345;

void slros_node_init(int argc, char** argv);

#endif
