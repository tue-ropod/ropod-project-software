#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/Platform vel command/Subscribe1
extern SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Twist_zi6ye9> Sub_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_1899;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/Odometry publisher/Publish
extern SimulinkPublisher<nav_msgs::Odometry, SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Odometry_68ooni> Pub_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_1896;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROS Controllers conf/Get Parameter
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2716;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROS Controllers conf/Get Parameter1
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2919;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROS Controllers conf/Get Parameter10
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2931;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROS Controllers conf/Get Parameter11
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2932;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROS Controllers conf/Get Parameter12
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2933;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROS Controllers conf/Get Parameter13
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2934;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROS Controllers conf/Get Parameter14
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2935;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROS Controllers conf/Get Parameter2
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2920;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROS Controllers conf/Get Parameter3
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2898;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROS Controllers conf/Get Parameter4
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2900;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROS Controllers conf/Get Parameter5
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2902;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROS Controllers conf/Get Parameter6
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2903;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROS Controllers conf/Get Parameter7
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2921;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROS Controllers conf/Get Parameter8
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2922;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROS Controllers conf/Get Parameter9
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2923;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROS Ropod kinematic parameters2/Get Parameter
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2173;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROS Ropod kinematic parameters2/Get Parameter1
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2174;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROS Ropod kinematic parameters2/Get Parameter10
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2175;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROS Ropod kinematic parameters2/Get Parameter11
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2176;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROS Ropod kinematic parameters2/Get Parameter12
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2177;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROS Ropod kinematic parameters2/Get Parameter13
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2178;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROS Ropod kinematic parameters2/Get Parameter14
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2179;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROS Ropod kinematic parameters2/Get Parameter15
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2180;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROS Ropod kinematic parameters2/Get Parameter16
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2181;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROS Ropod kinematic parameters2/Get Parameter17
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2182;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROS Ropod kinematic parameters2/Get Parameter2
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2183;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROS Ropod kinematic parameters2/Get Parameter3
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2184;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROS Ropod kinematic parameters2/Get Parameter4
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2185;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROS Ropod kinematic parameters2/Get Parameter5
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2186;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROS Ropod kinematic parameters2/Get Parameter6
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2187;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROS Ropod kinematic parameters2/Get Parameter7
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2188;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROS Ropod kinematic parameters2/Get Parameter8
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2189;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROS Ropod kinematic parameters2/Get Parameter9
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2190;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROS Smart wheels conf/Get Parameter
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2213;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROS Smart wheels conf/Get Parameter1
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2214;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROS Smart wheels conf/Get Parameter2
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2215;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROS Smart wheels conf/Get Parameter3
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2216;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROS Smart wheels conf/Get Parameter4
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2217;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROS Smart wheels conf/Get Parameter5
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2218;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROS Smart wheels conf/Get Parameter6
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_4048;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROS Smart wheels conf/Get Parameter7
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_4050;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROS base conf/Get Parameter
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2237;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROS base conf/Get Parameter1
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2238;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROS base conf/Get Parameter2
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2239;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROS base conf/Get Parameter3
extern SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2240;

void slros_node_init(int argc, char** argv);

#endif
