#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block ROPOD_4Wheel_kinb_cntr/Subscriber vel commands/Subscribe1
extern SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_ROPOD_4Wheel_kinb_cntr_geometry_msgs_Twist> Sub_ROPOD_4Wheel_kinb_cntr_528;

// For Block ROPOD_4Wheel_kinb_cntr/Debug SWs/Publish
extern SimulinkPublisher<geometry_msgs::Twist, SL_Bus_ROPOD_4Wheel_kinb_cntr_geometry_msgs_Twist> Pub_ROPOD_4Wheel_kinb_cntr_902;

// For Block ROPOD_4Wheel_kinb_cntr/Debug SWs/Publish1
extern SimulinkPublisher<geometry_msgs::Twist, SL_Bus_ROPOD_4Wheel_kinb_cntr_geometry_msgs_Twist> Pub_ROPOD_4Wheel_kinb_cntr_959;

// For Block ROPOD_4Wheel_kinb_cntr/Debug SWs/Publish2
extern SimulinkPublisher<geometry_msgs::Twist, SL_Bus_ROPOD_4Wheel_kinb_cntr_geometry_msgs_Twist> Pub_ROPOD_4Wheel_kinb_cntr_983;

// For Block ROPOD_4Wheel_kinb_cntr/Debug SWs/Publish3
extern SimulinkPublisher<geometry_msgs::Twist, SL_Bus_ROPOD_4Wheel_kinb_cntr_geometry_msgs_Twist> Pub_ROPOD_4Wheel_kinb_cntr_994;

// For Block ROPOD_4Wheel_kinb_cntr/Debug SWs/Publish4
extern SimulinkPublisher<geometry_msgs::Twist, SL_Bus_ROPOD_4Wheel_kinb_cntr_geometry_msgs_Twist> Pub_ROPOD_4Wheel_kinb_cntr_1179;

// For Block ROPOD_4Wheel_kinb_cntr/Debug SWs/Publish5
extern SimulinkPublisher<geometry_msgs::Twist, SL_Bus_ROPOD_4Wheel_kinb_cntr_geometry_msgs_Twist> Pub_ROPOD_4Wheel_kinb_cntr_1185;

// For Block ROPOD_4Wheel_kinb_cntr/Debug SWs/Publish6
extern SimulinkPublisher<geometry_msgs::Twist, SL_Bus_ROPOD_4Wheel_kinb_cntr_geometry_msgs_Twist> Pub_ROPOD_4Wheel_kinb_cntr_1190;

// For Block ROPOD_4Wheel_kinb_cntr/Debug SWs/Publish7
extern SimulinkPublisher<geometry_msgs::Twist, SL_Bus_ROPOD_4Wheel_kinb_cntr_geometry_msgs_Twist> Pub_ROPOD_4Wheel_kinb_cntr_1206;

// For Block ROPOD_4Wheel_kinb_cntr/Odometry publisher/Publish
extern SimulinkPublisher<nav_msgs::Odometry, SL_Bus_ROPOD_4Wheel_kinb_cntr_nav_msgs_Odometry> Pub_ROPOD_4Wheel_kinb_cntr_349;

// For Block ROPOD_4Wheel_kinb_cntr/ROS Ropod kinematic parameters2/Get Parameter
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_kinb_cntr_1081;

// For Block ROPOD_4Wheel_kinb_cntr/ROS Ropod kinematic parameters2/Get Parameter1
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_kinb_cntr_1097;

// For Block ROPOD_4Wheel_kinb_cntr/ROS Ropod kinematic parameters2/Get Parameter10
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_kinb_cntr_1109;

// For Block ROPOD_4Wheel_kinb_cntr/ROS Ropod kinematic parameters2/Get Parameter11
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_kinb_cntr_1082;

// For Block ROPOD_4Wheel_kinb_cntr/ROS Ropod kinematic parameters2/Get Parameter12
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_kinb_cntr_1083;

// For Block ROPOD_4Wheel_kinb_cntr/ROS Ropod kinematic parameters2/Get Parameter13
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_kinb_cntr_1084;

// For Block ROPOD_4Wheel_kinb_cntr/ROS Ropod kinematic parameters2/Get Parameter14
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_kinb_cntr_1085;

// For Block ROPOD_4Wheel_kinb_cntr/ROS Ropod kinematic parameters2/Get Parameter15
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_kinb_cntr_1086;

// For Block ROPOD_4Wheel_kinb_cntr/ROS Ropod kinematic parameters2/Get Parameter16
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_kinb_cntr_1087;

// For Block ROPOD_4Wheel_kinb_cntr/ROS Ropod kinematic parameters2/Get Parameter17
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_kinb_cntr_1088;

// For Block ROPOD_4Wheel_kinb_cntr/ROS Ropod kinematic parameters2/Get Parameter2
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_kinb_cntr_1098;

// For Block ROPOD_4Wheel_kinb_cntr/ROS Ropod kinematic parameters2/Get Parameter3
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_kinb_cntr_1101;

// For Block ROPOD_4Wheel_kinb_cntr/ROS Ropod kinematic parameters2/Get Parameter4
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_kinb_cntr_1102;

// For Block ROPOD_4Wheel_kinb_cntr/ROS Ropod kinematic parameters2/Get Parameter5
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_kinb_cntr_1103;

// For Block ROPOD_4Wheel_kinb_cntr/ROS Ropod kinematic parameters2/Get Parameter6
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_kinb_cntr_1104;

// For Block ROPOD_4Wheel_kinb_cntr/ROS Ropod kinematic parameters2/Get Parameter7
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_kinb_cntr_1110;

// For Block ROPOD_4Wheel_kinb_cntr/ROS Ropod kinematic parameters2/Get Parameter8
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_kinb_cntr_1111;

// For Block ROPOD_4Wheel_kinb_cntr/ROS Ropod kinematic parameters2/Get Parameter9
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_kinb_cntr_1112;

// For Block ROPOD_4Wheel_kinb_cntr/ROS Smart wheels conf/Get Parameter
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_kinb_cntr_542;

// For Block ROPOD_4Wheel_kinb_cntr/ROS Smart wheels conf/Get Parameter1
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_kinb_cntr_1130;

// For Block ROPOD_4Wheel_kinb_cntr/ROS Smart wheels conf/Get Parameter2
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_kinb_cntr_544;

// For Block ROPOD_4Wheel_kinb_cntr/ROS Smart wheels conf/Get Parameter3
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_kinb_cntr_1132;

// For Block ROPOD_4Wheel_kinb_cntr/ROS Smart wheels conf/Get Parameter4
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_kinb_cntr_1134;

// For Block ROPOD_4Wheel_kinb_cntr/ROS Smart wheels conf/Get Parameter5
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_kinb_cntr_1136;

// For Block ROPOD_4Wheel_kinb_cntr/ROS base conf/Get Parameter
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_kinb_cntr_551;

// For Block ROPOD_4Wheel_kinb_cntr/ROS base conf/Get Parameter1
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_kinb_cntr_552;

// For Block ROPOD_4Wheel_kinb_cntr/ROS base conf/Get Parameter2
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_kinb_cntr_664;

// For Block ROPOD_4Wheel_kinb_cntr/ROS base conf/Get Parameter3
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_kinb_cntr_665;

void slros_node_init(int argc, char** argv);

#endif
