#ifndef _SLROS_BUSMSG_CONVERSION_H_
#define _SLROS_BUSMSG_CONVERSION_H_

#include <ros/ros.h>
#include <geometry_msgs/Point.h>
#include <geometry_msgs/Pose.h>
#include <geometry_msgs/PoseWithCovariance.h>
#include <geometry_msgs/Quaternion.h>
#include <geometry_msgs/Twist.h>
#include <geometry_msgs/TwistWithCovariance.h>
#include <geometry_msgs/Vector3.h>
#include <nav_msgs/Odometry.h>
#include <ros/time.h>
#include <std_msgs/Header.h>
#include "ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_types.h"
#include "slros_msgconvert_utils.h"


void convertFromBus(geometry_msgs::Point* msgPtr, SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Point_zgkt6w const* busPtr);
void convertToBus(SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Point_zgkt6w* busPtr, geometry_msgs::Point const* msgPtr);

void convertFromBus(geometry_msgs::Pose* msgPtr, SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Pose_h6lc2h const* busPtr);
void convertToBus(SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Pose_h6lc2h* busPtr, geometry_msgs::Pose const* msgPtr);

void convertFromBus(geometry_msgs::PoseWithCovariance* msgPtr, SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_PoseWithCovariance_urg8os const* busPtr);
void convertToBus(SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_PoseWithCovariance_urg8os* busPtr, geometry_msgs::PoseWithCovariance const* msgPtr);

void convertFromBus(geometry_msgs::Quaternion* msgPtr, SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Quaternion_k8oboa const* busPtr);
void convertToBus(SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Quaternion_k8oboa* busPtr, geometry_msgs::Quaternion const* msgPtr);

void convertFromBus(geometry_msgs::Twist* msgPtr, SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Twist_zi6ye9 const* busPtr);
void convertToBus(SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Twist_zi6ye9* busPtr, geometry_msgs::Twist const* msgPtr);

void convertFromBus(geometry_msgs::TwistWithCovariance* msgPtr, SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_TwistWithCovariance_59n2wu const* busPtr);
void convertToBus(SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_TwistWithCovariance_59n2wu* busPtr, geometry_msgs::TwistWithCovariance const* msgPtr);

void convertFromBus(geometry_msgs::Vector3* msgPtr, SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Vector3_52wmew const* busPtr);
void convertToBus(SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Vector3_52wmew* busPtr, geometry_msgs::Vector3 const* msgPtr);

void convertFromBus(nav_msgs::Odometry* msgPtr, SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Odometry_68ooni const* busPtr);
void convertToBus(SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Odometry_68ooni* busPtr, nav_msgs::Odometry const* msgPtr);

void convertFromBus(ros::Time* msgPtr, SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Time_nefcry const* busPtr);
void convertToBus(SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Time_nefcry* busPtr, ros::Time const* msgPtr);

void convertFromBus(std_msgs::Header* msgPtr, SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Header_1gqeqy const* busPtr);
void convertToBus(SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Header_1gqeqy* busPtr, std_msgs::Header const* msgPtr);


#endif
