#include "slros_busmsg_conversion.h"


// Conversions between SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Point_zgkt6w and geometry_msgs::Point

void convertFromBus(geometry_msgs::Point* msgPtr, SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Point_zgkt6w const* busPtr)
{
  const std::string rosMessageType("geometry_msgs/Point");

  msgPtr->x =  busPtr->X;
  msgPtr->y =  busPtr->Y;
  msgPtr->z =  busPtr->Z;
}

void convertToBus(SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Point_zgkt6w* busPtr, geometry_msgs::Point const* msgPtr)
{
  const std::string rosMessageType("geometry_msgs/Point");

  busPtr->X =  msgPtr->x;
  busPtr->Y =  msgPtr->y;
  busPtr->Z =  msgPtr->z;
}


// Conversions between SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Pose_h6lc2h and geometry_msgs::Pose

void convertFromBus(geometry_msgs::Pose* msgPtr, SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Pose_h6lc2h const* busPtr)
{
  const std::string rosMessageType("geometry_msgs/Pose");

  convertFromBus(&msgPtr->orientation, &busPtr->Orientation);
  convertFromBus(&msgPtr->position, &busPtr->Position);
}

void convertToBus(SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Pose_h6lc2h* busPtr, geometry_msgs::Pose const* msgPtr)
{
  const std::string rosMessageType("geometry_msgs/Pose");

  convertToBus(&busPtr->Orientation, &msgPtr->orientation);
  convertToBus(&busPtr->Position, &msgPtr->position);
}


// Conversions between SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_PoseWithCovariance_urg8os and geometry_msgs::PoseWithCovariance

void convertFromBus(geometry_msgs::PoseWithCovariance* msgPtr, SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_PoseWithCovariance_urg8os const* busPtr)
{
  const std::string rosMessageType("geometry_msgs/PoseWithCovariance");

  convertFromBusFixedPrimitiveArray(msgPtr->covariance, busPtr->Covariance);
  convertFromBus(&msgPtr->pose, &busPtr->Pose);
}

void convertToBus(SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_PoseWithCovariance_urg8os* busPtr, geometry_msgs::PoseWithCovariance const* msgPtr)
{
  const std::string rosMessageType("geometry_msgs/PoseWithCovariance");

  convertToBusFixedPrimitiveArray(busPtr->Covariance, msgPtr->covariance, slros::NoopWarning());
  convertToBus(&busPtr->Pose, &msgPtr->pose);
}


// Conversions between SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Quaternion_k8oboa and geometry_msgs::Quaternion

void convertFromBus(geometry_msgs::Quaternion* msgPtr, SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Quaternion_k8oboa const* busPtr)
{
  const std::string rosMessageType("geometry_msgs/Quaternion");

  msgPtr->w =  busPtr->W;
  msgPtr->x =  busPtr->X;
  msgPtr->y =  busPtr->Y;
  msgPtr->z =  busPtr->Z;
}

void convertToBus(SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Quaternion_k8oboa* busPtr, geometry_msgs::Quaternion const* msgPtr)
{
  const std::string rosMessageType("geometry_msgs/Quaternion");

  busPtr->W =  msgPtr->w;
  busPtr->X =  msgPtr->x;
  busPtr->Y =  msgPtr->y;
  busPtr->Z =  msgPtr->z;
}


// Conversions between SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Twist_zi6ye9 and geometry_msgs::Twist

void convertFromBus(geometry_msgs::Twist* msgPtr, SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Twist_zi6ye9 const* busPtr)
{
  const std::string rosMessageType("geometry_msgs/Twist");

  convertFromBus(&msgPtr->angular, &busPtr->Angular);
  convertFromBus(&msgPtr->linear, &busPtr->Linear);
}

void convertToBus(SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Twist_zi6ye9* busPtr, geometry_msgs::Twist const* msgPtr)
{
  const std::string rosMessageType("geometry_msgs/Twist");

  convertToBus(&busPtr->Angular, &msgPtr->angular);
  convertToBus(&busPtr->Linear, &msgPtr->linear);
}


// Conversions between SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_TwistWithCovariance_59n2wu and geometry_msgs::TwistWithCovariance

void convertFromBus(geometry_msgs::TwistWithCovariance* msgPtr, SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_TwistWithCovariance_59n2wu const* busPtr)
{
  const std::string rosMessageType("geometry_msgs/TwistWithCovariance");

  convertFromBusFixedPrimitiveArray(msgPtr->covariance, busPtr->Covariance);
  convertFromBus(&msgPtr->twist, &busPtr->Twist);
}

void convertToBus(SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_TwistWithCovariance_59n2wu* busPtr, geometry_msgs::TwistWithCovariance const* msgPtr)
{
  const std::string rosMessageType("geometry_msgs/TwistWithCovariance");

  convertToBusFixedPrimitiveArray(busPtr->Covariance, msgPtr->covariance, slros::NoopWarning());
  convertToBus(&busPtr->Twist, &msgPtr->twist);
}


// Conversions between SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Vector3_52wmew and geometry_msgs::Vector3

void convertFromBus(geometry_msgs::Vector3* msgPtr, SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Vector3_52wmew const* busPtr)
{
  const std::string rosMessageType("geometry_msgs/Vector3");

  msgPtr->x =  busPtr->X;
  msgPtr->y =  busPtr->Y;
  msgPtr->z =  busPtr->Z;
}

void convertToBus(SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Vector3_52wmew* busPtr, geometry_msgs::Vector3 const* msgPtr)
{
  const std::string rosMessageType("geometry_msgs/Vector3");

  busPtr->X =  msgPtr->x;
  busPtr->Y =  msgPtr->y;
  busPtr->Z =  msgPtr->z;
}


// Conversions between SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Odometry_68ooni and nav_msgs::Odometry

void convertFromBus(nav_msgs::Odometry* msgPtr, SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Odometry_68ooni const* busPtr)
{
  const std::string rosMessageType("nav_msgs/Odometry");

  convertFromBusVariablePrimitiveArray(msgPtr->child_frame_id, busPtr->ChildFrameId, busPtr->ChildFrameId_SL_Info);
  convertFromBus(&msgPtr->header, &busPtr->Header);
  convertFromBus(&msgPtr->pose, &busPtr->Pose);
  convertFromBus(&msgPtr->twist, &busPtr->Twist);
}

void convertToBus(SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Odometry_68ooni* busPtr, nav_msgs::Odometry const* msgPtr)
{
  const std::string rosMessageType("nav_msgs/Odometry");

  convertToBusVariablePrimitiveArray(busPtr->ChildFrameId, busPtr->ChildFrameId_SL_Info, msgPtr->child_frame_id, slros::EnabledWarning(rosMessageType, "child_frame_id"));
  convertToBus(&busPtr->Header, &msgPtr->header);
  convertToBus(&busPtr->Pose, &msgPtr->pose);
  convertToBus(&busPtr->Twist, &msgPtr->twist);
}


// Conversions between SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Time_nefcry and ros::Time

void convertFromBus(ros::Time* msgPtr, SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Time_nefcry const* busPtr)
{
  const std::string rosMessageType("ros_time/Time");

  msgPtr->sec =  busPtr->Sec;
  msgPtr->nsec =  busPtr->Nsec;
}

void convertToBus(SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Time_nefcry* busPtr, ros::Time const* msgPtr)
{
  const std::string rosMessageType("ros_time/Time");

  busPtr->Sec =  msgPtr->sec;
  busPtr->Nsec =  msgPtr->nsec;
}


// Conversions between SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Header_1gqeqy and std_msgs::Header

void convertFromBus(std_msgs::Header* msgPtr, SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Header_1gqeqy const* busPtr)
{
  const std::string rosMessageType("std_msgs/Header");

  convertFromBusVariablePrimitiveArray(msgPtr->frame_id, busPtr->FrameId, busPtr->FrameId_SL_Info);
  msgPtr->seq =  busPtr->Seq;
  convertFromBus(&msgPtr->stamp, &busPtr->Stamp);
}

void convertToBus(SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Header_1gqeqy* busPtr, std_msgs::Header const* msgPtr)
{
  const std::string rosMessageType("std_msgs/Header");

  convertToBusVariablePrimitiveArray(busPtr->FrameId, busPtr->FrameId_SL_Info, msgPtr->frame_id, slros::EnabledWarning(rosMessageType, "frame_id"));
  busPtr->Seq =  msgPtr->seq;
  convertToBus(&busPtr->Stamp, &msgPtr->stamp);
}

