#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "ROPOD_4Wheel_TdistZMPC_cntr";

// For Block ROPOD_4Wheel_TdistZMPC_cntr/Platform mobidik command/Subscribe1
SimulinkSubscriber<std_msgs::UInt16, SL_Bus_ROPOD_4Wheel_TdistZMPC_cntr_std_msgs_UInt16> Sub_ROPOD_4Wheel_TdistZMPC_cntr_9639;

// For Block ROPOD_4Wheel_TdistZMPC_cntr/Platform mobidik command/Subscribe2
SimulinkSubscriber<std_msgs::Bool, SL_Bus_ROPOD_4Wheel_TdistZMPC_cntr_std_msgs_Bool> Sub_ROPOD_4Wheel_TdistZMPC_cntr_9640;

// For Block ROPOD_4Wheel_TdistZMPC_cntr/Platform vel command/Subscribe1
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_ROPOD_4Wheel_TdistZMPC_cntr_geometry_msgs_Twist> Sub_ROPOD_4Wheel_TdistZMPC_cntr_1899;

// For Block ROPOD_4Wheel_TdistZMPC_cntr/Odometry publisher/Publish
SimulinkPublisher<nav_msgs::Odometry, SL_Bus_ROPOD_4Wheel_TdistZMPC_cntr_nav_msgs_Odometry> Pub_ROPOD_4Wheel_TdistZMPC_cntr_1896;

// For Block ROPOD_4Wheel_TdistZMPC_cntr/Subsystem/Publish
SimulinkPublisher<geometry_msgs::WrenchStamped, SL_Bus_ROPOD_4Wheel_TdistZMPC_cn_WrenchStamped_datn2q> Pub_ROPOD_4Wheel_TdistZMPC_cntr_9614;

// For Block ROPOD_4Wheel_TdistZMPC_cntr/Subsystem/Publish1
SimulinkPublisher<geometry_msgs::WrenchStamped, SL_Bus_ROPOD_4Wheel_TdistZMPC_cn_WrenchStamped_datn2q> Pub_ROPOD_4Wheel_TdistZMPC_cntr_9624;

// For Block ROPOD_4Wheel_TdistZMPC_cntr/Subsystem/Publish2
SimulinkPublisher<geometry_msgs::WrenchStamped, SL_Bus_ROPOD_4Wheel_TdistZMPC_cn_WrenchStamped_datn2q> Pub_ROPOD_4Wheel_TdistZMPC_cntr_9625;

// For Block ROPOD_4Wheel_TdistZMPC_cntr/Subsystem/Publish3
SimulinkPublisher<geometry_msgs::WrenchStamped, SL_Bus_ROPOD_4Wheel_TdistZMPC_cn_WrenchStamped_datn2q> Pub_ROPOD_4Wheel_TdistZMPC_cntr_9626;

// For Block ROPOD_4Wheel_TdistZMPC_cntr/Subsystem/Publish4
SimulinkPublisher<std_msgs::UInt16, SL_Bus_ROPOD_4Wheel_TdistZMPC_cntr_std_msgs_UInt16> Pub_ROPOD_4Wheel_TdistZMPC_cntr_9627;

// For Block ROPOD_4Wheel_TdistZMPC_cntr/Subsystem/Publish5
SimulinkPublisher<std_msgs::Bool, SL_Bus_ROPOD_4Wheel_TdistZMPC_cntr_std_msgs_Bool> Pub_ROPOD_4Wheel_TdistZMPC_cntr_9643;

// For Block ROPOD_4Wheel_TdistZMPC_cntr/ROS Controllers conf/Get Parameter
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2716;

// For Block ROPOD_4Wheel_TdistZMPC_cntr/ROS Controllers conf/Get Parameter1
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2919;

// For Block ROPOD_4Wheel_TdistZMPC_cntr/ROS Controllers conf/Get Parameter10
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2931;

// For Block ROPOD_4Wheel_TdistZMPC_cntr/ROS Controllers conf/Get Parameter11
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2932;

// For Block ROPOD_4Wheel_TdistZMPC_cntr/ROS Controllers conf/Get Parameter12
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2933;

// For Block ROPOD_4Wheel_TdistZMPC_cntr/ROS Controllers conf/Get Parameter13
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2934;

// For Block ROPOD_4Wheel_TdistZMPC_cntr/ROS Controllers conf/Get Parameter14
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2935;

// For Block ROPOD_4Wheel_TdistZMPC_cntr/ROS Controllers conf/Get Parameter2
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2920;

// For Block ROPOD_4Wheel_TdistZMPC_cntr/ROS Controllers conf/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2898;

// For Block ROPOD_4Wheel_TdistZMPC_cntr/ROS Controllers conf/Get Parameter4
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2900;

// For Block ROPOD_4Wheel_TdistZMPC_cntr/ROS Controllers conf/Get Parameter5
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2902;

// For Block ROPOD_4Wheel_TdistZMPC_cntr/ROS Controllers conf/Get Parameter6
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2903;

// For Block ROPOD_4Wheel_TdistZMPC_cntr/ROS Controllers conf/Get Parameter7
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2921;

// For Block ROPOD_4Wheel_TdistZMPC_cntr/ROS Controllers conf/Get Parameter8
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2922;

// For Block ROPOD_4Wheel_TdistZMPC_cntr/ROS Controllers conf/Get Parameter9
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2923;

// For Block ROPOD_4Wheel_TdistZMPC_cntr/ROS Ropod kinematic parameters2/Get Parameter
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2173;

// For Block ROPOD_4Wheel_TdistZMPC_cntr/ROS Ropod kinematic parameters2/Get Parameter1
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2174;

// For Block ROPOD_4Wheel_TdistZMPC_cntr/ROS Ropod kinematic parameters2/Get Parameter10
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2175;

// For Block ROPOD_4Wheel_TdistZMPC_cntr/ROS Ropod kinematic parameters2/Get Parameter11
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2176;

// For Block ROPOD_4Wheel_TdistZMPC_cntr/ROS Ropod kinematic parameters2/Get Parameter12
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2177;

// For Block ROPOD_4Wheel_TdistZMPC_cntr/ROS Ropod kinematic parameters2/Get Parameter13
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2178;

// For Block ROPOD_4Wheel_TdistZMPC_cntr/ROS Ropod kinematic parameters2/Get Parameter14
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2179;

// For Block ROPOD_4Wheel_TdistZMPC_cntr/ROS Ropod kinematic parameters2/Get Parameter15
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2180;

// For Block ROPOD_4Wheel_TdistZMPC_cntr/ROS Ropod kinematic parameters2/Get Parameter16
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2181;

// For Block ROPOD_4Wheel_TdistZMPC_cntr/ROS Ropod kinematic parameters2/Get Parameter17
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2182;

// For Block ROPOD_4Wheel_TdistZMPC_cntr/ROS Ropod kinematic parameters2/Get Parameter2
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2183;

// For Block ROPOD_4Wheel_TdistZMPC_cntr/ROS Ropod kinematic parameters2/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2184;

// For Block ROPOD_4Wheel_TdistZMPC_cntr/ROS Ropod kinematic parameters2/Get Parameter4
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2185;

// For Block ROPOD_4Wheel_TdistZMPC_cntr/ROS Ropod kinematic parameters2/Get Parameter5
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2186;

// For Block ROPOD_4Wheel_TdistZMPC_cntr/ROS Ropod kinematic parameters2/Get Parameter6
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2187;

// For Block ROPOD_4Wheel_TdistZMPC_cntr/ROS Ropod kinematic parameters2/Get Parameter7
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2188;

// For Block ROPOD_4Wheel_TdistZMPC_cntr/ROS Ropod kinematic parameters2/Get Parameter8
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2189;

// For Block ROPOD_4Wheel_TdistZMPC_cntr/ROS Ropod kinematic parameters2/Get Parameter9
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2190;

// For Block ROPOD_4Wheel_TdistZMPC_cntr/ROS Smart wheels conf/Get Parameter
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2213;

// For Block ROPOD_4Wheel_TdistZMPC_cntr/ROS Smart wheels conf/Get Parameter1
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2214;

// For Block ROPOD_4Wheel_TdistZMPC_cntr/ROS Smart wheels conf/Get Parameter2
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2215;

// For Block ROPOD_4Wheel_TdistZMPC_cntr/ROS Smart wheels conf/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2216;

// For Block ROPOD_4Wheel_TdistZMPC_cntr/ROS Smart wheels conf/Get Parameter4
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2217;

// For Block ROPOD_4Wheel_TdistZMPC_cntr/ROS Smart wheels conf/Get Parameter5
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2218;

// For Block ROPOD_4Wheel_TdistZMPC_cntr/ROS base conf/Get Parameter
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2237;

// For Block ROPOD_4Wheel_TdistZMPC_cntr/ROS base conf/Get Parameter1
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2238;

// For Block ROPOD_4Wheel_TdistZMPC_cntr/ROS base conf/Get Parameter2
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2239;

// For Block ROPOD_4Wheel_TdistZMPC_cntr/ROS base conf/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2240;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

