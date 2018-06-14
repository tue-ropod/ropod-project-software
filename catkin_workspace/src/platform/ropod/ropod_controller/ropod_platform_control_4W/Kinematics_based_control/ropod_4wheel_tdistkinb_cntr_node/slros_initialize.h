#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/Platform vel command/Subscribe1
extern SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_ROPOD_4Wheel_Tdistkinb_cntr_node_geometry_msgs_Twist> Sub_ROPOD_4Wheel_Tdistkinb_cntr_node_1899;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/Odometry publisher/Publish
extern SimulinkPublisher<nav_msgs::Odometry, SL_Bus_ROPOD_4Wheel_Tdistkinb_cntr_node_nav_msgs_Odometry> Pub_ROPOD_4Wheel_Tdistkinb_cntr_node_1896;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Controllers conf/Get Parameter
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2716;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Controllers conf/Get Parameter1
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2919;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Controllers conf/Get Parameter10
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2931;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Controllers conf/Get Parameter11
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2932;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Controllers conf/Get Parameter12
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2933;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Controllers conf/Get Parameter13
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2934;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Controllers conf/Get Parameter14
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2935;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Controllers conf/Get Parameter2
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2920;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Controllers conf/Get Parameter3
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2898;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Controllers conf/Get Parameter4
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2900;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Controllers conf/Get Parameter5
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2902;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Controllers conf/Get Parameter6
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2903;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Controllers conf/Get Parameter7
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2921;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Controllers conf/Get Parameter8
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2922;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Controllers conf/Get Parameter9
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2923;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Ropod kinematic parameters2/Get Parameter
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2173;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Ropod kinematic parameters2/Get Parameter1
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2174;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Ropod kinematic parameters2/Get Parameter10
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2175;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Ropod kinematic parameters2/Get Parameter11
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2176;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Ropod kinematic parameters2/Get Parameter12
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2177;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Ropod kinematic parameters2/Get Parameter13
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2178;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Ropod kinematic parameters2/Get Parameter14
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2179;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Ropod kinematic parameters2/Get Parameter15
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2180;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Ropod kinematic parameters2/Get Parameter16
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2181;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Ropod kinematic parameters2/Get Parameter17
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2182;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Ropod kinematic parameters2/Get Parameter2
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2183;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Ropod kinematic parameters2/Get Parameter3
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2184;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Ropod kinematic parameters2/Get Parameter4
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2185;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Ropod kinematic parameters2/Get Parameter5
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2186;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Ropod kinematic parameters2/Get Parameter6
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2187;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Ropod kinematic parameters2/Get Parameter7
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2188;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Ropod kinematic parameters2/Get Parameter8
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2189;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Ropod kinematic parameters2/Get Parameter9
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2190;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Smart wheels conf/Get Parameter
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2213;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Smart wheels conf/Get Parameter1
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2214;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Smart wheels conf/Get Parameter2
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2215;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Smart wheels conf/Get Parameter3
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2216;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Smart wheels conf/Get Parameter4
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2217;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Smart wheels conf/Get Parameter5
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2218;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS base conf/Get Parameter
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2237;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS base conf/Get Parameter1
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2238;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS base conf/Get Parameter2
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2239;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS base conf/Get Parameter3
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2240;

void slros_node_init(int argc, char** argv);

#endif