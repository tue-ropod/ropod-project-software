#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "ROPOD_4Wheel_kinb_cntr";

// For Block ROPOD_4Wheel_kinb_cntr/Subscriber vel commands/Subscribe1
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_ROPOD_4Wheel_kinb_cntr_geometry_msgs_Twist> Sub_ROPOD_4Wheel_kinb_cntr_528;

// For Block ROPOD_4Wheel_kinb_cntr/Debug SWs/Publish
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_ROPOD_4Wheel_kinb_cntr_geometry_msgs_Twist> Pub_ROPOD_4Wheel_kinb_cntr_902;

// For Block ROPOD_4Wheel_kinb_cntr/Debug SWs/Publish1
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_ROPOD_4Wheel_kinb_cntr_geometry_msgs_Twist> Pub_ROPOD_4Wheel_kinb_cntr_959;

// For Block ROPOD_4Wheel_kinb_cntr/Debug SWs/Publish2
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_ROPOD_4Wheel_kinb_cntr_geometry_msgs_Twist> Pub_ROPOD_4Wheel_kinb_cntr_983;

// For Block ROPOD_4Wheel_kinb_cntr/Debug SWs/Publish3
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_ROPOD_4Wheel_kinb_cntr_geometry_msgs_Twist> Pub_ROPOD_4Wheel_kinb_cntr_994;

// For Block ROPOD_4Wheel_kinb_cntr/Odometry publisher/Publish
SimulinkPublisher<nav_msgs::Odometry, SL_Bus_ROPOD_4Wheel_kinb_cntr_nav_msgs_Odometry> Pub_ROPOD_4Wheel_kinb_cntr_349;

// For Block ROPOD_4Wheel_kinb_cntr/ROS Ropod kinematic parameters2/Get Parameter
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_kinb_cntr_1081;

// For Block ROPOD_4Wheel_kinb_cntr/ROS Ropod kinematic parameters2/Get Parameter1
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_kinb_cntr_1097;

// For Block ROPOD_4Wheel_kinb_cntr/ROS Ropod kinematic parameters2/Get Parameter10
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_kinb_cntr_1109;

// For Block ROPOD_4Wheel_kinb_cntr/ROS Ropod kinematic parameters2/Get Parameter11
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_kinb_cntr_1082;

// For Block ROPOD_4Wheel_kinb_cntr/ROS Ropod kinematic parameters2/Get Parameter12
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_kinb_cntr_1083;

// For Block ROPOD_4Wheel_kinb_cntr/ROS Ropod kinematic parameters2/Get Parameter13
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_kinb_cntr_1084;

// For Block ROPOD_4Wheel_kinb_cntr/ROS Ropod kinematic parameters2/Get Parameter14
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_kinb_cntr_1085;

// For Block ROPOD_4Wheel_kinb_cntr/ROS Ropod kinematic parameters2/Get Parameter15
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_kinb_cntr_1086;

// For Block ROPOD_4Wheel_kinb_cntr/ROS Ropod kinematic parameters2/Get Parameter16
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_kinb_cntr_1087;

// For Block ROPOD_4Wheel_kinb_cntr/ROS Ropod kinematic parameters2/Get Parameter17
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_kinb_cntr_1088;

// For Block ROPOD_4Wheel_kinb_cntr/ROS Ropod kinematic parameters2/Get Parameter2
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_kinb_cntr_1098;

// For Block ROPOD_4Wheel_kinb_cntr/ROS Ropod kinematic parameters2/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_kinb_cntr_1101;

// For Block ROPOD_4Wheel_kinb_cntr/ROS Ropod kinematic parameters2/Get Parameter4
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_kinb_cntr_1102;

// For Block ROPOD_4Wheel_kinb_cntr/ROS Ropod kinematic parameters2/Get Parameter5
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_kinb_cntr_1103;

// For Block ROPOD_4Wheel_kinb_cntr/ROS Ropod kinematic parameters2/Get Parameter6
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_kinb_cntr_1104;

// For Block ROPOD_4Wheel_kinb_cntr/ROS Ropod kinematic parameters2/Get Parameter7
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_kinb_cntr_1110;

// For Block ROPOD_4Wheel_kinb_cntr/ROS Ropod kinematic parameters2/Get Parameter8
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_kinb_cntr_1111;

// For Block ROPOD_4Wheel_kinb_cntr/ROS Ropod kinematic parameters2/Get Parameter9
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_kinb_cntr_1112;

// For Block ROPOD_4Wheel_kinb_cntr/ROS Smart wheels conf/Get Parameter
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_kinb_cntr_542;

// For Block ROPOD_4Wheel_kinb_cntr/ROS Smart wheels conf/Get Parameter1
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_kinb_cntr_1130;

// For Block ROPOD_4Wheel_kinb_cntr/ROS Smart wheels conf/Get Parameter2
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_kinb_cntr_544;

// For Block ROPOD_4Wheel_kinb_cntr/ROS Smart wheels conf/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_kinb_cntr_1132;

// For Block ROPOD_4Wheel_kinb_cntr/ROS Smart wheels conf/Get Parameter4
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_kinb_cntr_1134;

// For Block ROPOD_4Wheel_kinb_cntr/ROS Smart wheels conf/Get Parameter5
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_kinb_cntr_1136;

// For Block ROPOD_4Wheel_kinb_cntr/ROS base conf/Get Parameter
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_kinb_cntr_551;

// For Block ROPOD_4Wheel_kinb_cntr/ROS base conf/Get Parameter1
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_kinb_cntr_552;

// For Block ROPOD_4Wheel_kinb_cntr/ROS base conf/Get Parameter2
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_kinb_cntr_664;

// For Block ROPOD_4Wheel_kinb_cntr/ROS base conf/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_kinb_cntr_665;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

