//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_types.h
//
// Code generated for Simulink model 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform'.
//
// Model version                  : 1.279
// Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
// C/C++ source code generated on : Tue Sep 18 17:46:33 2018
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Linux 64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_types_h_
#define RTW_HEADER_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_types_h_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_

typedef struct {
  uint32_T CurrentLength;
  uint32_T ReceivedLength;
} SL_Bus_ROSVariableLengthArrayInfo;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Time_nefcry_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Time_nefcry_

// MsgType=ros_time/Time
typedef struct {
  real_T Sec;
  real_T Nsec;
} SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Time_nefcry;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Header_1gqeqy_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Header_1gqeqy_

// MsgType=std_msgs/Header
typedef struct {
  uint32_T Seq;

  // PrimitiveROSType=string:IsVarLen=1:VarLenCategory=data:VarLenElem=FrameId_SL_Info:TruncateAction=warn 
  uint8_T FrameId[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=FrameId
  SL_Bus_ROSVariableLengthArrayInfo FrameId_SL_Info;

  // MsgType=ros_time/Time
  SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Time_nefcry Stamp;
} SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Header_1gqeqy;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Point_zgkt6w_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Point_zgkt6w_

// MsgType=geometry_msgs/Point
typedef struct {
  real_T X;
  real_T Y;
  real_T Z;
} SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Point_zgkt6w;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Quaternion_k8oboa_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Quaternion_k8oboa_

// MsgType=geometry_msgs/Quaternion
typedef struct {
  real_T X;
  real_T Y;
  real_T Z;
  real_T W;
} SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Quaternion_k8oboa;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Pose_h6lc2h_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Pose_h6lc2h_

// MsgType=geometry_msgs/Pose
typedef struct {
  // MsgType=geometry_msgs/Point
  SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Point_zgkt6w Position;

  // MsgType=geometry_msgs/Quaternion
  SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Quaternion_k8oboa Orientation;
} SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Pose_h6lc2h;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_PoseWithCovariance_urg8os_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_PoseWithCovariance_urg8os_

// MsgType=geometry_msgs/PoseWithCovariance
typedef struct {
  real_T Covariance[36];

  // MsgType=geometry_msgs/Pose
  SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Pose_h6lc2h Pose;
} SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_PoseWithCovariance_urg8os;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Vector3_52wmew_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Vector3_52wmew_

// MsgType=geometry_msgs/Vector3
typedef struct {
  real_T X;
  real_T Y;
  real_T Z;
} SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Vector3_52wmew;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Twist_zi6ye9_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Twist_zi6ye9_

// MsgType=geometry_msgs/Twist
typedef struct {
  // MsgType=geometry_msgs/Vector3
  SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Vector3_52wmew Linear;

  // MsgType=geometry_msgs/Vector3
  SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Vector3_52wmew Angular;
} SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Twist_zi6ye9;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_TwistWithCovariance_59n2wu_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_TwistWithCovariance_59n2wu_

// MsgType=geometry_msgs/TwistWithCovariance
typedef struct {
  real_T Covariance[36];

  // MsgType=geometry_msgs/Twist
  SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Twist_zi6ye9 Twist;
} SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_TwistWithCovariance_59n2wu;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Odometry_68ooni_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Odometry_68ooni_

// MsgType=nav_msgs/Odometry
typedef struct {
  // PrimitiveROSType=string:IsVarLen=1:VarLenCategory=data:VarLenElem=ChildFrameId_SL_Info:TruncateAction=warn 
  uint8_T ChildFrameId[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=ChildFrameId
  SL_Bus_ROSVariableLengthArrayInfo ChildFrameId_SL_Info;

  // MsgType=std_msgs/Header
  SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Header_1gqeqy Header;

  // MsgType=geometry_msgs/PoseWithCovariance
  SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_PoseWithCovariance_urg8os Pose;

  // MsgType=geometry_msgs/TwistWithCovariance
  SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_TwistWithCovariance_59n2wu Twist;
} SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Odometry_68ooni;

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

#ifndef typedef_robotics_slcore_internal_bloc_T
#define typedef_robotics_slcore_internal_bloc_T

typedef struct {
  int32_T isInitialized;
} robotics_slcore_internal_bloc_T;

#endif                                 //typedef_robotics_slcore_internal_bloc_T

#ifndef typedef_robotics_slros_internal_block_T
#define typedef_robotics_slros_internal_block_T

typedef struct {
  int32_T isInitialized;
} robotics_slros_internal_block_T;

#endif                                 //typedef_robotics_slros_internal_block_T

#ifndef typedef_robotics_slros_internal_blo_h_T
#define typedef_robotics_slros_internal_blo_h_T

typedef struct {
  int32_T isInitialized;
} robotics_slros_internal_blo_h_T;

#endif                                 //typedef_robotics_slros_internal_blo_h_T

#ifndef typedef_robotics_slros_internal_bl_hi_T
#define typedef_robotics_slros_internal_bl_hi_T

typedef struct {
  int32_T isInitialized;
  real_T SampleTime;
} robotics_slros_internal_bl_hi_T;

#endif                                 //typedef_robotics_slros_internal_bl_hi_T

// Custom Type definition for MATLAB Function: '<S45>/platform_forces_2_tau_dist_optimal' 
#ifndef struct_tag_scZlGNcmSdXsfgNftx2nQBF
#define struct_tag_scZlGNcmSdXsfgNftx2nQBF

struct tag_scZlGNcmSdXsfgNftx2nQBF
{
  char_T DataType[6];
  real_T MaxIter;
  real_T FeasibilityTol;
  boolean_T IntegrityChecks;
};

#endif                                 //struct_tag_scZlGNcmSdXsfgNftx2nQBF

#ifndef typedef_scZlGNcmSdXsfgNftx2nQBF_ROPOD_T
#define typedef_scZlGNcmSdXsfgNftx2nQBF_ROPOD_T

typedef struct tag_scZlGNcmSdXsfgNftx2nQBF scZlGNcmSdXsfgNftx2nQBF_ROPOD_T;

#endif                                 //typedef_scZlGNcmSdXsfgNftx2nQBF_ROPOD_T

// Parameters (auto storage)
typedef struct P_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_T_
  P_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_T;

// Forward declaration for rtModel
typedef struct tag_RTM_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_T
  RT_MODEL_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_T;

#endif                                 // RTW_HEADER_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_types_h_ 

//
// File trailer for generated code.
//
// [EOF]
//
