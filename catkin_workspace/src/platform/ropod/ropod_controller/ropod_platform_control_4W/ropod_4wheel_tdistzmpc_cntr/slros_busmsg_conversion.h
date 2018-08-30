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
#include <geometry_msgs/Wrench.h>
#include <geometry_msgs/WrenchStamped.h>
#include <nav_msgs/Odometry.h>
#include <ros/time.h>
#include <std_msgs/Bool.h>
#include <std_msgs/Header.h>
#include <std_msgs/UInt16.h>
#include "ROPOD_4Wheel_TdistZMPC_cntr_types.h"
#include "slros_msgconvert_utils.h"


void convertFromBus(geometry_msgs::Point* msgPtr, SL_Bus_ROPOD_4Wheel_TdistZMPC_cntr_geometry_msgs_Point const* busPtr);
void convertToBus(SL_Bus_ROPOD_4Wheel_TdistZMPC_cntr_geometry_msgs_Point* busPtr, geometry_msgs::Point const* msgPtr);

void convertFromBus(geometry_msgs::Pose* msgPtr, SL_Bus_ROPOD_4Wheel_TdistZMPC_cntr_geometry_msgs_Pose const* busPtr);
void convertToBus(SL_Bus_ROPOD_4Wheel_TdistZMPC_cntr_geometry_msgs_Pose* busPtr, geometry_msgs::Pose const* msgPtr);

void convertFromBus(geometry_msgs::PoseWithCovariance* msgPtr, SL_Bus_ROPOD_4Wheel_TdistZMPC_cn_PoseWithCovariance_4e021t const* busPtr);
void convertToBus(SL_Bus_ROPOD_4Wheel_TdistZMPC_cn_PoseWithCovariance_4e021t* busPtr, geometry_msgs::PoseWithCovariance const* msgPtr);

void convertFromBus(geometry_msgs::Quaternion* msgPtr, SL_Bus_ROPOD_4Wheel_TdistZMPC_cntr_geometry_msgs_Quaternion const* busPtr);
void convertToBus(SL_Bus_ROPOD_4Wheel_TdistZMPC_cntr_geometry_msgs_Quaternion* busPtr, geometry_msgs::Quaternion const* msgPtr);

void convertFromBus(geometry_msgs::Twist* msgPtr, SL_Bus_ROPOD_4Wheel_TdistZMPC_cntr_geometry_msgs_Twist const* busPtr);
void convertToBus(SL_Bus_ROPOD_4Wheel_TdistZMPC_cntr_geometry_msgs_Twist* busPtr, geometry_msgs::Twist const* msgPtr);

void convertFromBus(geometry_msgs::TwistWithCovariance* msgPtr, SL_Bus_ROPOD_4Wheel_TdistZMPC_cn_TwistWithCovariance_thzi69 const* busPtr);
void convertToBus(SL_Bus_ROPOD_4Wheel_TdistZMPC_cn_TwistWithCovariance_thzi69* busPtr, geometry_msgs::TwistWithCovariance const* msgPtr);

void convertFromBus(geometry_msgs::Vector3* msgPtr, SL_Bus_ROPOD_4Wheel_TdistZMPC_cntr_geometry_msgs_Vector3 const* busPtr);
void convertToBus(SL_Bus_ROPOD_4Wheel_TdistZMPC_cntr_geometry_msgs_Vector3* busPtr, geometry_msgs::Vector3 const* msgPtr);

void convertFromBus(geometry_msgs::Wrench* msgPtr, SL_Bus_ROPOD_4Wheel_TdistZMPC_cntr_geometry_msgs_Wrench const* busPtr);
void convertToBus(SL_Bus_ROPOD_4Wheel_TdistZMPC_cntr_geometry_msgs_Wrench* busPtr, geometry_msgs::Wrench const* msgPtr);

void convertFromBus(geometry_msgs::WrenchStamped* msgPtr, SL_Bus_ROPOD_4Wheel_TdistZMPC_cn_WrenchStamped_datn2q const* busPtr);
void convertToBus(SL_Bus_ROPOD_4Wheel_TdistZMPC_cn_WrenchStamped_datn2q* busPtr, geometry_msgs::WrenchStamped const* msgPtr);

void convertFromBus(nav_msgs::Odometry* msgPtr, SL_Bus_ROPOD_4Wheel_TdistZMPC_cntr_nav_msgs_Odometry const* busPtr);
void convertToBus(SL_Bus_ROPOD_4Wheel_TdistZMPC_cntr_nav_msgs_Odometry* busPtr, nav_msgs::Odometry const* msgPtr);

void convertFromBus(ros::Time* msgPtr, SL_Bus_ROPOD_4Wheel_TdistZMPC_cntr_ros_time_Time const* busPtr);
void convertToBus(SL_Bus_ROPOD_4Wheel_TdistZMPC_cntr_ros_time_Time* busPtr, ros::Time const* msgPtr);

void convertFromBus(std_msgs::Bool* msgPtr, SL_Bus_ROPOD_4Wheel_TdistZMPC_cntr_std_msgs_Bool const* busPtr);
void convertToBus(SL_Bus_ROPOD_4Wheel_TdistZMPC_cntr_std_msgs_Bool* busPtr, std_msgs::Bool const* msgPtr);

void convertFromBus(std_msgs::Header* msgPtr, SL_Bus_ROPOD_4Wheel_TdistZMPC_cntr_std_msgs_Header const* busPtr);
void convertToBus(SL_Bus_ROPOD_4Wheel_TdistZMPC_cntr_std_msgs_Header* busPtr, std_msgs::Header const* msgPtr);

void convertFromBus(std_msgs::UInt16* msgPtr, SL_Bus_ROPOD_4Wheel_TdistZMPC_cntr_std_msgs_UInt16 const* busPtr);
void convertToBus(SL_Bus_ROPOD_4Wheel_TdistZMPC_cntr_std_msgs_UInt16* busPtr, std_msgs::UInt16 const* msgPtr);


#endif
