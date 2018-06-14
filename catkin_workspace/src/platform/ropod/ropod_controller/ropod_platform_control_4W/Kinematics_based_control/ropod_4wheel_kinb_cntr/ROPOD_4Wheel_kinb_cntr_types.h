//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: ROPOD_4Wheel_kinb_cntr_types.h
//
// Code generated for Simulink model 'ROPOD_4Wheel_kinb_cntr'.
//
// Model version                  : 1.211
// Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
// C/C++ source code generated on : Tue May 15 14:42:18 2018
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Linux 64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_ROPOD_4Wheel_kinb_cntr_types_h_
#define RTW_HEADER_ROPOD_4Wheel_kinb_cntr_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROPOD_4Wheel_kinb_cntr_geometry_msgs_Point_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROPOD_4Wheel_kinb_cntr_geometry_msgs_Point_

// MsgType=geometry_msgs/Point
typedef struct {
  real_T X;
  real_T Y;
  real_T Z;
} SL_Bus_ROPOD_4Wheel_kinb_cntr_geometry_msgs_Point;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROPOD_4Wheel_kinb_cntr_geometry_msgs_Vector3_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROPOD_4Wheel_kinb_cntr_geometry_msgs_Vector3_

// MsgType=geometry_msgs/Vector3
typedef struct {
  real_T X;
  real_T Y;
  real_T Z;
} SL_Bus_ROPOD_4Wheel_kinb_cntr_geometry_msgs_Vector3;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROPOD_4Wheel_kinb_cntr_geometry_msgs_Twist_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROPOD_4Wheel_kinb_cntr_geometry_msgs_Twist_

// MsgType=geometry_msgs/Twist
typedef struct {
  // MsgType=geometry_msgs/Vector3
  SL_Bus_ROPOD_4Wheel_kinb_cntr_geometry_msgs_Vector3 Linear;

  // MsgType=geometry_msgs/Vector3
  SL_Bus_ROPOD_4Wheel_kinb_cntr_geometry_msgs_Vector3 Angular;
} SL_Bus_ROPOD_4Wheel_kinb_cntr_geometry_msgs_Twist;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_

typedef struct {
  uint32_T CurrentLength;
  uint32_T ReceivedLength;
} SL_Bus_ROSVariableLengthArrayInfo;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROPOD_4Wheel_kinb_cntr_ros_time_Time_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROPOD_4Wheel_kinb_cntr_ros_time_Time_

// MsgType=ros_time/Time
typedef struct {
  real_T Sec;
  real_T Nsec;
} SL_Bus_ROPOD_4Wheel_kinb_cntr_ros_time_Time;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROPOD_4Wheel_kinb_cntr_std_msgs_Header_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROPOD_4Wheel_kinb_cntr_std_msgs_Header_

// MsgType=std_msgs/Header
typedef struct {
  uint32_T Seq;

  // PrimitiveROSType=string:IsVarLen=1:VarLenCategory=data:VarLenElem=FrameId_SL_Info:TruncateAction=warn 
  uint8_T FrameId[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=FrameId
  SL_Bus_ROSVariableLengthArrayInfo FrameId_SL_Info;

  // MsgType=ros_time/Time
  SL_Bus_ROPOD_4Wheel_kinb_cntr_ros_time_Time Stamp;
} SL_Bus_ROPOD_4Wheel_kinb_cntr_std_msgs_Header;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROPOD_4Wheel_kinb_cntr_geometry_msgs_Quaternion_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROPOD_4Wheel_kinb_cntr_geometry_msgs_Quaternion_

// MsgType=geometry_msgs/Quaternion
typedef struct {
  real_T X;
  real_T Y;
  real_T Z;
  real_T W;
} SL_Bus_ROPOD_4Wheel_kinb_cntr_geometry_msgs_Quaternion;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROPOD_4Wheel_kinb_cntr_geometry_msgs_Pose_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROPOD_4Wheel_kinb_cntr_geometry_msgs_Pose_

// MsgType=geometry_msgs/Pose
typedef struct {
  // MsgType=geometry_msgs/Point
  SL_Bus_ROPOD_4Wheel_kinb_cntr_geometry_msgs_Point Position;

  // MsgType=geometry_msgs/Quaternion
  SL_Bus_ROPOD_4Wheel_kinb_cntr_geometry_msgs_Quaternion Orientation;
} SL_Bus_ROPOD_4Wheel_kinb_cntr_geometry_msgs_Pose;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROPOD_4Wheel_kinb_cntr_PoseWithCovariance_l2vdqh_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROPOD_4Wheel_kinb_cntr_PoseWithCovariance_l2vdqh_

// MsgType=geometry_msgs/PoseWithCovariance
typedef struct {
  real_T Covariance[36];

  // MsgType=geometry_msgs/Pose
  SL_Bus_ROPOD_4Wheel_kinb_cntr_geometry_msgs_Pose Pose;
} SL_Bus_ROPOD_4Wheel_kinb_cntr_PoseWithCovariance_l2vdqh;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROPOD_4Wheel_kinb_cntr_TwistWithCovariance_lb5ijv_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROPOD_4Wheel_kinb_cntr_TwistWithCovariance_lb5ijv_

// MsgType=geometry_msgs/TwistWithCovariance
typedef struct {
  real_T Covariance[36];

  // MsgType=geometry_msgs/Twist
  SL_Bus_ROPOD_4Wheel_kinb_cntr_geometry_msgs_Twist Twist;
} SL_Bus_ROPOD_4Wheel_kinb_cntr_TwistWithCovariance_lb5ijv;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROPOD_4Wheel_kinb_cntr_nav_msgs_Odometry_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROPOD_4Wheel_kinb_cntr_nav_msgs_Odometry_

// MsgType=nav_msgs/Odometry
typedef struct {
  // PrimitiveROSType=string:IsVarLen=1:VarLenCategory=data:VarLenElem=ChildFrameId_SL_Info:TruncateAction=warn 
  uint8_T ChildFrameId[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=ChildFrameId
  SL_Bus_ROSVariableLengthArrayInfo ChildFrameId_SL_Info;

  // MsgType=std_msgs/Header
  SL_Bus_ROPOD_4Wheel_kinb_cntr_std_msgs_Header Header;

  // MsgType=geometry_msgs/PoseWithCovariance
  SL_Bus_ROPOD_4Wheel_kinb_cntr_PoseWithCovariance_l2vdqh Pose;

  // MsgType=geometry_msgs/TwistWithCovariance
  SL_Bus_ROPOD_4Wheel_kinb_cntr_TwistWithCovariance_lb5ijv Twist;
} SL_Bus_ROPOD_4Wheel_kinb_cntr_nav_msgs_Odometry;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_hAnuObzBTL97uyDH4ZAZXD_
#define DEFINED_TYPEDEF_FOR_struct_hAnuObzBTL97uyDH4ZAZXD_

typedef struct {
  real_T r_w[8];
  real_T s_w;
  real_T d_w;
  real_T C_SW[8];
} struct_hAnuObzBTL97uyDH4ZAZXD;

#endif

#ifndef typedef_robotics_slros_internal_block_T
#define typedef_robotics_slros_internal_block_T

typedef struct {
  int32_T isInitialized;
} robotics_slros_internal_block_T;

#endif                                 //typedef_robotics_slros_internal_block_T

#ifndef typedef_robotics_slcore_internal_bloc_T
#define typedef_robotics_slcore_internal_bloc_T

typedef struct {
  int32_T isInitialized;
} robotics_slcore_internal_bloc_T;

#endif                                 //typedef_robotics_slcore_internal_bloc_T

#ifndef typedef_robotics_slros_internal_blo_n_T
#define typedef_robotics_slros_internal_blo_n_T

typedef struct {
  int32_T isInitialized;
  real_T SampleTime;
} robotics_slros_internal_blo_n_T;

#endif                                 //typedef_robotics_slros_internal_blo_n_T

#ifndef typedef_robotics_slros_internal_bl_nc_T
#define typedef_robotics_slros_internal_bl_nc_T

typedef struct {
  int32_T isInitialized;
} robotics_slros_internal_bl_nc_T;

#endif                                 //typedef_robotics_slros_internal_bl_nc_T

// Parameters (auto storage)
typedef struct P_ROPOD_4Wheel_kinb_cntr_T_ P_ROPOD_4Wheel_kinb_cntr_T;

// Forward declaration for rtModel
typedef struct tag_RTM_ROPOD_4Wheel_kinb_cntr_T
  RT_MODEL_ROPOD_4Wheel_kinb_cntr_T;

#endif                                 // RTW_HEADER_ROPOD_4Wheel_kinb_cntr_types_h_ 

//
// File trailer for generated code.
//
// [EOF]
//
