//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: ROPOD_4Wheel_kinb_cntr.cpp
//
// Code generated for Simulink model 'ROPOD_4Wheel_kinb_cntr'.
//
// Model version                  : 1.209
// Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
// C/C++ source code generated on : Thu Apr 19 17:14:11 2018
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Linux 64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "ROPOD_4Wheel_kinb_cntr.h"
#include "ROPOD_4Wheel_kinb_cntr_private.h"
#define ParameterInitialV_nc4bpmzdsyxjm (1.5)
#define ParameterInitialVa_nc4bpmzdsyxj (0.19634954084936207)
#define ParameterInitialVal_nc4bpmzdsyx (0.78539816339744828)
#define ParameterInitialValu_nc4bpmzdsy (1.0998)
#define ParameterInitialValue_nc4bpmzd (3.507)
#define ParameterInitialValue_nc4bpmzds (0.2956)
#define ParameterInitial_nc4bpmzdsyxjme (1.0)
#define ROPOD_4Wh_ParameterInitialValue (-0.21)
#define ROPOD_4Wheel__MessageQueueLen_n (5)
#define ROPOD_4Wheel_ki_MessageQueueLen (1)
#define ROPOD_4_ParameterInitialValue_n (0.21)
#define ROPOD_ParameterInitialValue_nc4 (0.01)
#define ROPOD__ParameterInitialValue_nc (0.08)
#define ROPO_ParameterInitialValue_nc4b (0.0525)
#define ROP_ParameterInitialValue_nc4bp (10.0)
#define RO_ParameterInitialValue_nc4bpm (0.0)
#define R_ParameterInitialValue_nc4bpmz (0.3641)

// Block signals (auto storage)
B_ROPOD_4Wheel_kinb_cntr_T ROPOD_4Wheel_kinb_cntr_B;

// Block states (auto storage)
DW_ROPOD_4Wheel_kinb_cntr_T ROPOD_4Wheel_kinb_cntr_DW;

// Real-time model
RT_MODEL_ROPOD_4Wheel_kinb_cntr_T ROPOD_4Wheel_kinb_cntr_M_;
RT_MODEL_ROPOD_4Wheel_kinb_cntr_T *const ROPOD_4Wheel_kinb_cntr_M =
  &ROPOD_4Wheel_kinb_cntr_M_;
static void rate_scheduler(void);

//
//   This function updates active task flag for each subrate.
// The function is called at model base rate, hence the
// generated code self-manages all its subrates.
//
static void rate_scheduler(void)
{
  // Compute which subrates run during the next base time step.  Subrates
  //  are an integer multiple of the base rate counter.  Therefore, the subtask
  //  counter is reset when it reaches its limit (zero means run).

  (ROPOD_4Wheel_kinb_cntr_M->Timing.TaskCounters.TID[1])++;
  if ((ROPOD_4Wheel_kinb_cntr_M->Timing.TaskCounters.TID[1]) > 9) {// Sample time: [0.01s, 0.0s] 
    ROPOD_4Wheel_kinb_cntr_M->Timing.TaskCounters.TID[1] = 0;
  }

  ROPOD_4Wheel_kinb_cntr_M->Timing.sampleHits[1] =
    (ROPOD_4Wheel_kinb_cntr_M->Timing.TaskCounters.TID[1] == 0);
  (ROPOD_4Wheel_kinb_cntr_M->Timing.TaskCounters.TID[2])++;
  if ((ROPOD_4Wheel_kinb_cntr_M->Timing.TaskCounters.TID[2]) > 999) {// Sample time: [1.0s, 0.0s] 
    ROPOD_4Wheel_kinb_cntr_M->Timing.TaskCounters.TID[2] = 0;
  }

  ROPOD_4Wheel_kinb_cntr_M->Timing.sampleHits[2] =
    (ROPOD_4Wheel_kinb_cntr_M->Timing.TaskCounters.TID[2] == 0);
}

// Model step function
void ROPOD_4Wheel_kinb_cntr_step(void)
{
  boolean_T p;
  boolean_T rtb_LowerRelop1_l;
  uint8_T rtb_Gain6;
  boolean_T rtb_LowerRelop1_e;
  boolean_T rtb_LowerRelop1_c;
  boolean_T rtb_LowerRelop1;
  uint16_T rtb_BitwiseOperator;
  int32_T i;
  int32_T i_0;
  real_T t6_tmp;
  real_T t7_tmp;
  real_T t8_tmp;
  real_T t9_tmp;
  real_T t10_tmp;

  // S-Function (ECAT_Interface): '<S5>/ECAT_Interface'

  // Level2 S-Function Block: '<S5>/ECAT_Interface' (ECAT_Interface)
  {
    SimStruct *rts = ROPOD_4Wheel_kinb_cntr_M->childSfunctions[0];
    sfcnOutputs(rts,0);
  }

  if (ROPOD_4Wheel_kinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Start for MATLABSystem: '<S9>/Get Parameter1'
    rtb_LowerRelop1_c = false;
    p = true;
    if (!(ROPOD_4Wheel_kinb_cntr_DW.obj_b.SampleTime ==
          ROPOD_4Wheel_kinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_c = true;
    }

    if (!rtb_LowerRelop1_c) {
      ROPOD_4Wheel_kinb_cntr_DW.obj_b.SampleTime = ROPOD_4Wheel_kinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_kinb_cntr_1130.get_parameter
      (&ROPOD_4Wheel_kinb_cntr_B.t10);

    // MATLABSystem: '<S9>/Get Parameter1'
    ROPOD_4Wheel_kinb_cntr_B.pivot_offs_sw1 = ROPOD_4Wheel_kinb_cntr_B.t10;

    // Start for MATLABSystem: '<S9>/Get Parameter3'
    rtb_LowerRelop1_c = false;
    p = true;
    if (!(ROPOD_4Wheel_kinb_cntr_DW.obj_l.SampleTime ==
          ROPOD_4Wheel_kinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_c = true;
    }

    if (!rtb_LowerRelop1_c) {
      ROPOD_4Wheel_kinb_cntr_DW.obj_l.SampleTime = ROPOD_4Wheel_kinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_kinb_cntr_1132.get_parameter
      (&ROPOD_4Wheel_kinb_cntr_B.t10);

    // MATLABSystem: '<S9>/Get Parameter3'
    ROPOD_4Wheel_kinb_cntr_B.pivot_offs_sw2 = ROPOD_4Wheel_kinb_cntr_B.t10;

    // Start for MATLABSystem: '<S9>/Get Parameter4'
    rtb_LowerRelop1_c = false;
    p = true;
    if (!(ROPOD_4Wheel_kinb_cntr_DW.obj_c.SampleTime ==
          ROPOD_4Wheel_kinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_c = true;
    }

    if (!rtb_LowerRelop1_c) {
      ROPOD_4Wheel_kinb_cntr_DW.obj_c.SampleTime = ROPOD_4Wheel_kinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_kinb_cntr_1134.get_parameter
      (&ROPOD_4Wheel_kinb_cntr_B.t10);

    // MATLABSystem: '<S9>/Get Parameter4'
    ROPOD_4Wheel_kinb_cntr_B.pivot_offs_sw3 = ROPOD_4Wheel_kinb_cntr_B.t10;

    // Start for MATLABSystem: '<S9>/Get Parameter5'
    rtb_LowerRelop1_c = false;
    p = true;
    if (!(ROPOD_4Wheel_kinb_cntr_DW.obj_a.SampleTime ==
          ROPOD_4Wheel_kinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_c = true;
    }

    if (!rtb_LowerRelop1_c) {
      ROPOD_4Wheel_kinb_cntr_DW.obj_a.SampleTime = ROPOD_4Wheel_kinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_kinb_cntr_1136.get_parameter
      (&ROPOD_4Wheel_kinb_cntr_B.t10);

    // MATLABSystem: '<S9>/Get Parameter5'
    ROPOD_4Wheel_kinb_cntr_B.pivot_offs_sw4 = ROPOD_4Wheel_kinb_cntr_B.t10;
  }

  // S-Function (ec_ROPOD_SmartWheel): '<S41>/S-Function'

  // Level2 S-Function Block: '<S41>/S-Function' (ec_ROPOD_SmartWheel)
  {
    SimStruct *rts = ROPOD_4Wheel_kinb_cntr_M->childSfunctions[1];
    sfcnOutputs(rts,0);
  }

  // S-Function (ec_ROPOD_SmartWheel): '<S42>/S-Function'

  // Level2 S-Function Block: '<S42>/S-Function' (ec_ROPOD_SmartWheel)
  {
    SimStruct *rts = ROPOD_4Wheel_kinb_cntr_M->childSfunctions[2];
    sfcnOutputs(rts,0);
  }

  // S-Function (ec_ROPOD_SmartWheel): '<S43>/S-Function'

  // Level2 S-Function Block: '<S43>/S-Function' (ec_ROPOD_SmartWheel)
  {
    SimStruct *rts = ROPOD_4Wheel_kinb_cntr_M->childSfunctions[3];
    sfcnOutputs(rts,0);
  }

  // S-Function (ec_ROPOD_SmartWheel): '<S44>/S-Function'

  // Level2 S-Function Block: '<S44>/S-Function' (ec_ROPOD_SmartWheel)
  {
    SimStruct *rts = ROPOD_4Wheel_kinb_cntr_M->childSfunctions[4];
    sfcnOutputs(rts,0);
  }

  // Sum: '<S35>/Add'
  ROPOD_4Wheel_kinb_cntr_B.Add[0] = ROPOD_4Wheel_kinb_cntr_B.SFunction[28] -
    ROPOD_4Wheel_kinb_cntr_B.pivot_offs_sw1;
  ROPOD_4Wheel_kinb_cntr_B.Add[1] = ROPOD_4Wheel_kinb_cntr_B.SFunction_n[28] -
    ROPOD_4Wheel_kinb_cntr_B.pivot_offs_sw2;
  ROPOD_4Wheel_kinb_cntr_B.Add[2] = ROPOD_4Wheel_kinb_cntr_B.SFunction_m[28] -
    ROPOD_4Wheel_kinb_cntr_B.pivot_offs_sw3;
  ROPOD_4Wheel_kinb_cntr_B.Add[3] = ROPOD_4Wheel_kinb_cntr_B.SFunction_k[28] -
    ROPOD_4Wheel_kinb_cntr_B.pivot_offs_sw4;
  if (ROPOD_4Wheel_kinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Start for MATLABSystem: '<S9>/Get Parameter'
    rtb_LowerRelop1_c = false;
    p = true;
    if (!(ROPOD_4Wheel_kinb_cntr_DW.obj_f.SampleTime ==
          ROPOD_4Wheel_kinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_c = true;
    }

    if (!rtb_LowerRelop1_c) {
      ROPOD_4Wheel_kinb_cntr_DW.obj_f.SampleTime = ROPOD_4Wheel_kinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_kinb_cntr_542.get_parameter
      (&ROPOD_4Wheel_kinb_cntr_B.t10);

    // DataTypeConversion: '<S36>/Data Type Conversion6' incorporates:
    //   Constant: '<S36>/Constant3'

    ROPOD_4Wheel_kinb_cntr_B.t23 = floor
      (ROPOD_4Wheel_kinb_cntr_P.SW_COM1_ENABLE1);
    if (rtIsNaN(ROPOD_4Wheel_kinb_cntr_B.t23) || rtIsInf
        (ROPOD_4Wheel_kinb_cntr_B.t23)) {
      ROPOD_4Wheel_kinb_cntr_B.t23 = 0.0;
    } else {
      ROPOD_4Wheel_kinb_cntr_B.t23 = fmod(ROPOD_4Wheel_kinb_cntr_B.t23, 65536.0);
    }

    // DataTypeConversion: '<S36>/Data Type Conversion4' incorporates:
    //   MATLABSystem: '<S9>/Get Parameter'
    //   MATLABSystem: '<S9>/Get Parameter'

    ROPOD_4Wheel_kinb_cntr_B.t5_tmp = floor(ROPOD_4Wheel_kinb_cntr_B.t10);
    if (rtIsNaN(ROPOD_4Wheel_kinb_cntr_B.t5_tmp) || rtIsInf
        (ROPOD_4Wheel_kinb_cntr_B.t5_tmp)) {
      ROPOD_4Wheel_kinb_cntr_B.t5_tmp = 0.0;
    } else {
      ROPOD_4Wheel_kinb_cntr_B.t5_tmp = fmod(ROPOD_4Wheel_kinb_cntr_B.t5_tmp,
        65536.0);
    }

    // DataTypeConversion: '<S36>/Data Type Conversion7' incorporates:
    //   Constant: '<S36>/Constant4'

    t6_tmp = floor(ROPOD_4Wheel_kinb_cntr_P.SW_COM1_ENABLE2);
    if (rtIsNaN(t6_tmp) || rtIsInf(t6_tmp)) {
      t6_tmp = 0.0;
    } else {
      t6_tmp = fmod(t6_tmp, 65536.0);
    }

    // DataTypeConversion: '<S36>/Data Type Conversion5' incorporates:
    //   Gain: '<S36>/shift'
    //   MATLABSystem: '<S9>/Get Parameter'
    //   MATLABSystem: '<S9>/Get Parameter'

    t7_tmp = floor(ROPOD_4Wheel_kinb_cntr_P.shift_Gain *
                   ROPOD_4Wheel_kinb_cntr_B.t10);
    if (rtIsNaN(t7_tmp) || rtIsInf(t7_tmp)) {
      t7_tmp = 0.0;
    } else {
      t7_tmp = fmod(t7_tmp, 65536.0);
    }

    // DataTypeConversion: '<S36>/Data Type Conversion2' incorporates:
    //   Constant: '<S36>/Constant5'

    t8_tmp = floor(ROPOD_4Wheel_kinb_cntr_P.SW_COM1_MODE_VELOCITY);
    if (rtIsNaN(t8_tmp) || rtIsInf(t8_tmp)) {
      t8_tmp = 0.0;
    } else {
      t8_tmp = fmod(t8_tmp, 65536.0);
    }

    // DataTypeConversion: '<S36>/Data Type Conversion3' incorporates:
    //   Constant: '<S36>/Constant11'

    t9_tmp = 0.0 * ROPOD_4Wheel_kinb_cntr_P.SW_COM1_USE_TS;
    if (rtIsNaN(t9_tmp)) {
      t9_tmp = 0.0;
    } else {
      t9_tmp = fmod(t9_tmp, 65536.0);
    }

    // S-Function (sfix_bitop): '<S36>/Bitwise Operator' incorporates:
    //   DataTypeConversion: '<S36>/Data Type Conversion2'
    //   DataTypeConversion: '<S36>/Data Type Conversion3'
    //   DataTypeConversion: '<S36>/Data Type Conversion4'
    //   DataTypeConversion: '<S36>/Data Type Conversion5'
    //   DataTypeConversion: '<S36>/Data Type Conversion6'
    //   DataTypeConversion: '<S36>/Data Type Conversion7'
    //   S-Function (sfix_bitop): '<S36>/Bitwise Operator1'
    //   S-Function (sfix_bitop): '<S36>/Bitwise Operator2'

    rtb_BitwiseOperator = (uint16_T)((uint16_T)((uint16_T)((uint16_T)
      ((ROPOD_4Wheel_kinb_cntr_B.t23 < 0.0 ? (int32_T)(uint16_T)-(int16_T)
        (uint16_T)-ROPOD_4Wheel_kinb_cntr_B.t23 : (int32_T)(uint16_T)
        ROPOD_4Wheel_kinb_cntr_B.t23) & (ROPOD_4Wheel_kinb_cntr_B.t5_tmp < 0.0 ?
      (int32_T)(uint16_T)-(int16_T)(uint16_T)-ROPOD_4Wheel_kinb_cntr_B.t5_tmp :
      (int32_T)(uint16_T)ROPOD_4Wheel_kinb_cntr_B.t5_tmp)) | (uint16_T)((t6_tmp <
      0.0 ? (int32_T)(uint16_T)-(int16_T)(uint16_T)-t6_tmp : (int32_T)(uint16_T)
      t6_tmp) & (t7_tmp < 0.0 ? (int32_T)(uint16_T)-(int16_T)(uint16_T)-t7_tmp :
                 (int32_T)(uint16_T)t7_tmp))) | (uint16_T)(t8_tmp < 0.0 ?
      (int32_T)(uint16_T)-(int16_T)(uint16_T)-t8_tmp : (int32_T)(uint16_T)t8_tmp))
      | (uint16_T)t9_tmp);
  }

  // Constant: '<S36>/Constant'
  ROPOD_4Wheel_kinb_cntr_B.command2 = ROPOD_4Wheel_kinb_cntr_P.Constant_Value_n3;

  // Constant: '<S36>/Constant1'
  ROPOD_4Wheel_kinb_cntr_B.command2_h =
    ROPOD_4Wheel_kinb_cntr_P.Constant1_Value_g;

  // Constant: '<S36>/Constant10'
  ROPOD_4Wheel_kinb_cntr_B.timestamp = ROPOD_4Wheel_kinb_cntr_P.Constant10_Value;

  // Constant: '<S36>/Constant2'
  ROPOD_4Wheel_kinb_cntr_B.timestamp_d =
    ROPOD_4Wheel_kinb_cntr_P.Constant2_Value_i;

  // Constant: '<S36>/Constant6'
  ROPOD_4Wheel_kinb_cntr_B.command2_d = ROPOD_4Wheel_kinb_cntr_P.Constant6_Value;

  // Constant: '<S36>/Constant7'
  ROPOD_4Wheel_kinb_cntr_B.timestamp_i =
    ROPOD_4Wheel_kinb_cntr_P.Constant7_Value;

  // Constant: '<S36>/Constant8'
  ROPOD_4Wheel_kinb_cntr_B.timestamp_o =
    ROPOD_4Wheel_kinb_cntr_P.Constant8_Value;

  // Constant: '<S36>/Constant9'
  ROPOD_4Wheel_kinb_cntr_B.command2_j = ROPOD_4Wheel_kinb_cntr_P.Constant9_Value;
  if (ROPOD_4Wheel_kinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Start for MATLABSystem: '<S9>/Get Parameter2'
    rtb_LowerRelop1_c = false;
    p = true;
    if (!(ROPOD_4Wheel_kinb_cntr_DW.obj_g.SampleTime ==
          ROPOD_4Wheel_kinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_c = true;
    }

    if (!rtb_LowerRelop1_c) {
      ROPOD_4Wheel_kinb_cntr_DW.obj_g.SampleTime = ROPOD_4Wheel_kinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_kinb_cntr_544.get_parameter
      (&ROPOD_4Wheel_kinb_cntr_B.t10);

    // Gain: '<S36>/Gain' incorporates:
    //   MATLABSystem: '<S9>/Get Parameter2'
    //   MATLABSystem: '<S9>/Get Parameter2'

    ROPOD_4Wheel_kinb_cntr_B.limit1_p = ROPOD_4Wheel_kinb_cntr_P.Gain_Gain *
      ROPOD_4Wheel_kinb_cntr_B.t10;

    // Gain: '<S36>/Gain1' incorporates:
    //   MATLABSystem: '<S9>/Get Parameter2'
    //   MATLABSystem: '<S9>/Get Parameter2'

    ROPOD_4Wheel_kinb_cntr_B.limit1_n = ROPOD_4Wheel_kinb_cntr_P.Gain1_Gain *
      ROPOD_4Wheel_kinb_cntr_B.t10;

    // Gain: '<S36>/Gain10'
    ROPOD_4Wheel_kinb_cntr_B.command1 = (real_T)
      ROPOD_4Wheel_kinb_cntr_P.Gain10_Gain * 3.0517578125E-5 * (real_T)
      rtb_BitwiseOperator;

    // Gain: '<S36>/Gain11' incorporates:
    //   MATLABSystem: '<S9>/Get Parameter2'
    //   MATLABSystem: '<S9>/Get Parameter2'

    ROPOD_4Wheel_kinb_cntr_B.limit1_n_g = ROPOD_4Wheel_kinb_cntr_P.Gain11_Gain *
      ROPOD_4Wheel_kinb_cntr_B.t10;

    // Gain: '<S36>/Gain12' incorporates:
    //   MATLABSystem: '<S9>/Get Parameter2'
    //   MATLABSystem: '<S9>/Get Parameter2'

    ROPOD_4Wheel_kinb_cntr_B.limit2_p = ROPOD_4Wheel_kinb_cntr_P.Gain12_Gain *
      ROPOD_4Wheel_kinb_cntr_B.t10;

    // Gain: '<S36>/Gain13' incorporates:
    //   MATLABSystem: '<S9>/Get Parameter2'
    //   MATLABSystem: '<S9>/Get Parameter2'

    ROPOD_4Wheel_kinb_cntr_B.limit2_n = ROPOD_4Wheel_kinb_cntr_P.Gain13_Gain *
      ROPOD_4Wheel_kinb_cntr_B.t10;

    // Gain: '<S36>/Gain8'
    ROPOD_4Wheel_kinb_cntr_B.command1_o = ROPOD_4Wheel_kinb_cntr_P.Gain8_Gain *
      ROPOD_4Wheel_kinb_cntr_B.command1;

    // Gain: '<S36>/Gain14'
    ROPOD_4Wheel_kinb_cntr_B.command1_d = ROPOD_4Wheel_kinb_cntr_P.Gain14_Gain *
      ROPOD_4Wheel_kinb_cntr_B.command1_o;

    // Gain: '<S36>/Gain15' incorporates:
    //   MATLABSystem: '<S9>/Get Parameter2'
    //   MATLABSystem: '<S9>/Get Parameter2'

    ROPOD_4Wheel_kinb_cntr_B.limit1_n_d = ROPOD_4Wheel_kinb_cntr_P.Gain15_Gain *
      ROPOD_4Wheel_kinb_cntr_B.t10;

    // Gain: '<S36>/Gain16' incorporates:
    //   MATLABSystem: '<S9>/Get Parameter2'
    //   MATLABSystem: '<S9>/Get Parameter2'

    ROPOD_4Wheel_kinb_cntr_B.limit2_p_c = ROPOD_4Wheel_kinb_cntr_P.Gain16_Gain *
      ROPOD_4Wheel_kinb_cntr_B.t10;

    // Gain: '<S36>/Gain17' incorporates:
    //   MATLABSystem: '<S9>/Get Parameter2'
    //   MATLABSystem: '<S9>/Get Parameter2'

    ROPOD_4Wheel_kinb_cntr_B.limit2_n_k = ROPOD_4Wheel_kinb_cntr_P.Gain17_Gain *
      ROPOD_4Wheel_kinb_cntr_B.t10;

    // Gain: '<S36>/Gain18'
    ROPOD_4Wheel_kinb_cntr_B.command1_e = ROPOD_4Wheel_kinb_cntr_P.Gain18_Gain *
      ROPOD_4Wheel_kinb_cntr_B.command1_d;

    // Gain: '<S36>/Gain19' incorporates:
    //   MATLABSystem: '<S9>/Get Parameter2'
    //   MATLABSystem: '<S9>/Get Parameter2'

    ROPOD_4Wheel_kinb_cntr_B.limit1_p_b = ROPOD_4Wheel_kinb_cntr_P.Gain19_Gain *
      ROPOD_4Wheel_kinb_cntr_B.t10;

    // Gain: '<S36>/Gain2' incorporates:
    //   MATLABSystem: '<S9>/Get Parameter2'
    //   MATLABSystem: '<S9>/Get Parameter2'

    ROPOD_4Wheel_kinb_cntr_B.limit2_p_i = ROPOD_4Wheel_kinb_cntr_P.Gain2_Gain *
      ROPOD_4Wheel_kinb_cntr_B.t10;

    // Gain: '<S36>/Gain3' incorporates:
    //   MATLABSystem: '<S9>/Get Parameter2'
    //   MATLABSystem: '<S9>/Get Parameter2'

    ROPOD_4Wheel_kinb_cntr_B.limit2_n_f = ROPOD_4Wheel_kinb_cntr_P.Gain3_Gain *
      ROPOD_4Wheel_kinb_cntr_B.t10;

    // Gain: '<S36>/Gain4' incorporates:
    //   MATLABSystem: '<S9>/Get Parameter2'
    //   MATLABSystem: '<S9>/Get Parameter2'

    ROPOD_4Wheel_kinb_cntr_B.limit1_p_o = ROPOD_4Wheel_kinb_cntr_P.Gain4_Gain *
      ROPOD_4Wheel_kinb_cntr_B.t10;

    // Gain: '<S36>/Gain5' incorporates:
    //   MATLABSystem: '<S9>/Get Parameter2'
    //   MATLABSystem: '<S9>/Get Parameter2'

    ROPOD_4Wheel_kinb_cntr_B.limit1_n_m = ROPOD_4Wheel_kinb_cntr_P.Gain5_Gain *
      ROPOD_4Wheel_kinb_cntr_B.t10;

    // Gain: '<S36>/Gain6' incorporates:
    //   MATLABSystem: '<S9>/Get Parameter2'
    //   MATLABSystem: '<S9>/Get Parameter2'

    ROPOD_4Wheel_kinb_cntr_B.limit2_p_l = ROPOD_4Wheel_kinb_cntr_P.Gain6_Gain *
      ROPOD_4Wheel_kinb_cntr_B.t10;

    // Gain: '<S36>/Gain7' incorporates:
    //   MATLABSystem: '<S9>/Get Parameter2'
    //   MATLABSystem: '<S9>/Get Parameter2'

    ROPOD_4Wheel_kinb_cntr_B.limit2_n_j = ROPOD_4Wheel_kinb_cntr_P.Gain7_Gain *
      ROPOD_4Wheel_kinb_cntr_B.t10;

    // Gain: '<S36>/Gain9' incorporates:
    //   MATLABSystem: '<S9>/Get Parameter2'
    //   MATLABSystem: '<S9>/Get Parameter2'

    ROPOD_4Wheel_kinb_cntr_B.limit1_p_f = ROPOD_4Wheel_kinb_cntr_P.Gain9_Gain *
      ROPOD_4Wheel_kinb_cntr_B.t10;

    // Start for MATLABSystem: '<S8>/Get Parameter'
    rtb_LowerRelop1_c = false;
    p = true;
    if (!(ROPOD_4Wheel_kinb_cntr_DW.obj_ft.SampleTime ==
          ROPOD_4Wheel_kinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_c = true;
    }

    if (!rtb_LowerRelop1_c) {
      ROPOD_4Wheel_kinb_cntr_DW.obj_ft.SampleTime = ROPOD_4Wheel_kinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_kinb_cntr_1081.get_parameter
      (&ROPOD_4Wheel_kinb_cntr_B.t10);

    // MATLABSystem: '<S8>/Get Parameter'
    ROPOD_4Wheel_kinb_cntr_B.GetParameter_o1 = ROPOD_4Wheel_kinb_cntr_B.t10;

    // Start for MATLABSystem: '<S8>/Get Parameter11'
    rtb_LowerRelop1_c = false;
    p = true;
    if (!(ROPOD_4Wheel_kinb_cntr_DW.obj_e.SampleTime ==
          ROPOD_4Wheel_kinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_c = true;
    }

    if (!rtb_LowerRelop1_c) {
      ROPOD_4Wheel_kinb_cntr_DW.obj_e.SampleTime = ROPOD_4Wheel_kinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_kinb_cntr_1082.get_parameter
      (&ROPOD_4Wheel_kinb_cntr_B.t10);

    // MATLABSystem: '<S8>/Get Parameter11'
    ROPOD_4Wheel_kinb_cntr_B.GetParameter11_o1 = ROPOD_4Wheel_kinb_cntr_B.t10;

    // Start for MATLABSystem: '<S8>/Get Parameter12'
    rtb_LowerRelop1_c = false;
    p = true;
    if (!(ROPOD_4Wheel_kinb_cntr_DW.obj_ps.SampleTime ==
          ROPOD_4Wheel_kinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_c = true;
    }

    if (!rtb_LowerRelop1_c) {
      ROPOD_4Wheel_kinb_cntr_DW.obj_ps.SampleTime = ROPOD_4Wheel_kinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_kinb_cntr_1083.get_parameter
      (&ROPOD_4Wheel_kinb_cntr_B.t10);

    // MATLABSystem: '<S8>/Get Parameter12'
    ROPOD_4Wheel_kinb_cntr_B.GetParameter12_o1 = ROPOD_4Wheel_kinb_cntr_B.t10;

    // Start for MATLABSystem: '<S8>/Get Parameter13'
    rtb_LowerRelop1_c = false;
    p = true;
    if (!(ROPOD_4Wheel_kinb_cntr_DW.obj_h.SampleTime ==
          ROPOD_4Wheel_kinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_c = true;
    }

    if (!rtb_LowerRelop1_c) {
      ROPOD_4Wheel_kinb_cntr_DW.obj_h.SampleTime = ROPOD_4Wheel_kinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_kinb_cntr_1084.get_parameter
      (&ROPOD_4Wheel_kinb_cntr_B.t10);

    // MATLABSystem: '<S8>/Get Parameter13'
    ROPOD_4Wheel_kinb_cntr_B.GetParameter13_o1 = ROPOD_4Wheel_kinb_cntr_B.t10;

    // Start for MATLABSystem: '<S8>/Get Parameter14'
    rtb_LowerRelop1_c = false;
    p = true;
    if (!(ROPOD_4Wheel_kinb_cntr_DW.obj_k.SampleTime ==
          ROPOD_4Wheel_kinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_c = true;
    }

    if (!rtb_LowerRelop1_c) {
      ROPOD_4Wheel_kinb_cntr_DW.obj_k.SampleTime = ROPOD_4Wheel_kinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_kinb_cntr_1085.get_parameter
      (&ROPOD_4Wheel_kinb_cntr_B.t10);

    // MATLABSystem: '<S8>/Get Parameter14'
    ROPOD_4Wheel_kinb_cntr_B.GetParameter14_o1 = ROPOD_4Wheel_kinb_cntr_B.t10;

    // Start for MATLABSystem: '<S8>/Get Parameter15'
    rtb_LowerRelop1_c = false;
    p = true;
    if (!(ROPOD_4Wheel_kinb_cntr_DW.obj_kj.SampleTime ==
          ROPOD_4Wheel_kinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_c = true;
    }

    if (!rtb_LowerRelop1_c) {
      ROPOD_4Wheel_kinb_cntr_DW.obj_kj.SampleTime = ROPOD_4Wheel_kinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_kinb_cntr_1086.get_parameter
      (&ROPOD_4Wheel_kinb_cntr_B.t10);

    // MATLABSystem: '<S8>/Get Parameter15'
    ROPOD_4Wheel_kinb_cntr_B.GetParameter15_o1 = ROPOD_4Wheel_kinb_cntr_B.t10;

    // Start for MATLABSystem: '<S8>/Get Parameter16'
    rtb_LowerRelop1_c = false;
    p = true;
    if (!(ROPOD_4Wheel_kinb_cntr_DW.obj_i.SampleTime ==
          ROPOD_4Wheel_kinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_c = true;
    }

    if (!rtb_LowerRelop1_c) {
      ROPOD_4Wheel_kinb_cntr_DW.obj_i.SampleTime = ROPOD_4Wheel_kinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_kinb_cntr_1087.get_parameter
      (&ROPOD_4Wheel_kinb_cntr_B.t10);

    // MATLABSystem: '<S8>/Get Parameter16'
    ROPOD_4Wheel_kinb_cntr_B.GetParameter16_o1 = ROPOD_4Wheel_kinb_cntr_B.t10;

    // Start for MATLABSystem: '<S8>/Get Parameter17'
    rtb_LowerRelop1_c = false;
    p = true;
    if (!(ROPOD_4Wheel_kinb_cntr_DW.obj_m.SampleTime ==
          ROPOD_4Wheel_kinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_c = true;
    }

    if (!rtb_LowerRelop1_c) {
      ROPOD_4Wheel_kinb_cntr_DW.obj_m.SampleTime = ROPOD_4Wheel_kinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_kinb_cntr_1088.get_parameter
      (&ROPOD_4Wheel_kinb_cntr_B.t10);

    // MATLABSystem: '<S8>/Get Parameter17'
    ROPOD_4Wheel_kinb_cntr_B.GetParameter17_o1 = ROPOD_4Wheel_kinb_cntr_B.t10;

    // Start for MATLABSystem: '<S8>/Get Parameter1'
    rtb_LowerRelop1_c = false;
    p = true;
    if (!(ROPOD_4Wheel_kinb_cntr_DW.obj_ei.SampleTime ==
          ROPOD_4Wheel_kinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_c = true;
    }

    if (!rtb_LowerRelop1_c) {
      ROPOD_4Wheel_kinb_cntr_DW.obj_ei.SampleTime = ROPOD_4Wheel_kinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_kinb_cntr_1097.get_parameter
      (&ROPOD_4Wheel_kinb_cntr_B.t10);

    // MATLABSystem: '<S8>/Get Parameter1'
    ROPOD_4Wheel_kinb_cntr_B.GetParameter1_o1 = ROPOD_4Wheel_kinb_cntr_B.t10;

    // Start for MATLABSystem: '<S8>/Get Parameter2'
    rtb_LowerRelop1_c = false;
    p = true;
    if (!(ROPOD_4Wheel_kinb_cntr_DW.obj_j.SampleTime ==
          ROPOD_4Wheel_kinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_c = true;
    }

    if (!rtb_LowerRelop1_c) {
      ROPOD_4Wheel_kinb_cntr_DW.obj_j.SampleTime = ROPOD_4Wheel_kinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_kinb_cntr_1098.get_parameter
      (&ROPOD_4Wheel_kinb_cntr_B.t10);

    // MATLABSystem: '<S8>/Get Parameter2'
    ROPOD_4Wheel_kinb_cntr_B.GetParameter2_o1 = ROPOD_4Wheel_kinb_cntr_B.t10;

    // Start for MATLABSystem: '<S8>/Get Parameter3'
    rtb_LowerRelop1_c = false;
    p = true;
    if (!(ROPOD_4Wheel_kinb_cntr_DW.obj_is.SampleTime ==
          ROPOD_4Wheel_kinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_c = true;
    }

    if (!rtb_LowerRelop1_c) {
      ROPOD_4Wheel_kinb_cntr_DW.obj_is.SampleTime = ROPOD_4Wheel_kinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_kinb_cntr_1101.get_parameter
      (&ROPOD_4Wheel_kinb_cntr_B.t10);

    // MATLABSystem: '<S8>/Get Parameter3'
    ROPOD_4Wheel_kinb_cntr_B.GetParameter3_o1 = ROPOD_4Wheel_kinb_cntr_B.t10;

    // Start for MATLABSystem: '<S8>/Get Parameter4'
    rtb_LowerRelop1_c = false;
    p = true;
    if (!(ROPOD_4Wheel_kinb_cntr_DW.obj_kd.SampleTime ==
          ROPOD_4Wheel_kinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_c = true;
    }

    if (!rtb_LowerRelop1_c) {
      ROPOD_4Wheel_kinb_cntr_DW.obj_kd.SampleTime = ROPOD_4Wheel_kinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_kinb_cntr_1102.get_parameter
      (&ROPOD_4Wheel_kinb_cntr_B.t10);

    // MATLABSystem: '<S8>/Get Parameter4'
    ROPOD_4Wheel_kinb_cntr_B.GetParameter4_o1 = ROPOD_4Wheel_kinb_cntr_B.t10;

    // Start for MATLABSystem: '<S8>/Get Parameter5'
    rtb_LowerRelop1_c = false;
    p = true;
    if (!(ROPOD_4Wheel_kinb_cntr_DW.obj_aa.SampleTime ==
          ROPOD_4Wheel_kinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_c = true;
    }

    if (!rtb_LowerRelop1_c) {
      ROPOD_4Wheel_kinb_cntr_DW.obj_aa.SampleTime = ROPOD_4Wheel_kinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_kinb_cntr_1103.get_parameter
      (&ROPOD_4Wheel_kinb_cntr_B.t10);

    // MATLABSystem: '<S8>/Get Parameter5'
    ROPOD_4Wheel_kinb_cntr_B.GetParameter5_o1 = ROPOD_4Wheel_kinb_cntr_B.t10;

    // Start for MATLABSystem: '<S8>/Get Parameter6'
    rtb_LowerRelop1_c = false;
    p = true;
    if (!(ROPOD_4Wheel_kinb_cntr_DW.obj_m2.SampleTime ==
          ROPOD_4Wheel_kinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_c = true;
    }

    if (!rtb_LowerRelop1_c) {
      ROPOD_4Wheel_kinb_cntr_DW.obj_m2.SampleTime = ROPOD_4Wheel_kinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_kinb_cntr_1104.get_parameter
      (&ROPOD_4Wheel_kinb_cntr_B.t10);

    // MATLABSystem: '<S8>/Get Parameter6'
    ROPOD_4Wheel_kinb_cntr_B.GetParameter6_o1 = ROPOD_4Wheel_kinb_cntr_B.t10;

    // Start for MATLABSystem: '<S8>/Get Parameter7'
    rtb_LowerRelop1_c = false;
    p = true;
    if (!(ROPOD_4Wheel_kinb_cntr_DW.obj_d.SampleTime ==
          ROPOD_4Wheel_kinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_c = true;
    }

    if (!rtb_LowerRelop1_c) {
      ROPOD_4Wheel_kinb_cntr_DW.obj_d.SampleTime = ROPOD_4Wheel_kinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_kinb_cntr_1110.get_parameter
      (&ROPOD_4Wheel_kinb_cntr_B.t10);

    // MATLABSystem: '<S8>/Get Parameter7'
    ROPOD_4Wheel_kinb_cntr_B.GetParameter7_o1 = ROPOD_4Wheel_kinb_cntr_B.t10;

    // Start for MATLABSystem: '<S8>/Get Parameter8'
    rtb_LowerRelop1_c = false;
    p = true;
    if (!(ROPOD_4Wheel_kinb_cntr_DW.obj_gc.SampleTime ==
          ROPOD_4Wheel_kinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_c = true;
    }

    if (!rtb_LowerRelop1_c) {
      ROPOD_4Wheel_kinb_cntr_DW.obj_gc.SampleTime = ROPOD_4Wheel_kinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_kinb_cntr_1111.get_parameter
      (&ROPOD_4Wheel_kinb_cntr_B.t10);

    // MATLABSystem: '<S8>/Get Parameter8'
    ROPOD_4Wheel_kinb_cntr_B.GetParameter8_o1 = ROPOD_4Wheel_kinb_cntr_B.t10;

    // Start for MATLABSystem: '<S8>/Get Parameter9'
    rtb_LowerRelop1_c = false;
    p = true;
    if (!(ROPOD_4Wheel_kinb_cntr_DW.obj_c0.SampleTime ==
          ROPOD_4Wheel_kinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_c = true;
    }

    if (!rtb_LowerRelop1_c) {
      ROPOD_4Wheel_kinb_cntr_DW.obj_c0.SampleTime = ROPOD_4Wheel_kinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_kinb_cntr_1112.get_parameter
      (&ROPOD_4Wheel_kinb_cntr_B.t10);

    // MATLABSystem: '<S8>/Get Parameter9'
    ROPOD_4Wheel_kinb_cntr_B.GetParameter9_o1 = ROPOD_4Wheel_kinb_cntr_B.t10;

    // Start for MATLABSystem: '<S8>/Get Parameter10'
    rtb_LowerRelop1_c = false;
    p = true;
    if (!(ROPOD_4Wheel_kinb_cntr_DW.obj_fc.SampleTime ==
          ROPOD_4Wheel_kinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_c = true;
    }

    if (!rtb_LowerRelop1_c) {
      ROPOD_4Wheel_kinb_cntr_DW.obj_fc.SampleTime = ROPOD_4Wheel_kinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_kinb_cntr_1109.get_parameter
      (&ROPOD_4Wheel_kinb_cntr_B.t10);

    // MATLABSystem: '<S8>/Get Parameter10'
    ROPOD_4Wheel_kinb_cntr_B.GetParameter10_o1 = ROPOD_4Wheel_kinb_cntr_B.t10;
  }

  // MATLAB Function: '<S2>/Gl_matrix' incorporates:
  //   MATLAB Function: '<S3>/Jqwl_matrix'
  //   SignalConversion: '<S30>/TmpSignal ConversionAt SFunction Inport1'

  ROPOD_4Wheel_kinb_cntr_B.t2 = 1.0 / ROPOD_4Wheel_kinb_cntr_B.GetParameter1_o1;
  ROPOD_4Wheel_kinb_cntr_B.t3_tmp = cos(ROPOD_4Wheel_kinb_cntr_B.Add[0]);
  ROPOD_4Wheel_kinb_cntr_B.t4_tmp = sin(ROPOD_4Wheel_kinb_cntr_B.Add[0]);
  ROPOD_4Wheel_kinb_cntr_B.t5_tmp = cos(ROPOD_4Wheel_kinb_cntr_B.Add[1]);
  t6_tmp = sin(ROPOD_4Wheel_kinb_cntr_B.Add[1]);
  t7_tmp = cos(ROPOD_4Wheel_kinb_cntr_B.Add[2]);
  t8_tmp = sin(ROPOD_4Wheel_kinb_cntr_B.Add[2]);
  t9_tmp = cos(ROPOD_4Wheel_kinb_cntr_B.Add[3]);
  t10_tmp = sin(ROPOD_4Wheel_kinb_cntr_B.Add[3]);
  ROPOD_4Wheel_kinb_cntr_B.t11 = 1.0 / ROPOD_4Wheel_kinb_cntr_B.GetParameter_o1;
  ROPOD_4Wheel_kinb_cntr_B.t14 = ROPOD_4Wheel_kinb_cntr_B.GetParameter3_o1 *
    ROPOD_4Wheel_kinb_cntr_B.t3_tmp + ROPOD_4Wheel_kinb_cntr_B.GetParameter4_o1 *
    ROPOD_4Wheel_kinb_cntr_B.t4_tmp;
  ROPOD_4Wheel_kinb_cntr_B.t15_tmp = ROPOD_4Wheel_kinb_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_kinb_cntr_B.t2;
  ROPOD_4Wheel_kinb_cntr_B.t15 = ROPOD_4Wheel_kinb_cntr_B.t15_tmp *
    ROPOD_4Wheel_kinb_cntr_B.t4_tmp * 0.5;
  ROPOD_4Wheel_kinb_cntr_B.t16 = 1.0 /
    ROPOD_4Wheel_kinb_cntr_B.GetParameter11_o1;
  ROPOD_4Wheel_kinb_cntr_B.t17 = ROPOD_4Wheel_kinb_cntr_B.GetParameter4_o1 *
    ROPOD_4Wheel_kinb_cntr_B.t3_tmp;
  ROPOD_4Wheel_kinb_cntr_B.t18 = ROPOD_4Wheel_kinb_cntr_B.t15_tmp *
    ROPOD_4Wheel_kinb_cntr_B.t14 * 0.5;
  ROPOD_4Wheel_kinb_cntr_B.t19 = 1.0 /
    ROPOD_4Wheel_kinb_cntr_B.GetParameter12_o1;
  ROPOD_4Wheel_kinb_cntr_B.t22 = ROPOD_4Wheel_kinb_cntr_B.GetParameter5_o1 *
    ROPOD_4Wheel_kinb_cntr_B.t5_tmp + ROPOD_4Wheel_kinb_cntr_B.GetParameter6_o1 *
    t6_tmp;
  ROPOD_4Wheel_kinb_cntr_B.t23 = ROPOD_4Wheel_kinb_cntr_B.t15_tmp * t6_tmp * 0.5;
  ROPOD_4Wheel_kinb_cntr_B.t24 = 1.0 /
    ROPOD_4Wheel_kinb_cntr_B.GetParameter13_o1;
  ROPOD_4Wheel_kinb_cntr_B.t25 = ROPOD_4Wheel_kinb_cntr_B.GetParameter6_o1 *
    ROPOD_4Wheel_kinb_cntr_B.t5_tmp;
  ROPOD_4Wheel_kinb_cntr_B.t26 = ROPOD_4Wheel_kinb_cntr_B.t15_tmp *
    ROPOD_4Wheel_kinb_cntr_B.t22 * 0.5;
  ROPOD_4Wheel_kinb_cntr_B.t27 = 1.0 /
    ROPOD_4Wheel_kinb_cntr_B.GetParameter14_o1;
  ROPOD_4Wheel_kinb_cntr_B.t30 = ROPOD_4Wheel_kinb_cntr_B.GetParameter7_o1 *
    t7_tmp + ROPOD_4Wheel_kinb_cntr_B.GetParameter8_o1 * t8_tmp;
  ROPOD_4Wheel_kinb_cntr_B.t31 = ROPOD_4Wheel_kinb_cntr_B.t15_tmp * t8_tmp * 0.5;
  ROPOD_4Wheel_kinb_cntr_B.t32 = 1.0 /
    ROPOD_4Wheel_kinb_cntr_B.GetParameter15_o1;
  ROPOD_4Wheel_kinb_cntr_B.t33 = ROPOD_4Wheel_kinb_cntr_B.GetParameter8_o1 *
    t7_tmp;
  ROPOD_4Wheel_kinb_cntr_B.t34 = ROPOD_4Wheel_kinb_cntr_B.t15_tmp *
    ROPOD_4Wheel_kinb_cntr_B.t30 * 0.5;
  ROPOD_4Wheel_kinb_cntr_B.t35 = 1.0 /
    ROPOD_4Wheel_kinb_cntr_B.GetParameter16_o1;
  ROPOD_4Wheel_kinb_cntr_B.t38 = ROPOD_4Wheel_kinb_cntr_B.GetParameter9_o1 *
    t9_tmp + ROPOD_4Wheel_kinb_cntr_B.GetParameter10_o1 * t10_tmp;
  ROPOD_4Wheel_kinb_cntr_B.t39 = ROPOD_4Wheel_kinb_cntr_B.t15_tmp * t10_tmp *
    0.5;
  ROPOD_4Wheel_kinb_cntr_B.t40 = 1.0 /
    ROPOD_4Wheel_kinb_cntr_B.GetParameter17_o1;
  ROPOD_4Wheel_kinb_cntr_B.t41 = ROPOD_4Wheel_kinb_cntr_B.GetParameter10_o1 *
    t9_tmp;
  ROPOD_4Wheel_kinb_cntr_B.t42 = ROPOD_4Wheel_kinb_cntr_B.t15_tmp *
    ROPOD_4Wheel_kinb_cntr_B.t38 * 0.5;
  if (ROPOD_4Wheel_kinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Start for MATLABSystem: '<S11>/Get Parameter'
    rtb_LowerRelop1_c = false;
    p = true;
    if (!(ROPOD_4Wheel_kinb_cntr_DW.obj.SampleTime ==
          ROPOD_4Wheel_kinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_c = true;
    }

    if (!rtb_LowerRelop1_c) {
      ROPOD_4Wheel_kinb_cntr_DW.obj.SampleTime = ROPOD_4Wheel_kinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_kinb_cntr_551.get_parameter
      (&ROPOD_4Wheel_kinb_cntr_B.t10);

    // MATLABSystem: '<S11>/Get Parameter'
    ROPOD_4Wheel_kinb_cntr_B.max_acc_xy = ROPOD_4Wheel_kinb_cntr_B.t10;
  }

  if (ROPOD_4Wheel_kinb_cntr_M->Timing.TaskCounters.TID[1] == 0) {
    // SampleTimeMath: '<S46>/sample time'
    //
    //  About '<S46>/sample time':
    //   y = K where K = ( w * Ts )

    ROPOD_4Wheel_kinb_cntr_B.sampletime =
      ROPOD_4Wheel_kinb_cntr_P.sampletime_WtEt;

    // Product: '<S46>/delta rise limit' incorporates:
    //   SampleTimeMath: '<S46>/sample time'
    //
    //  About '<S46>/sample time':
    //   y = K where K = ( w * Ts )

    ROPOD_4Wheel_kinb_cntr_B.Switch2_a = ROPOD_4Wheel_kinb_cntr_B.max_acc_xy *
      ROPOD_4Wheel_kinb_cntr_P.sampletime_WtEt;
  }

  if (ROPOD_4Wheel_kinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Start for MATLABSystem: '<S11>/Get Parameter1'
    rtb_LowerRelop1_c = false;
    p = true;
    if (!(ROPOD_4Wheel_kinb_cntr_DW.obj_p.SampleTime ==
          ROPOD_4Wheel_kinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_c = true;
    }

    if (!rtb_LowerRelop1_c) {
      ROPOD_4Wheel_kinb_cntr_DW.obj_p.SampleTime = ROPOD_4Wheel_kinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_kinb_cntr_552.get_parameter
      (&ROPOD_4Wheel_kinb_cntr_B.t10);

    // MATLABSystem: '<S11>/Get Parameter1'
    ROPOD_4Wheel_kinb_cntr_B.max_vel_xy = ROPOD_4Wheel_kinb_cntr_B.t10;
  }

  if (ROPOD_4Wheel_kinb_cntr_M->Timing.TaskCounters.TID[1] == 0) {
    // Outputs for Atomic SubSystem: '<S13>/Subscribe1'
    // MATLABSystem: '<S52>/SourceBlock'
    ROPOD_4Wheel_kinb_cntr_B.SourceBlock_o1 =
      Sub_ROPOD_4Wheel_kinb_cntr_528.getLatestMessage
      (&ROPOD_4Wheel_kinb_cntr_B.b_varargout_2);

    // Outputs for Enabled SubSystem: '<S52>/Enabled Subsystem' incorporates:
    //   EnablePort: '<S56>/Enable'

    // Delay: '<S13>/Enabled Delay' incorporates:
    //   Inport: '<S56>/In1'
    //   MATLABSystem: '<S52>/SourceBlock'
    //   MATLABSystem: '<S52>/SourceBlock'

    if (ROPOD_4Wheel_kinb_cntr_B.SourceBlock_o1) {
      ROPOD_4Wheel_kinb_cntr_B.In1 = ROPOD_4Wheel_kinb_cntr_B.b_varargout_2;
      ROPOD_4Wheel_kinb_cntr_B.EnabledDelay =
        ROPOD_4Wheel_kinb_cntr_DW.EnabledDelay_DSTATE;
    }

    // End of Delay: '<S13>/Enabled Delay'
    // End of Outputs for SubSystem: '<S52>/Enabled Subsystem'
    // End of Outputs for SubSystem: '<S13>/Subscribe1'

    // Gain: '<S13>/Gain6' incorporates:
    //   Constant: '<S45>/Constant'
    //   RelationalOperator: '<S45>/Compare'
    //   Sum: '<S13>/Subtract'

    rtb_Gain6 = (uint8_T)(0.0 - ROPOD_4Wheel_kinb_cntr_B.EnabledDelay >=
                          ROPOD_4Wheel_kinb_cntr_P.CompareToConstant_const ?
                          (int32_T)ROPOD_4Wheel_kinb_cntr_P.Gain6_Gain_a : 0);

    // Switch: '<S13>/Switch' incorporates:
    //   Constant: '<S13>/Constant'

    if (rtb_Gain6 > ROPOD_4Wheel_kinb_cntr_P.Switch_Threshold) {
      ROPOD_4Wheel_kinb_cntr_B.Switch =
        ROPOD_4Wheel_kinb_cntr_P.Constant_Value_k;
    } else {
      ROPOD_4Wheel_kinb_cntr_B.Switch = ROPOD_4Wheel_kinb_cntr_B.In1.Linear.X;
    }

    // End of Switch: '<S13>/Switch'

    // RelationalOperator: '<S49>/LowerRelop1'
    rtb_LowerRelop1 = (ROPOD_4Wheel_kinb_cntr_B.Switch >
                       ROPOD_4Wheel_kinb_cntr_B.max_vel_xy);
  }

  if (ROPOD_4Wheel_kinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S13>/Gain1'
    ROPOD_4Wheel_kinb_cntr_B.Gain1 = ROPOD_4Wheel_kinb_cntr_P.Gain1_Gain_j *
      ROPOD_4Wheel_kinb_cntr_B.max_vel_xy;

    // Gain: '<S13>/Gain'
    ROPOD_4Wheel_kinb_cntr_B.Gain = ROPOD_4Wheel_kinb_cntr_P.Gain_Gain_g *
      ROPOD_4Wheel_kinb_cntr_B.max_acc_xy;
  }

  if (ROPOD_4Wheel_kinb_cntr_M->Timing.TaskCounters.TID[1] == 0) {
    // UnitDelay: '<S46>/Delay Input2'
    //
    //  Block description for '<S46>/Delay Input2':
    //
    //   Store in Global RAM

    ROPOD_4Wheel_kinb_cntr_B.Yk1 = ROPOD_4Wheel_kinb_cntr_DW.DelayInput2_DSTATE;

    // Switch: '<S49>/Switch2' incorporates:
    //   RelationalOperator: '<S49>/UpperRelop'
    //   Switch: '<S49>/Switch'

    if (rtb_LowerRelop1) {
      ROPOD_4Wheel_kinb_cntr_B.Switch = ROPOD_4Wheel_kinb_cntr_B.max_vel_xy;
    } else {
      if (ROPOD_4Wheel_kinb_cntr_B.Switch < ROPOD_4Wheel_kinb_cntr_B.Gain1) {
        // Switch: '<S49>/Switch'
        ROPOD_4Wheel_kinb_cntr_B.Switch = ROPOD_4Wheel_kinb_cntr_B.Gain1;
      }
    }

    // End of Switch: '<S49>/Switch2'

    // Sum: '<S46>/Difference Inputs1'
    //
    //  Block description for '<S46>/Difference Inputs1':
    //
    //   Add in CPU

    ROPOD_4Wheel_kinb_cntr_B.Switch2 = ROPOD_4Wheel_kinb_cntr_B.Switch -
      ROPOD_4Wheel_kinb_cntr_B.Yk1;

    // RelationalOperator: '<S53>/LowerRelop1'
    rtb_LowerRelop1_c = (ROPOD_4Wheel_kinb_cntr_B.Switch2 >
                         ROPOD_4Wheel_kinb_cntr_B.Switch2_a);

    // Switch: '<S53>/Switch2'
    if (!rtb_LowerRelop1_c) {
      // Product: '<S46>/delta fall limit'
      ROPOD_4Wheel_kinb_cntr_B.Switch2_a = ROPOD_4Wheel_kinb_cntr_B.Gain *
        ROPOD_4Wheel_kinb_cntr_B.sampletime;

      // Switch: '<S53>/Switch' incorporates:
      //   RelationalOperator: '<S53>/UpperRelop'

      if (!(ROPOD_4Wheel_kinb_cntr_B.Switch2 <
            ROPOD_4Wheel_kinb_cntr_B.Switch2_a)) {
        ROPOD_4Wheel_kinb_cntr_B.Switch2_a = ROPOD_4Wheel_kinb_cntr_B.Switch2;
      }

      // End of Switch: '<S53>/Switch'
    }

    // End of Switch: '<S53>/Switch2'

    // Sum: '<S46>/Difference Inputs2'
    //
    //  Block description for '<S46>/Difference Inputs2':
    //
    //   Add in CPU

    ROPOD_4Wheel_kinb_cntr_B.DifferenceInputs2 =
      ROPOD_4Wheel_kinb_cntr_B.Switch2_a + ROPOD_4Wheel_kinb_cntr_B.Yk1;

    // SampleTimeMath: '<S47>/sample time'
    //
    //  About '<S47>/sample time':
    //   y = K where K = ( w * Ts )

    ROPOD_4Wheel_kinb_cntr_B.sampletime_o =
      ROPOD_4Wheel_kinb_cntr_P.sampletime_WtEt_n;

    // Product: '<S47>/delta rise limit' incorporates:
    //   SampleTimeMath: '<S47>/sample time'
    //
    //  About '<S47>/sample time':
    //   y = K where K = ( w * Ts )

    ROPOD_4Wheel_kinb_cntr_B.Switch2_a = ROPOD_4Wheel_kinb_cntr_B.max_acc_xy *
      ROPOD_4Wheel_kinb_cntr_P.sampletime_WtEt_n;

    // Switch: '<S13>/Switch1' incorporates:
    //   Constant: '<S13>/Constant1'

    if (rtb_Gain6 > ROPOD_4Wheel_kinb_cntr_P.Switch1_Threshold) {
      ROPOD_4Wheel_kinb_cntr_B.Switch1 =
        ROPOD_4Wheel_kinb_cntr_P.Constant1_Value;
    } else {
      ROPOD_4Wheel_kinb_cntr_B.Switch1 = ROPOD_4Wheel_kinb_cntr_B.In1.Linear.Y;
    }

    // End of Switch: '<S13>/Switch1'

    // RelationalOperator: '<S50>/LowerRelop1'
    rtb_LowerRelop1_e = (ROPOD_4Wheel_kinb_cntr_B.Switch1 >
                         ROPOD_4Wheel_kinb_cntr_B.max_vel_xy);
  }

  if (ROPOD_4Wheel_kinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S13>/Gain3'
    ROPOD_4Wheel_kinb_cntr_B.Gain3 = ROPOD_4Wheel_kinb_cntr_P.Gain3_Gain_e *
      ROPOD_4Wheel_kinb_cntr_B.max_vel_xy;

    // Gain: '<S13>/Gain2'
    ROPOD_4Wheel_kinb_cntr_B.Gain2 = ROPOD_4Wheel_kinb_cntr_P.Gain2_Gain_e *
      ROPOD_4Wheel_kinb_cntr_B.max_acc_xy;
  }

  if (ROPOD_4Wheel_kinb_cntr_M->Timing.TaskCounters.TID[1] == 0) {
    // UnitDelay: '<S47>/Delay Input2'
    //
    //  Block description for '<S47>/Delay Input2':
    //
    //   Store in Global RAM

    ROPOD_4Wheel_kinb_cntr_B.Yk1_l =
      ROPOD_4Wheel_kinb_cntr_DW.DelayInput2_DSTATE_a;

    // Switch: '<S50>/Switch2' incorporates:
    //   RelationalOperator: '<S50>/UpperRelop'
    //   Switch: '<S50>/Switch'

    if (rtb_LowerRelop1_e) {
      ROPOD_4Wheel_kinb_cntr_B.Switch1 = ROPOD_4Wheel_kinb_cntr_B.max_vel_xy;
    } else {
      if (ROPOD_4Wheel_kinb_cntr_B.Switch1 < ROPOD_4Wheel_kinb_cntr_B.Gain3) {
        // Switch: '<S50>/Switch'
        ROPOD_4Wheel_kinb_cntr_B.Switch1 = ROPOD_4Wheel_kinb_cntr_B.Gain3;
      }
    }

    // End of Switch: '<S50>/Switch2'

    // Sum: '<S47>/Difference Inputs1'
    //
    //  Block description for '<S47>/Difference Inputs1':
    //
    //   Add in CPU

    ROPOD_4Wheel_kinb_cntr_B.Switch2_l = ROPOD_4Wheel_kinb_cntr_B.Switch1 -
      ROPOD_4Wheel_kinb_cntr_B.Yk1_l;

    // RelationalOperator: '<S54>/LowerRelop1'
    rtb_LowerRelop1_c = (ROPOD_4Wheel_kinb_cntr_B.Switch2_l >
                         ROPOD_4Wheel_kinb_cntr_B.Switch2_a);

    // Switch: '<S54>/Switch2'
    if (!rtb_LowerRelop1_c) {
      // Product: '<S47>/delta fall limit'
      ROPOD_4Wheel_kinb_cntr_B.Switch2_a = ROPOD_4Wheel_kinb_cntr_B.Gain2 *
        ROPOD_4Wheel_kinb_cntr_B.sampletime_o;

      // Switch: '<S54>/Switch' incorporates:
      //   RelationalOperator: '<S54>/UpperRelop'

      if (!(ROPOD_4Wheel_kinb_cntr_B.Switch2_l <
            ROPOD_4Wheel_kinb_cntr_B.Switch2_a)) {
        ROPOD_4Wheel_kinb_cntr_B.Switch2_a = ROPOD_4Wheel_kinb_cntr_B.Switch2_l;
      }

      // End of Switch: '<S54>/Switch'
    }

    // End of Switch: '<S54>/Switch2'

    // Sum: '<S47>/Difference Inputs2'
    //
    //  Block description for '<S47>/Difference Inputs2':
    //
    //   Add in CPU

    ROPOD_4Wheel_kinb_cntr_B.DifferenceInputs2_n =
      ROPOD_4Wheel_kinb_cntr_B.Switch2_a + ROPOD_4Wheel_kinb_cntr_B.Yk1_l;
  }

  if (ROPOD_4Wheel_kinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Start for MATLABSystem: '<S11>/Get Parameter2'
    rtb_LowerRelop1_c = false;
    p = true;
    if (!(ROPOD_4Wheel_kinb_cntr_DW.obj_o.SampleTime ==
          ROPOD_4Wheel_kinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_c = true;
    }

    if (!rtb_LowerRelop1_c) {
      ROPOD_4Wheel_kinb_cntr_DW.obj_o.SampleTime = ROPOD_4Wheel_kinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_kinb_cntr_664.get_parameter
      (&ROPOD_4Wheel_kinb_cntr_B.t10);

    // MATLABSystem: '<S11>/Get Parameter2'
    ROPOD_4Wheel_kinb_cntr_B.max_acc_theta = ROPOD_4Wheel_kinb_cntr_B.t10;
  }

  if (ROPOD_4Wheel_kinb_cntr_M->Timing.TaskCounters.TID[1] == 0) {
    // SampleTimeMath: '<S48>/sample time'
    //
    //  About '<S48>/sample time':
    //   y = K where K = ( w * Ts )

    ROPOD_4Wheel_kinb_cntr_B.sampletime_a =
      ROPOD_4Wheel_kinb_cntr_P.sampletime_WtEt_e;

    // Product: '<S48>/delta rise limit' incorporates:
    //   SampleTimeMath: '<S48>/sample time'
    //
    //  About '<S48>/sample time':
    //   y = K where K = ( w * Ts )

    ROPOD_4Wheel_kinb_cntr_B.Switch2_a = ROPOD_4Wheel_kinb_cntr_B.max_acc_theta *
      ROPOD_4Wheel_kinb_cntr_P.sampletime_WtEt_e;
  }

  if (ROPOD_4Wheel_kinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Start for MATLABSystem: '<S11>/Get Parameter3'
    rtb_LowerRelop1_c = false;
    p = true;
    if (!(ROPOD_4Wheel_kinb_cntr_DW.obj_pq.SampleTime ==
          ROPOD_4Wheel_kinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_c = true;
    }

    if (!rtb_LowerRelop1_c) {
      ROPOD_4Wheel_kinb_cntr_DW.obj_pq.SampleTime = ROPOD_4Wheel_kinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_kinb_cntr_665.get_parameter
      (&ROPOD_4Wheel_kinb_cntr_B.t10);

    // MATLABSystem: '<S11>/Get Parameter3'
    ROPOD_4Wheel_kinb_cntr_B.max_vel_theta = ROPOD_4Wheel_kinb_cntr_B.t10;
  }

  if (ROPOD_4Wheel_kinb_cntr_M->Timing.TaskCounters.TID[1] == 0) {
    // Switch: '<S13>/Switch2' incorporates:
    //   Constant: '<S13>/Constant2'

    if (rtb_Gain6 > ROPOD_4Wheel_kinb_cntr_P.Switch2_Threshold) {
      ROPOD_4Wheel_kinb_cntr_B.Switch2_k =
        ROPOD_4Wheel_kinb_cntr_P.Constant2_Value;
    } else {
      ROPOD_4Wheel_kinb_cntr_B.Switch2_k =
        ROPOD_4Wheel_kinb_cntr_B.In1.Angular.Z;
    }

    // End of Switch: '<S13>/Switch2'

    // RelationalOperator: '<S51>/LowerRelop1'
    rtb_LowerRelop1_l = (ROPOD_4Wheel_kinb_cntr_B.Switch2_k >
                         ROPOD_4Wheel_kinb_cntr_B.max_vel_theta);
  }

  if (ROPOD_4Wheel_kinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S13>/Gain5'
    ROPOD_4Wheel_kinb_cntr_B.Gain5 = ROPOD_4Wheel_kinb_cntr_P.Gain5_Gain_c *
      ROPOD_4Wheel_kinb_cntr_B.max_vel_theta;

    // Gain: '<S13>/Gain4'
    ROPOD_4Wheel_kinb_cntr_B.Gain4 = ROPOD_4Wheel_kinb_cntr_P.Gain4_Gain_c *
      ROPOD_4Wheel_kinb_cntr_B.max_acc_theta;
  }

  if (ROPOD_4Wheel_kinb_cntr_M->Timing.TaskCounters.TID[1] == 0) {
    // UnitDelay: '<S48>/Delay Input2'
    //
    //  Block description for '<S48>/Delay Input2':
    //
    //   Store in Global RAM

    ROPOD_4Wheel_kinb_cntr_B.Yk1_lf =
      ROPOD_4Wheel_kinb_cntr_DW.DelayInput2_DSTATE_e;

    // Switch: '<S51>/Switch2' incorporates:
    //   RelationalOperator: '<S51>/UpperRelop'
    //   Switch: '<S51>/Switch'

    if (rtb_LowerRelop1_l) {
      ROPOD_4Wheel_kinb_cntr_B.Switch2_k =
        ROPOD_4Wheel_kinb_cntr_B.max_vel_theta;
    } else {
      if (ROPOD_4Wheel_kinb_cntr_B.Switch2_k < ROPOD_4Wheel_kinb_cntr_B.Gain5) {
        // Switch: '<S51>/Switch'
        ROPOD_4Wheel_kinb_cntr_B.Switch2_k = ROPOD_4Wheel_kinb_cntr_B.Gain5;
      }
    }

    // End of Switch: '<S51>/Switch2'

    // Sum: '<S48>/Difference Inputs1'
    //
    //  Block description for '<S48>/Difference Inputs1':
    //
    //   Add in CPU

    ROPOD_4Wheel_kinb_cntr_B.Switch2_km = ROPOD_4Wheel_kinb_cntr_B.Switch2_k -
      ROPOD_4Wheel_kinb_cntr_B.Yk1_lf;

    // RelationalOperator: '<S55>/LowerRelop1'
    rtb_LowerRelop1_l = (ROPOD_4Wheel_kinb_cntr_B.Switch2_km >
                         ROPOD_4Wheel_kinb_cntr_B.Switch2_a);

    // Switch: '<S55>/Switch2'
    if (!rtb_LowerRelop1_l) {
      // Product: '<S48>/delta fall limit'
      ROPOD_4Wheel_kinb_cntr_B.sampletime_a *= ROPOD_4Wheel_kinb_cntr_B.Gain4;

      // Switch: '<S55>/Switch' incorporates:
      //   RelationalOperator: '<S55>/UpperRelop'

      if (ROPOD_4Wheel_kinb_cntr_B.Switch2_km <
          ROPOD_4Wheel_kinb_cntr_B.sampletime_a) {
        ROPOD_4Wheel_kinb_cntr_B.Switch2_a =
          ROPOD_4Wheel_kinb_cntr_B.sampletime_a;
      } else {
        ROPOD_4Wheel_kinb_cntr_B.Switch2_a = ROPOD_4Wheel_kinb_cntr_B.Switch2_km;
      }

      // End of Switch: '<S55>/Switch'
    }

    // End of Switch: '<S55>/Switch2'

    // Sum: '<S48>/Difference Inputs2'
    //
    //  Block description for '<S48>/Difference Inputs2':
    //
    //   Add in CPU

    ROPOD_4Wheel_kinb_cntr_B.DifferenceInputs2_g =
      ROPOD_4Wheel_kinb_cntr_B.Switch2_a + ROPOD_4Wheel_kinb_cntr_B.Yk1_lf;
  }

  // MATLAB Function: '<S2>/Gl_matrix' incorporates:
  //   SignalConversion: '<S30>/TmpSignal ConversionAt SFunction Inport1'

  ROPOD_4Wheel_kinb_cntr_B.dv0[0] = 1.0;
  ROPOD_4Wheel_kinb_cntr_B.dv0[1] = 0.0;
  ROPOD_4Wheel_kinb_cntr_B.dv0[2] = 0.0;
  ROPOD_4Wheel_kinb_cntr_B.dv0[3] = -ROPOD_4Wheel_kinb_cntr_B.t2 *
    ROPOD_4Wheel_kinb_cntr_B.t4_tmp;
  ROPOD_4Wheel_kinb_cntr_B.dv0[4] = -ROPOD_4Wheel_kinb_cntr_B.t2 * t6_tmp;
  ROPOD_4Wheel_kinb_cntr_B.dv0[5] = -ROPOD_4Wheel_kinb_cntr_B.t2 * t8_tmp;
  ROPOD_4Wheel_kinb_cntr_B.dv0[6] = -ROPOD_4Wheel_kinb_cntr_B.t2 * t10_tmp;
  ROPOD_4Wheel_kinb_cntr_B.dv0[7] = (ROPOD_4Wheel_kinb_cntr_B.t3_tmp +
    ROPOD_4Wheel_kinb_cntr_B.t15) * ROPOD_4Wheel_kinb_cntr_B.t11;
  ROPOD_4Wheel_kinb_cntr_B.dv0[8] = (ROPOD_4Wheel_kinb_cntr_B.t3_tmp -
    ROPOD_4Wheel_kinb_cntr_B.t15) * ROPOD_4Wheel_kinb_cntr_B.t16;
  ROPOD_4Wheel_kinb_cntr_B.dv0[9] = (ROPOD_4Wheel_kinb_cntr_B.t5_tmp +
    ROPOD_4Wheel_kinb_cntr_B.t23) * ROPOD_4Wheel_kinb_cntr_B.t19;
  ROPOD_4Wheel_kinb_cntr_B.dv0[10] = (ROPOD_4Wheel_kinb_cntr_B.t5_tmp -
    ROPOD_4Wheel_kinb_cntr_B.t23) * ROPOD_4Wheel_kinb_cntr_B.t24;
  ROPOD_4Wheel_kinb_cntr_B.dv0[11] = (t7_tmp + ROPOD_4Wheel_kinb_cntr_B.t31) *
    ROPOD_4Wheel_kinb_cntr_B.t27;
  ROPOD_4Wheel_kinb_cntr_B.dv0[12] = (t7_tmp - ROPOD_4Wheel_kinb_cntr_B.t31) *
    ROPOD_4Wheel_kinb_cntr_B.t32;
  ROPOD_4Wheel_kinb_cntr_B.dv0[13] = (t9_tmp + ROPOD_4Wheel_kinb_cntr_B.t39) *
    ROPOD_4Wheel_kinb_cntr_B.t35;
  ROPOD_4Wheel_kinb_cntr_B.dv0[14] = (t9_tmp - ROPOD_4Wheel_kinb_cntr_B.t39) *
    ROPOD_4Wheel_kinb_cntr_B.t40;
  ROPOD_4Wheel_kinb_cntr_B.dv0[15] = 0.0;
  ROPOD_4Wheel_kinb_cntr_B.dv0[16] = 1.0;
  ROPOD_4Wheel_kinb_cntr_B.dv0[17] = 0.0;
  ROPOD_4Wheel_kinb_cntr_B.dv0[18] = ROPOD_4Wheel_kinb_cntr_B.t2 *
    ROPOD_4Wheel_kinb_cntr_B.t3_tmp;
  ROPOD_4Wheel_kinb_cntr_B.dv0[19] = ROPOD_4Wheel_kinb_cntr_B.t2 *
    ROPOD_4Wheel_kinb_cntr_B.t5_tmp;
  ROPOD_4Wheel_kinb_cntr_B.dv0[20] = ROPOD_4Wheel_kinb_cntr_B.t2 * t7_tmp;
  ROPOD_4Wheel_kinb_cntr_B.dv0[21] = ROPOD_4Wheel_kinb_cntr_B.t2 * t9_tmp;
  ROPOD_4Wheel_kinb_cntr_B.t23 = ROPOD_4Wheel_kinb_cntr_B.t15_tmp *
    ROPOD_4Wheel_kinb_cntr_B.t3_tmp * 0.5;
  ROPOD_4Wheel_kinb_cntr_B.dv0[22] = (ROPOD_4Wheel_kinb_cntr_B.t4_tmp -
    ROPOD_4Wheel_kinb_cntr_B.t23) * ROPOD_4Wheel_kinb_cntr_B.t11;
  ROPOD_4Wheel_kinb_cntr_B.dv0[23] = (ROPOD_4Wheel_kinb_cntr_B.t23 +
    ROPOD_4Wheel_kinb_cntr_B.t4_tmp) * ROPOD_4Wheel_kinb_cntr_B.t16;
  ROPOD_4Wheel_kinb_cntr_B.t23 = ROPOD_4Wheel_kinb_cntr_B.t15_tmp *
    ROPOD_4Wheel_kinb_cntr_B.t5_tmp * 0.5;
  ROPOD_4Wheel_kinb_cntr_B.dv0[24] = (t6_tmp - ROPOD_4Wheel_kinb_cntr_B.t23) *
    ROPOD_4Wheel_kinb_cntr_B.t19;
  ROPOD_4Wheel_kinb_cntr_B.dv0[25] = (ROPOD_4Wheel_kinb_cntr_B.t23 + t6_tmp) *
    ROPOD_4Wheel_kinb_cntr_B.t24;
  ROPOD_4Wheel_kinb_cntr_B.t23 = ROPOD_4Wheel_kinb_cntr_B.t15_tmp * t7_tmp * 0.5;
  ROPOD_4Wheel_kinb_cntr_B.dv0[26] = (t8_tmp - ROPOD_4Wheel_kinb_cntr_B.t23) *
    ROPOD_4Wheel_kinb_cntr_B.t27;
  ROPOD_4Wheel_kinb_cntr_B.dv0[27] = (ROPOD_4Wheel_kinb_cntr_B.t23 + t8_tmp) *
    ROPOD_4Wheel_kinb_cntr_B.t32;
  ROPOD_4Wheel_kinb_cntr_B.t23 = ROPOD_4Wheel_kinb_cntr_B.t15_tmp * t9_tmp * 0.5;
  ROPOD_4Wheel_kinb_cntr_B.dv0[28] = (t10_tmp - ROPOD_4Wheel_kinb_cntr_B.t23) *
    ROPOD_4Wheel_kinb_cntr_B.t35;
  ROPOD_4Wheel_kinb_cntr_B.dv0[29] = (ROPOD_4Wheel_kinb_cntr_B.t23 + t10_tmp) *
    ROPOD_4Wheel_kinb_cntr_B.t40;
  ROPOD_4Wheel_kinb_cntr_B.dv0[30] = 0.0;
  ROPOD_4Wheel_kinb_cntr_B.dv0[31] = 0.0;
  ROPOD_4Wheel_kinb_cntr_B.dv0[32] = 1.0;
  ROPOD_4Wheel_kinb_cntr_B.dv0[33] = ROPOD_4Wheel_kinb_cntr_B.t2 *
    ROPOD_4Wheel_kinb_cntr_B.t14 - 1.0;
  ROPOD_4Wheel_kinb_cntr_B.dv0[34] = ROPOD_4Wheel_kinb_cntr_B.t2 *
    ROPOD_4Wheel_kinb_cntr_B.t22 - 1.0;
  ROPOD_4Wheel_kinb_cntr_B.dv0[35] = ROPOD_4Wheel_kinb_cntr_B.t2 *
    ROPOD_4Wheel_kinb_cntr_B.t30 - 1.0;
  ROPOD_4Wheel_kinb_cntr_B.dv0[36] = ROPOD_4Wheel_kinb_cntr_B.t2 *
    ROPOD_4Wheel_kinb_cntr_B.t38 - 1.0;
  ROPOD_4Wheel_kinb_cntr_B.t23 = ROPOD_4Wheel_kinb_cntr_B.GetParameter3_o1 *
    ROPOD_4Wheel_kinb_cntr_B.t4_tmp;
  ROPOD_4Wheel_kinb_cntr_B.dv0[37] = ((ROPOD_4Wheel_kinb_cntr_B.t17 +
    ROPOD_4Wheel_kinb_cntr_B.t18) - ROPOD_4Wheel_kinb_cntr_B.t23) *
    -ROPOD_4Wheel_kinb_cntr_B.t11;
  ROPOD_4Wheel_kinb_cntr_B.dv0[38] = ((-ROPOD_4Wheel_kinb_cntr_B.t17 +
    ROPOD_4Wheel_kinb_cntr_B.t18) + ROPOD_4Wheel_kinb_cntr_B.t23) *
    ROPOD_4Wheel_kinb_cntr_B.t16;
  ROPOD_4Wheel_kinb_cntr_B.t23 = ROPOD_4Wheel_kinb_cntr_B.GetParameter5_o1 *
    t6_tmp;
  ROPOD_4Wheel_kinb_cntr_B.dv0[39] = ((ROPOD_4Wheel_kinb_cntr_B.t25 +
    ROPOD_4Wheel_kinb_cntr_B.t26) - ROPOD_4Wheel_kinb_cntr_B.t23) *
    -ROPOD_4Wheel_kinb_cntr_B.t19;
  ROPOD_4Wheel_kinb_cntr_B.dv0[40] = ((-ROPOD_4Wheel_kinb_cntr_B.t25 +
    ROPOD_4Wheel_kinb_cntr_B.t26) + ROPOD_4Wheel_kinb_cntr_B.t23) *
    ROPOD_4Wheel_kinb_cntr_B.t24;
  ROPOD_4Wheel_kinb_cntr_B.t23 = ROPOD_4Wheel_kinb_cntr_B.GetParameter7_o1 *
    t8_tmp;
  ROPOD_4Wheel_kinb_cntr_B.dv0[41] = ((ROPOD_4Wheel_kinb_cntr_B.t33 +
    ROPOD_4Wheel_kinb_cntr_B.t34) - ROPOD_4Wheel_kinb_cntr_B.t23) *
    -ROPOD_4Wheel_kinb_cntr_B.t27;
  ROPOD_4Wheel_kinb_cntr_B.dv0[42] = ((-ROPOD_4Wheel_kinb_cntr_B.t33 +
    ROPOD_4Wheel_kinb_cntr_B.t34) + ROPOD_4Wheel_kinb_cntr_B.t23) *
    ROPOD_4Wheel_kinb_cntr_B.t32;
  ROPOD_4Wheel_kinb_cntr_B.t23 = ROPOD_4Wheel_kinb_cntr_B.GetParameter9_o1 *
    t10_tmp;
  ROPOD_4Wheel_kinb_cntr_B.dv0[43] = ((ROPOD_4Wheel_kinb_cntr_B.t41 +
    ROPOD_4Wheel_kinb_cntr_B.t42) - ROPOD_4Wheel_kinb_cntr_B.t23) *
    -ROPOD_4Wheel_kinb_cntr_B.t35;
  ROPOD_4Wheel_kinb_cntr_B.dv0[44] = ((-ROPOD_4Wheel_kinb_cntr_B.t41 +
    ROPOD_4Wheel_kinb_cntr_B.t42) + ROPOD_4Wheel_kinb_cntr_B.t23) *
    ROPOD_4Wheel_kinb_cntr_B.t40;

  // Product: '<S2>/Product3' incorporates:
  //   SignalConversion: '<S2>/TmpSignal ConversionAtProduct3Inport2'

  for (i = 0; i < 15; i++) {
    ROPOD_4Wheel_kinb_cntr_B.Product3[i] = 0.0;
    ROPOD_4Wheel_kinb_cntr_B.Product3[i] += ROPOD_4Wheel_kinb_cntr_B.dv0[i] *
      ROPOD_4Wheel_kinb_cntr_B.DifferenceInputs2;
    ROPOD_4Wheel_kinb_cntr_B.Product3[i] += ROPOD_4Wheel_kinb_cntr_B.dv0[i + 15]
      * ROPOD_4Wheel_kinb_cntr_B.DifferenceInputs2_n;
    ROPOD_4Wheel_kinb_cntr_B.Product3[i] += ROPOD_4Wheel_kinb_cntr_B.dv0[i + 30]
      * ROPOD_4Wheel_kinb_cntr_B.DifferenceInputs2_g;
  }

  // End of Product: '<S2>/Product3'

  // Gain: '<S36>/sign_convention'
  ROPOD_4Wheel_kinb_cntr_B.setpoint2 =
    ROPOD_4Wheel_kinb_cntr_P.sign_convention_Gain *
    ROPOD_4Wheel_kinb_cntr_B.Product3[8];

  // Gain: '<S36>/sign_convention1'
  ROPOD_4Wheel_kinb_cntr_B.setpoint2_h =
    ROPOD_4Wheel_kinb_cntr_P.sign_convention1_Gain *
    ROPOD_4Wheel_kinb_cntr_B.Product3[10];

  // Gain: '<S36>/sign_convention2'
  ROPOD_4Wheel_kinb_cntr_B.setpoint2_j =
    ROPOD_4Wheel_kinb_cntr_P.sign_convention2_Gain *
    ROPOD_4Wheel_kinb_cntr_B.Product3[12];

  // Gain: '<S36>/sign_convention3'
  ROPOD_4Wheel_kinb_cntr_B.setpoint2_n =
    ROPOD_4Wheel_kinb_cntr_P.sign_convention3_Gain *
    ROPOD_4Wheel_kinb_cntr_B.Product3[14];

  // SignalConversion: '<S1>/TmpSignal ConversionAtSelector1Inport1'
  ROPOD_4Wheel_kinb_cntr_B.TmpSignalConversionAtSelect[0] =
    ROPOD_4Wheel_kinb_cntr_B.SFunction[5];
  ROPOD_4Wheel_kinb_cntr_B.TmpSignalConversionAtSelect[1] =
    ROPOD_4Wheel_kinb_cntr_B.SFunction[17];
  ROPOD_4Wheel_kinb_cntr_B.TmpSignalConversionAtSelect[2] =
    ROPOD_4Wheel_kinb_cntr_B.SFunction_n[5];
  ROPOD_4Wheel_kinb_cntr_B.TmpSignalConversionAtSelect[3] =
    ROPOD_4Wheel_kinb_cntr_B.SFunction_n[17];
  ROPOD_4Wheel_kinb_cntr_B.TmpSignalConversionAtSelect[4] =
    ROPOD_4Wheel_kinb_cntr_B.SFunction_m[5];
  ROPOD_4Wheel_kinb_cntr_B.TmpSignalConversionAtSelect[5] =
    ROPOD_4Wheel_kinb_cntr_B.SFunction_m[17];
  ROPOD_4Wheel_kinb_cntr_B.TmpSignalConversionAtSelect[6] =
    ROPOD_4Wheel_kinb_cntr_B.SFunction_k[5];
  ROPOD_4Wheel_kinb_cntr_B.TmpSignalConversionAtSelect[7] =
    ROPOD_4Wheel_kinb_cntr_B.SFunction_k[17];

  // BusAssignment: '<S1>/Bus Assignment' incorporates:
  //   Constant: '<S1>/Constant'
  //   Constant: '<S1>/Constant12'
  //   Constant: '<S1>/Constant3'
  //   Constant: '<S1>/Constant5'
  //   Selector: '<S1>/Selector'
  //   Selector: '<S1>/Selector1'
  //   Selector: '<S1>/Selector2'
  //   Selector: '<S1>/Selector3'
  //   Selector: '<S1>/Selector4'

  ROPOD_4Wheel_kinb_cntr_B.BusAssignment_h.Linear.X =
    ROPOD_4Wheel_kinb_cntr_B.Product3[(int32_T)
    ROPOD_4Wheel_kinb_cntr_P.Constant_Value_l + 6];
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment_h.Linear.Y =
    ROPOD_4Wheel_kinb_cntr_B.TmpSignalConversionAtSelect[(int32_T)
    ROPOD_4Wheel_kinb_cntr_P.Constant_Value_l - 1];
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment_h.Linear.Z =
    ROPOD_4Wheel_kinb_cntr_B.Add[(int32_T)
    ROPOD_4Wheel_kinb_cntr_P.Constant12_Value - 1];
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment_h.Angular.X =
    ROPOD_4Wheel_kinb_cntr_B.Product3[(int32_T)
    ROPOD_4Wheel_kinb_cntr_P.Constant3_Value + 6];
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment_h.Angular.Y =
    ROPOD_4Wheel_kinb_cntr_B.TmpSignalConversionAtSelect[(int32_T)
    ROPOD_4Wheel_kinb_cntr_P.Constant3_Value - 1];
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment_h.Angular.Z =
    ROPOD_4Wheel_kinb_cntr_P.Constant5_Value;

  // Outputs for Atomic SubSystem: '<S1>/Publish'
  // Start for MATLABSystem: '<S22>/SinkBlock'
  Pub_ROPOD_4Wheel_kinb_cntr_902.publish
    (&ROPOD_4Wheel_kinb_cntr_B.BusAssignment_h);

  // End of Outputs for SubSystem: '<S1>/Publish'

  // BusAssignment: '<S1>/Bus Assignment1' incorporates:
  //   Constant: '<S1>/Constant1'
  //   Constant: '<S1>/Constant13'
  //   Constant: '<S1>/Constant2'
  //   Constant: '<S1>/Constant4'
  //   Selector: '<S1>/Selector5'
  //   Selector: '<S1>/Selector6'
  //   Selector: '<S1>/Selector7'
  //   Selector: '<S1>/Selector8'
  //   Selector: '<S1>/Selector9'

  ROPOD_4Wheel_kinb_cntr_B.BusAssignment1.Linear.X =
    ROPOD_4Wheel_kinb_cntr_B.Product3[(int32_T)
    ROPOD_4Wheel_kinb_cntr_P.Constant1_Value_j + 6];
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment1.Linear.Y =
    ROPOD_4Wheel_kinb_cntr_B.TmpSignalConversionAtSelect[(int32_T)
    ROPOD_4Wheel_kinb_cntr_P.Constant1_Value_j - 1];
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment1.Linear.Z =
    ROPOD_4Wheel_kinb_cntr_B.Add[(int32_T)
    ROPOD_4Wheel_kinb_cntr_P.Constant13_Value - 1];
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment1.Angular.X =
    ROPOD_4Wheel_kinb_cntr_B.Product3[(int32_T)
    ROPOD_4Wheel_kinb_cntr_P.Constant2_Value_n + 6];
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment1.Angular.Y =
    ROPOD_4Wheel_kinb_cntr_B.TmpSignalConversionAtSelect[(int32_T)
    ROPOD_4Wheel_kinb_cntr_P.Constant2_Value_n - 1];
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment1.Angular.Z =
    ROPOD_4Wheel_kinb_cntr_P.Constant4_Value;

  // Outputs for Atomic SubSystem: '<S1>/Publish1'
  // Start for MATLABSystem: '<S23>/SinkBlock'
  Pub_ROPOD_4Wheel_kinb_cntr_959.publish
    (&ROPOD_4Wheel_kinb_cntr_B.BusAssignment1);

  // End of Outputs for SubSystem: '<S1>/Publish1'

  // BusAssignment: '<S1>/Bus Assignment2' incorporates:
  //   Constant: '<S1>/Constant14'
  //   Constant: '<S1>/Constant6'
  //   Constant: '<S1>/Constant7'
  //   Constant: '<S1>/Constant8'
  //   Selector: '<S1>/Selector10'
  //   Selector: '<S1>/Selector11'
  //   Selector: '<S1>/Selector12'
  //   Selector: '<S1>/Selector13'
  //   Selector: '<S1>/Selector14'

  ROPOD_4Wheel_kinb_cntr_B.BusAssignment2.Linear.X =
    ROPOD_4Wheel_kinb_cntr_B.Product3[(int32_T)
    ROPOD_4Wheel_kinb_cntr_P.Constant6_Value_j + 6];
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment2.Linear.Y =
    ROPOD_4Wheel_kinb_cntr_B.TmpSignalConversionAtSelect[(int32_T)
    ROPOD_4Wheel_kinb_cntr_P.Constant6_Value_j - 1];
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment2.Linear.Z =
    ROPOD_4Wheel_kinb_cntr_B.Add[(int32_T)
    ROPOD_4Wheel_kinb_cntr_P.Constant14_Value - 1];
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment2.Angular.X =
    ROPOD_4Wheel_kinb_cntr_B.Product3[(int32_T)
    ROPOD_4Wheel_kinb_cntr_P.Constant7_Value_p + 6];
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment2.Angular.Y =
    ROPOD_4Wheel_kinb_cntr_B.TmpSignalConversionAtSelect[(int32_T)
    ROPOD_4Wheel_kinb_cntr_P.Constant7_Value_p - 1];
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment2.Angular.Z =
    ROPOD_4Wheel_kinb_cntr_P.Constant8_Value_c;

  // Outputs for Atomic SubSystem: '<S1>/Publish2'
  // Start for MATLABSystem: '<S24>/SinkBlock'
  Pub_ROPOD_4Wheel_kinb_cntr_983.publish
    (&ROPOD_4Wheel_kinb_cntr_B.BusAssignment2);

  // End of Outputs for SubSystem: '<S1>/Publish2'

  // BusAssignment: '<S1>/Bus Assignment3' incorporates:
  //   Constant: '<S1>/Constant10'
  //   Constant: '<S1>/Constant11'
  //   Constant: '<S1>/Constant15'
  //   Constant: '<S1>/Constant9'
  //   Selector: '<S1>/Selector15'
  //   Selector: '<S1>/Selector16'
  //   Selector: '<S1>/Selector17'
  //   Selector: '<S1>/Selector18'
  //   Selector: '<S1>/Selector19'

  ROPOD_4Wheel_kinb_cntr_B.BusAssignment3.Linear.X =
    ROPOD_4Wheel_kinb_cntr_B.Product3[(int32_T)
    ROPOD_4Wheel_kinb_cntr_P.Constant9_Value_b + 6];
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment3.Linear.Y =
    ROPOD_4Wheel_kinb_cntr_B.TmpSignalConversionAtSelect[(int32_T)
    ROPOD_4Wheel_kinb_cntr_P.Constant9_Value_b - 1];
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment3.Linear.Z =
    ROPOD_4Wheel_kinb_cntr_B.Add[(int32_T)
    ROPOD_4Wheel_kinb_cntr_P.Constant15_Value - 1];
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment3.Angular.X =
    ROPOD_4Wheel_kinb_cntr_B.Product3[(int32_T)
    ROPOD_4Wheel_kinb_cntr_P.Constant10_Value_c + 6];
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment3.Angular.Y =
    ROPOD_4Wheel_kinb_cntr_B.TmpSignalConversionAtSelect[(int32_T)
    ROPOD_4Wheel_kinb_cntr_P.Constant10_Value_c - 1];
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment3.Angular.Z =
    ROPOD_4Wheel_kinb_cntr_P.Constant11_Value;

  // Outputs for Atomic SubSystem: '<S1>/Publish3'
  // Start for MATLABSystem: '<S25>/SinkBlock'
  Pub_ROPOD_4Wheel_kinb_cntr_994.publish
    (&ROPOD_4Wheel_kinb_cntr_B.BusAssignment3);

  // End of Outputs for SubSystem: '<S1>/Publish3'

  // BusAssignment: '<S1>/Bus Assignment5'
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment5.Linear.X =
    ROPOD_4Wheel_kinb_cntr_B.SFunction[11];
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment5.Linear.Y =
    ROPOD_4Wheel_kinb_cntr_B.SFunction[6];
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment5.Linear.Z =
    ROPOD_4Wheel_kinb_cntr_B.SFunction[7];
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment5.Angular.X =
    ROPOD_4Wheel_kinb_cntr_B.SFunction[23];
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment5.Angular.Y =
    ROPOD_4Wheel_kinb_cntr_B.SFunction[18];
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment5.Angular.Z =
    ROPOD_4Wheel_kinb_cntr_B.SFunction[19];

  // Outputs for Atomic SubSystem: '<S1>/Publish4'
  // Start for MATLABSystem: '<S26>/SinkBlock'
  Pub_ROPOD_4Wheel_kinb_cntr_1179.publish
    (&ROPOD_4Wheel_kinb_cntr_B.BusAssignment5);

  // End of Outputs for SubSystem: '<S1>/Publish4'

  // BusAssignment: '<S1>/Bus Assignment4'
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment4.Linear.X =
    ROPOD_4Wheel_kinb_cntr_B.SFunction_n[11];
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment4.Linear.Y =
    ROPOD_4Wheel_kinb_cntr_B.SFunction_n[6];
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment4.Linear.Z =
    ROPOD_4Wheel_kinb_cntr_B.SFunction_n[7];
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment4.Angular.X =
    ROPOD_4Wheel_kinb_cntr_B.SFunction_n[23];
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment4.Angular.Y =
    ROPOD_4Wheel_kinb_cntr_B.SFunction_n[18];
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment4.Angular.Z =
    ROPOD_4Wheel_kinb_cntr_B.SFunction_n[19];

  // Outputs for Atomic SubSystem: '<S1>/Publish5'
  // Start for MATLABSystem: '<S27>/SinkBlock'
  Pub_ROPOD_4Wheel_kinb_cntr_1185.publish
    (&ROPOD_4Wheel_kinb_cntr_B.BusAssignment4);

  // End of Outputs for SubSystem: '<S1>/Publish5'

  // BusAssignment: '<S1>/Bus Assignment6'
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment6.Linear.X =
    ROPOD_4Wheel_kinb_cntr_B.SFunction_m[11];
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment6.Linear.Y =
    ROPOD_4Wheel_kinb_cntr_B.SFunction_m[6];
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment6.Linear.Z =
    ROPOD_4Wheel_kinb_cntr_B.SFunction_m[7];
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment6.Angular.X =
    ROPOD_4Wheel_kinb_cntr_B.SFunction_m[23];
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment6.Angular.Y =
    ROPOD_4Wheel_kinb_cntr_B.SFunction_m[18];
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment6.Angular.Z =
    ROPOD_4Wheel_kinb_cntr_B.SFunction_m[19];

  // Outputs for Atomic SubSystem: '<S1>/Publish6'
  // Start for MATLABSystem: '<S28>/SinkBlock'
  Pub_ROPOD_4Wheel_kinb_cntr_1190.publish
    (&ROPOD_4Wheel_kinb_cntr_B.BusAssignment6);

  // End of Outputs for SubSystem: '<S1>/Publish6'

  // BusAssignment: '<S1>/Bus Assignment7'
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment7.Linear.X =
    ROPOD_4Wheel_kinb_cntr_B.SFunction_k[11];
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment7.Linear.Y =
    ROPOD_4Wheel_kinb_cntr_B.SFunction_k[6];
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment7.Linear.Z =
    ROPOD_4Wheel_kinb_cntr_B.SFunction_k[7];
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment7.Angular.X =
    ROPOD_4Wheel_kinb_cntr_B.SFunction_k[23];
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment7.Angular.Y =
    ROPOD_4Wheel_kinb_cntr_B.SFunction_k[18];
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment7.Angular.Z =
    ROPOD_4Wheel_kinb_cntr_B.SFunction_k[19];

  // Outputs for Atomic SubSystem: '<S1>/Publish7'
  // Start for MATLABSystem: '<S29>/SinkBlock'
  Pub_ROPOD_4Wheel_kinb_cntr_1206.publish
    (&ROPOD_4Wheel_kinb_cntr_B.BusAssignment7);

  // End of Outputs for SubSystem: '<S1>/Publish7'

  // MATLABSystem: '<S4>/Coordinate Transformation Conversion' incorporates:
  //   Constant: '<S4>/Constant1'

  ROPOD_4Wheel_kinb_cntr_B.TmpSignalConversionAtCoordi[0] = sin
    (ROPOD_4Wheel_kinb_cntr_P.Constant1_Value_gr / 2.0);

  // Start for MATLABSystem: '<S4>/Coordinate Transformation Conversion' incorporates:
  //   Constant: '<S4>/Constant1'

  ROPOD_4Wheel_kinb_cntr_B.sampletime_a = cos
    (ROPOD_4Wheel_kinb_cntr_P.Constant1_Value_gr / 2.0);

  // MATLABSystem: '<S4>/Coordinate Transformation Conversion' incorporates:
  //   Constant: '<S4>/Constant2'

  ROPOD_4Wheel_kinb_cntr_B.TmpSignalConversionAtCoordi[1] = sin
    (ROPOD_4Wheel_kinb_cntr_P.Constant2_Value_g / 2.0);

  // Start for MATLABSystem: '<S4>/Coordinate Transformation Conversion' incorporates:
  //   Constant: '<S4>/Constant2'
  //   DiscreteIntegrator: '<S3>/Discrete-Time Integrator'
  //   SignalConversion: '<S4>/TmpSignal ConversionAtCoordinate Transformation ConversionInport1'

  ROPOD_4Wheel_kinb_cntr_B.Yk1_l = cos
    (ROPOD_4Wheel_kinb_cntr_P.Constant2_Value_g / 2.0);
  ROPOD_4Wheel_kinb_cntr_B.sampletime = cos
    (ROPOD_4Wheel_kinb_cntr_DW.DiscreteTimeIntegrator_DSTATE[2] / 2.0);
  ROPOD_4Wheel_kinb_cntr_B.Switch2_a = sin
    (ROPOD_4Wheel_kinb_cntr_DW.DiscreteTimeIntegrator_DSTATE[2] / 2.0);

  // MATLABSystem: '<S4>/Coordinate Transformation Conversion'
  ROPOD_4Wheel_kinb_cntr_B.TmpSignalConversionAtCoordi[2] =
    ROPOD_4Wheel_kinb_cntr_B.Switch2_a;

  // Start for MATLABSystem: '<S4>/Coordinate Transformation Conversion'
  ROPOD_4Wheel_kinb_cntr_B.Switch = ROPOD_4Wheel_kinb_cntr_B.sampletime_a *
    ROPOD_4Wheel_kinb_cntr_B.Yk1_l;
  ROPOD_4Wheel_kinb_cntr_B.Yk1 =
    ROPOD_4Wheel_kinb_cntr_B.TmpSignalConversionAtCoordi[0] *
    ROPOD_4Wheel_kinb_cntr_B.TmpSignalConversionAtCoordi[1];
  ROPOD_4Wheel_kinb_cntr_B.sampletime_a *=
    ROPOD_4Wheel_kinb_cntr_B.TmpSignalConversionAtCoordi[1];

  // MATLABSystem: '<S4>/Coordinate Transformation Conversion'
  ROPOD_4Wheel_kinb_cntr_B.Switch2 =
    ROPOD_4Wheel_kinb_cntr_B.TmpSignalConversionAtCoordi[0] *
    ROPOD_4Wheel_kinb_cntr_B.Yk1_l * ROPOD_4Wheel_kinb_cntr_B.sampletime +
    ROPOD_4Wheel_kinb_cntr_B.sampletime_a * ROPOD_4Wheel_kinb_cntr_B.Switch2_a;
  ROPOD_4Wheel_kinb_cntr_B.sampletime_o =
    -ROPOD_4Wheel_kinb_cntr_B.TmpSignalConversionAtCoordi[0] *
    ROPOD_4Wheel_kinb_cntr_B.Yk1_l * ROPOD_4Wheel_kinb_cntr_B.Switch2_a +
    ROPOD_4Wheel_kinb_cntr_B.sampletime_a * ROPOD_4Wheel_kinb_cntr_B.sampletime;

  // MATLAB Function: '<S3>/Jqwl_matrix' incorporates:
  //   SignalConversion: '<S31>/TmpSignal ConversionAt SFunction Inport1'

  ROPOD_4Wheel_kinb_cntr_B.t2 = 1.0 / ROPOD_4Wheel_kinb_cntr_B.GetParameter2_o1;
  ROPOD_4Wheel_kinb_cntr_B.Switch1 = ROPOD_4Wheel_kinb_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_kinb_cntr_B.t3_tmp;
  ROPOD_4Wheel_kinb_cntr_B.Switch2_l = ROPOD_4Wheel_kinb_cntr_B.GetParameter1_o1
    * ROPOD_4Wheel_kinb_cntr_B.t4_tmp * 2.0;
  ROPOD_4Wheel_kinb_cntr_B.Switch2_k = ROPOD_4Wheel_kinb_cntr_B.GetParameter2_o1
    * ROPOD_4Wheel_kinb_cntr_B.t5_tmp;
  ROPOD_4Wheel_kinb_cntr_B.t10 = ROPOD_4Wheel_kinb_cntr_B.GetParameter1_o1 *
    t6_tmp * 2.0;
  ROPOD_4Wheel_kinb_cntr_B.t23 = ROPOD_4Wheel_kinb_cntr_B.GetParameter2_o1 *
    t7_tmp;
  ROPOD_4Wheel_kinb_cntr_B.t14 = ROPOD_4Wheel_kinb_cntr_B.GetParameter1_o1 *
    t8_tmp * 2.0;
  ROPOD_4Wheel_kinb_cntr_B.t16 = ROPOD_4Wheel_kinb_cntr_B.GetParameter2_o1 *
    t9_tmp;
  ROPOD_4Wheel_kinb_cntr_B.t18 = ROPOD_4Wheel_kinb_cntr_B.GetParameter1_o1 *
    t10_tmp * 2.0;
  ROPOD_4Wheel_kinb_cntr_B.t19 = ROPOD_4Wheel_kinb_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_kinb_cntr_B.t4_tmp;
  ROPOD_4Wheel_kinb_cntr_B.t25 = ROPOD_4Wheel_kinb_cntr_B.GetParameter2_o1 *
    t6_tmp;
  ROPOD_4Wheel_kinb_cntr_B.t30 = ROPOD_4Wheel_kinb_cntr_B.GetParameter2_o1 *
    t8_tmp;
  ROPOD_4Wheel_kinb_cntr_B.t22 = ROPOD_4Wheel_kinb_cntr_B.GetParameter2_o1 *
    t10_tmp;
  ROPOD_4Wheel_kinb_cntr_B.t26 = 1.0 /
    (ROPOD_4Wheel_kinb_cntr_B.GetParameter3_o1 *
     ROPOD_4Wheel_kinb_cntr_B.GetParameter3_o1 +
     ROPOD_4Wheel_kinb_cntr_B.GetParameter4_o1 *
     ROPOD_4Wheel_kinb_cntr_B.GetParameter4_o1);
  ROPOD_4Wheel_kinb_cntr_B.t27 = ROPOD_4Wheel_kinb_cntr_B.GetParameter4_o1 *
    ROPOD_4Wheel_kinb_cntr_B.GetParameter2_o1 * ROPOD_4Wheel_kinb_cntr_B.t3_tmp;
  ROPOD_4Wheel_kinb_cntr_B.t31 = ROPOD_4Wheel_kinb_cntr_B.GetParameter3_o1 *
    ROPOD_4Wheel_kinb_cntr_B.GetParameter1_o1 * ROPOD_4Wheel_kinb_cntr_B.t3_tmp *
    2.0;
  ROPOD_4Wheel_kinb_cntr_B.t32 = ROPOD_4Wheel_kinb_cntr_B.GetParameter4_o1 *
    ROPOD_4Wheel_kinb_cntr_B.GetParameter1_o1 * ROPOD_4Wheel_kinb_cntr_B.t4_tmp *
    2.0;
  ROPOD_4Wheel_kinb_cntr_B.t33 = 1.0 /
    (ROPOD_4Wheel_kinb_cntr_B.GetParameter5_o1 *
     ROPOD_4Wheel_kinb_cntr_B.GetParameter5_o1 +
     ROPOD_4Wheel_kinb_cntr_B.GetParameter6_o1 *
     ROPOD_4Wheel_kinb_cntr_B.GetParameter6_o1);
  ROPOD_4Wheel_kinb_cntr_B.t34 = ROPOD_4Wheel_kinb_cntr_B.GetParameter6_o1 *
    ROPOD_4Wheel_kinb_cntr_B.GetParameter2_o1 * ROPOD_4Wheel_kinb_cntr_B.t5_tmp;
  ROPOD_4Wheel_kinb_cntr_B.t35 = ROPOD_4Wheel_kinb_cntr_B.GetParameter5_o1 *
    ROPOD_4Wheel_kinb_cntr_B.GetParameter1_o1 * ROPOD_4Wheel_kinb_cntr_B.t5_tmp *
    2.0;
  ROPOD_4Wheel_kinb_cntr_B.t38 = ROPOD_4Wheel_kinb_cntr_B.GetParameter6_o1 *
    ROPOD_4Wheel_kinb_cntr_B.GetParameter1_o1 * t6_tmp * 2.0;
  ROPOD_4Wheel_kinb_cntr_B.t40 = 1.0 /
    (ROPOD_4Wheel_kinb_cntr_B.GetParameter7_o1 *
     ROPOD_4Wheel_kinb_cntr_B.GetParameter7_o1 +
     ROPOD_4Wheel_kinb_cntr_B.GetParameter8_o1 *
     ROPOD_4Wheel_kinb_cntr_B.GetParameter8_o1);
  ROPOD_4Wheel_kinb_cntr_B.t41 = ROPOD_4Wheel_kinb_cntr_B.GetParameter8_o1 *
    ROPOD_4Wheel_kinb_cntr_B.GetParameter2_o1 * t7_tmp;
  ROPOD_4Wheel_kinb_cntr_B.t42 = ROPOD_4Wheel_kinb_cntr_B.GetParameter7_o1 *
    ROPOD_4Wheel_kinb_cntr_B.GetParameter1_o1 * t7_tmp * 2.0;
  ROPOD_4Wheel_kinb_cntr_B.t39 = ROPOD_4Wheel_kinb_cntr_B.GetParameter8_o1 *
    ROPOD_4Wheel_kinb_cntr_B.GetParameter1_o1 * t8_tmp * 2.0;
  ROPOD_4Wheel_kinb_cntr_B.Yk1_lf = 1.0 /
    (ROPOD_4Wheel_kinb_cntr_B.GetParameter9_o1 *
     ROPOD_4Wheel_kinb_cntr_B.GetParameter9_o1 +
     ROPOD_4Wheel_kinb_cntr_B.GetParameter10_o1 *
     ROPOD_4Wheel_kinb_cntr_B.GetParameter10_o1);
  ROPOD_4Wheel_kinb_cntr_B.sampletime_a =
    ROPOD_4Wheel_kinb_cntr_B.GetParameter10_o1 *
    ROPOD_4Wheel_kinb_cntr_B.GetParameter2_o1 * t9_tmp;
  ROPOD_4Wheel_kinb_cntr_B.Switch2_km =
    ROPOD_4Wheel_kinb_cntr_B.GetParameter9_o1 *
    ROPOD_4Wheel_kinb_cntr_B.GetParameter1_o1 * t9_tmp * 2.0;
  ROPOD_4Wheel_kinb_cntr_B.Yk1_l = ROPOD_4Wheel_kinb_cntr_B.GetParameter10_o1 *
    ROPOD_4Wheel_kinb_cntr_B.GetParameter1_o1 * t10_tmp * 2.0;
  ROPOD_4Wheel_kinb_cntr_B.t11 = ROPOD_4Wheel_kinb_cntr_B.GetParameter_o1 *
    ROPOD_4Wheel_kinb_cntr_B.t2;
  ROPOD_4Wheel_kinb_cntr_B.rtb_TmpSignalConversionAtSFun_m[0] =
    ROPOD_4Wheel_kinb_cntr_B.t11 * (ROPOD_4Wheel_kinb_cntr_B.Switch1 +
    ROPOD_4Wheel_kinb_cntr_B.Switch2_l) * 0.125;
  ROPOD_4Wheel_kinb_cntr_B.t3_tmp = ROPOD_4Wheel_kinb_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_kinb_cntr_B.t3_tmp * 2.0;
  ROPOD_4Wheel_kinb_cntr_B.rtb_TmpSignalConversionAtSFun_m[1] =
    (ROPOD_4Wheel_kinb_cntr_B.t19 - ROPOD_4Wheel_kinb_cntr_B.t3_tmp) *
    ROPOD_4Wheel_kinb_cntr_B.t11 * 0.125;
  ROPOD_4Wheel_kinb_cntr_B.t4_tmp *= ROPOD_4Wheel_kinb_cntr_B.GetParameter3_o1 *
    ROPOD_4Wheel_kinb_cntr_B.GetParameter2_o1;
  ROPOD_4Wheel_kinb_cntr_B.rtb_TmpSignalConversionAtSFun_m[2] =
    (((ROPOD_4Wheel_kinb_cntr_B.t27 + ROPOD_4Wheel_kinb_cntr_B.t31) +
      ROPOD_4Wheel_kinb_cntr_B.t32) - ROPOD_4Wheel_kinb_cntr_B.t4_tmp) *
    (ROPOD_4Wheel_kinb_cntr_B.t11 * ROPOD_4Wheel_kinb_cntr_B.t26) * -0.125;
  ROPOD_4Wheel_kinb_cntr_B.t11 = ROPOD_4Wheel_kinb_cntr_B.GetParameter11_o1 *
    ROPOD_4Wheel_kinb_cntr_B.t2;
  ROPOD_4Wheel_kinb_cntr_B.rtb_TmpSignalConversionAtSFun_m[3] =
    ROPOD_4Wheel_kinb_cntr_B.t11 * (ROPOD_4Wheel_kinb_cntr_B.Switch1 -
    ROPOD_4Wheel_kinb_cntr_B.Switch2_l) * 0.125;
  ROPOD_4Wheel_kinb_cntr_B.rtb_TmpSignalConversionAtSFun_m[4] =
    (ROPOD_4Wheel_kinb_cntr_B.t3_tmp + ROPOD_4Wheel_kinb_cntr_B.t19) *
    ROPOD_4Wheel_kinb_cntr_B.t11 * 0.125;
  ROPOD_4Wheel_kinb_cntr_B.rtb_TmpSignalConversionAtSFun_m[5] =
    (((-ROPOD_4Wheel_kinb_cntr_B.t27 + ROPOD_4Wheel_kinb_cntr_B.t31) +
      ROPOD_4Wheel_kinb_cntr_B.t32) + ROPOD_4Wheel_kinb_cntr_B.t4_tmp) *
    (ROPOD_4Wheel_kinb_cntr_B.t11 * ROPOD_4Wheel_kinb_cntr_B.t26) * 0.125;
  ROPOD_4Wheel_kinb_cntr_B.t11 = ROPOD_4Wheel_kinb_cntr_B.GetParameter12_o1 *
    ROPOD_4Wheel_kinb_cntr_B.t2;
  ROPOD_4Wheel_kinb_cntr_B.rtb_TmpSignalConversionAtSFun_m[6] =
    ROPOD_4Wheel_kinb_cntr_B.t11 * (ROPOD_4Wheel_kinb_cntr_B.Switch2_k +
    ROPOD_4Wheel_kinb_cntr_B.t10) * 0.125;
  ROPOD_4Wheel_kinb_cntr_B.t3_tmp = ROPOD_4Wheel_kinb_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_kinb_cntr_B.t5_tmp * 2.0;
  ROPOD_4Wheel_kinb_cntr_B.rtb_TmpSignalConversionAtSFun_m[7] =
    (ROPOD_4Wheel_kinb_cntr_B.t25 - ROPOD_4Wheel_kinb_cntr_B.t3_tmp) *
    ROPOD_4Wheel_kinb_cntr_B.t11 * 0.125;
  ROPOD_4Wheel_kinb_cntr_B.t4_tmp = ROPOD_4Wheel_kinb_cntr_B.GetParameter5_o1 *
    ROPOD_4Wheel_kinb_cntr_B.GetParameter2_o1 * t6_tmp;
  ROPOD_4Wheel_kinb_cntr_B.rtb_TmpSignalConversionAtSFun_m[8] =
    (((ROPOD_4Wheel_kinb_cntr_B.t34 + ROPOD_4Wheel_kinb_cntr_B.t35) +
      ROPOD_4Wheel_kinb_cntr_B.t38) - ROPOD_4Wheel_kinb_cntr_B.t4_tmp) *
    (ROPOD_4Wheel_kinb_cntr_B.t11 * ROPOD_4Wheel_kinb_cntr_B.t33) * -0.125;
  ROPOD_4Wheel_kinb_cntr_B.t11 = ROPOD_4Wheel_kinb_cntr_B.GetParameter13_o1 *
    ROPOD_4Wheel_kinb_cntr_B.t2;
  ROPOD_4Wheel_kinb_cntr_B.rtb_TmpSignalConversionAtSFun_m[9] =
    ROPOD_4Wheel_kinb_cntr_B.t11 * (ROPOD_4Wheel_kinb_cntr_B.Switch2_k -
    ROPOD_4Wheel_kinb_cntr_B.t10) * 0.125;
  ROPOD_4Wheel_kinb_cntr_B.rtb_TmpSignalConversionAtSFun_m[10] =
    (ROPOD_4Wheel_kinb_cntr_B.t3_tmp + ROPOD_4Wheel_kinb_cntr_B.t25) *
    ROPOD_4Wheel_kinb_cntr_B.t11 * 0.125;
  ROPOD_4Wheel_kinb_cntr_B.rtb_TmpSignalConversionAtSFun_m[11] =
    (((-ROPOD_4Wheel_kinb_cntr_B.t34 + ROPOD_4Wheel_kinb_cntr_B.t35) +
      ROPOD_4Wheel_kinb_cntr_B.t38) + ROPOD_4Wheel_kinb_cntr_B.t4_tmp) *
    (ROPOD_4Wheel_kinb_cntr_B.t11 * ROPOD_4Wheel_kinb_cntr_B.t33) * 0.125;
  ROPOD_4Wheel_kinb_cntr_B.t11 = ROPOD_4Wheel_kinb_cntr_B.GetParameter14_o1 *
    ROPOD_4Wheel_kinb_cntr_B.t2;
  ROPOD_4Wheel_kinb_cntr_B.rtb_TmpSignalConversionAtSFun_m[12] =
    ROPOD_4Wheel_kinb_cntr_B.t11 * (ROPOD_4Wheel_kinb_cntr_B.t23 +
    ROPOD_4Wheel_kinb_cntr_B.t14) * 0.125;
  ROPOD_4Wheel_kinb_cntr_B.t3_tmp = ROPOD_4Wheel_kinb_cntr_B.GetParameter1_o1 *
    t7_tmp * 2.0;
  ROPOD_4Wheel_kinb_cntr_B.rtb_TmpSignalConversionAtSFun_m[13] =
    (ROPOD_4Wheel_kinb_cntr_B.t30 - ROPOD_4Wheel_kinb_cntr_B.t3_tmp) *
    ROPOD_4Wheel_kinb_cntr_B.t11 * 0.125;
  ROPOD_4Wheel_kinb_cntr_B.t4_tmp = ROPOD_4Wheel_kinb_cntr_B.GetParameter7_o1 *
    ROPOD_4Wheel_kinb_cntr_B.GetParameter2_o1 * t8_tmp;
  ROPOD_4Wheel_kinb_cntr_B.rtb_TmpSignalConversionAtSFun_m[14] =
    (((ROPOD_4Wheel_kinb_cntr_B.t41 + ROPOD_4Wheel_kinb_cntr_B.t42) +
      ROPOD_4Wheel_kinb_cntr_B.t39) - ROPOD_4Wheel_kinb_cntr_B.t4_tmp) *
    (ROPOD_4Wheel_kinb_cntr_B.t11 * ROPOD_4Wheel_kinb_cntr_B.t40) * -0.125;
  ROPOD_4Wheel_kinb_cntr_B.t11 = ROPOD_4Wheel_kinb_cntr_B.GetParameter15_o1 *
    ROPOD_4Wheel_kinb_cntr_B.t2;
  ROPOD_4Wheel_kinb_cntr_B.rtb_TmpSignalConversionAtSFun_m[15] =
    ROPOD_4Wheel_kinb_cntr_B.t11 * (ROPOD_4Wheel_kinb_cntr_B.t23 -
    ROPOD_4Wheel_kinb_cntr_B.t14) * 0.125;
  ROPOD_4Wheel_kinb_cntr_B.rtb_TmpSignalConversionAtSFun_m[16] =
    (ROPOD_4Wheel_kinb_cntr_B.t3_tmp + ROPOD_4Wheel_kinb_cntr_B.t30) *
    ROPOD_4Wheel_kinb_cntr_B.t11 * 0.125;
  ROPOD_4Wheel_kinb_cntr_B.rtb_TmpSignalConversionAtSFun_m[17] =
    (((-ROPOD_4Wheel_kinb_cntr_B.t41 + ROPOD_4Wheel_kinb_cntr_B.t42) +
      ROPOD_4Wheel_kinb_cntr_B.t39) + ROPOD_4Wheel_kinb_cntr_B.t4_tmp) *
    (ROPOD_4Wheel_kinb_cntr_B.t11 * ROPOD_4Wheel_kinb_cntr_B.t40) * 0.125;
  ROPOD_4Wheel_kinb_cntr_B.t11 = ROPOD_4Wheel_kinb_cntr_B.GetParameter16_o1 *
    ROPOD_4Wheel_kinb_cntr_B.t2;
  ROPOD_4Wheel_kinb_cntr_B.rtb_TmpSignalConversionAtSFun_m[18] =
    ROPOD_4Wheel_kinb_cntr_B.t11 * (ROPOD_4Wheel_kinb_cntr_B.t16 +
    ROPOD_4Wheel_kinb_cntr_B.t18) * 0.125;
  ROPOD_4Wheel_kinb_cntr_B.t3_tmp = ROPOD_4Wheel_kinb_cntr_B.GetParameter1_o1 *
    t9_tmp * 2.0;
  ROPOD_4Wheel_kinb_cntr_B.rtb_TmpSignalConversionAtSFun_m[19] =
    (ROPOD_4Wheel_kinb_cntr_B.t22 - ROPOD_4Wheel_kinb_cntr_B.t3_tmp) *
    ROPOD_4Wheel_kinb_cntr_B.t11 * 0.125;
  ROPOD_4Wheel_kinb_cntr_B.t4_tmp = ROPOD_4Wheel_kinb_cntr_B.GetParameter9_o1 *
    ROPOD_4Wheel_kinb_cntr_B.GetParameter2_o1 * t10_tmp;
  ROPOD_4Wheel_kinb_cntr_B.rtb_TmpSignalConversionAtSFun_m[20] =
    (((ROPOD_4Wheel_kinb_cntr_B.sampletime_a +
       ROPOD_4Wheel_kinb_cntr_B.Switch2_km) + ROPOD_4Wheel_kinb_cntr_B.Yk1_l) -
     ROPOD_4Wheel_kinb_cntr_B.t4_tmp) * (ROPOD_4Wheel_kinb_cntr_B.t11 *
    ROPOD_4Wheel_kinb_cntr_B.Yk1_lf) * -0.125;
  ROPOD_4Wheel_kinb_cntr_B.t11 = ROPOD_4Wheel_kinb_cntr_B.GetParameter17_o1 *
    ROPOD_4Wheel_kinb_cntr_B.t2;
  ROPOD_4Wheel_kinb_cntr_B.rtb_TmpSignalConversionAtSFun_m[21] =
    ROPOD_4Wheel_kinb_cntr_B.t11 * (ROPOD_4Wheel_kinb_cntr_B.t16 -
    ROPOD_4Wheel_kinb_cntr_B.t18) * 0.125;
  ROPOD_4Wheel_kinb_cntr_B.rtb_TmpSignalConversionAtSFun_m[22] =
    (ROPOD_4Wheel_kinb_cntr_B.t3_tmp + ROPOD_4Wheel_kinb_cntr_B.t22) *
    ROPOD_4Wheel_kinb_cntr_B.t11 * 0.125;
  ROPOD_4Wheel_kinb_cntr_B.rtb_TmpSignalConversionAtSFun_m[23] =
    (((-ROPOD_4Wheel_kinb_cntr_B.sampletime_a +
       ROPOD_4Wheel_kinb_cntr_B.Switch2_km) + ROPOD_4Wheel_kinb_cntr_B.Yk1_l) +
     ROPOD_4Wheel_kinb_cntr_B.t4_tmp) * (ROPOD_4Wheel_kinb_cntr_B.t11 *
    ROPOD_4Wheel_kinb_cntr_B.Yk1_lf) * 0.125;

  // Product: '<S3>/Product3'
  for (i = 0; i < 3; i++) {
    ROPOD_4Wheel_kinb_cntr_B.TmpSignalConversionAtCoordi[i] = 0.0;
    for (i_0 = 0; i_0 < 8; i_0++) {
      ROPOD_4Wheel_kinb_cntr_B.TmpSignalConversionAtCoordi[i] +=
        ROPOD_4Wheel_kinb_cntr_B.rtb_TmpSignalConversionAtSFun_m[3 * i_0 + i] *
        ROPOD_4Wheel_kinb_cntr_B.TmpSignalConversionAtSelect[i_0];
    }
  }

  // End of Product: '<S3>/Product3'

  // BusAssignment: '<S4>/Bus Assignment' incorporates:
  //   Constant: '<S33>/Constant'
  //   Constant: '<S4>/Constant'
  //   Constant: '<S4>/Constant3'
  //   Constant: '<S4>/Constant4'
  //   Constant: '<S4>/Constant5'
  //   DiscreteIntegrator: '<S3>/Discrete-Time Integrator'
  //   MATLABSystem: '<S4>/Coordinate Transformation Conversion'
  //   MATLABSystem: '<S4>/Coordinate Transformation Conversion'

  ROPOD_4Wheel_kinb_cntr_B.BusAssignment =
    ROPOD_4Wheel_kinb_cntr_P.Constant_Value;
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment.Pose.Pose.Position.X =
    ROPOD_4Wheel_kinb_cntr_DW.DiscreteTimeIntegrator_DSTATE[0];
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment.Pose.Pose.Position.Y =
    ROPOD_4Wheel_kinb_cntr_DW.DiscreteTimeIntegrator_DSTATE[1];
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment.Pose.Pose.Position.Z =
    ROPOD_4Wheel_kinb_cntr_P.Constant_Value_e;
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment.Pose.Pose.Orientation.X =
    ROPOD_4Wheel_kinb_cntr_B.Switch * ROPOD_4Wheel_kinb_cntr_B.sampletime -
    ROPOD_4Wheel_kinb_cntr_B.Yk1 * ROPOD_4Wheel_kinb_cntr_B.Switch2_a;
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment.Pose.Pose.Orientation.Y =
    ROPOD_4Wheel_kinb_cntr_B.Switch2;
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment.Pose.Pose.Orientation.Z =
    ROPOD_4Wheel_kinb_cntr_B.sampletime_o;
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment.Pose.Pose.Orientation.W =
    ROPOD_4Wheel_kinb_cntr_B.Switch * ROPOD_4Wheel_kinb_cntr_B.Switch2_a +
    ROPOD_4Wheel_kinb_cntr_B.Yk1 * ROPOD_4Wheel_kinb_cntr_B.sampletime;
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment.Twist.Twist.Linear.X =
    ROPOD_4Wheel_kinb_cntr_B.TmpSignalConversionAtCoordi[0];
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment.Twist.Twist.Linear.Y =
    ROPOD_4Wheel_kinb_cntr_B.TmpSignalConversionAtCoordi[1];
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment.Twist.Twist.Linear.Z =
    ROPOD_4Wheel_kinb_cntr_P.Constant3_Value_g;
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment.Twist.Twist.Angular.X =
    ROPOD_4Wheel_kinb_cntr_P.Constant4_Value_l;
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment.Twist.Twist.Angular.Y =
    ROPOD_4Wheel_kinb_cntr_P.Constant5_Value_e;
  ROPOD_4Wheel_kinb_cntr_B.BusAssignment.Twist.Twist.Angular.Z =
    ROPOD_4Wheel_kinb_cntr_B.TmpSignalConversionAtCoordi[2];

  // RateTransition: '<S4>/Rate Transition'
  if (ROPOD_4Wheel_kinb_cntr_M->Timing.TaskCounters.TID[1] == 0) {
    // Outputs for Atomic SubSystem: '<S4>/Publish'
    // Start for MATLABSystem: '<S34>/SinkBlock'
    Pub_ROPOD_4Wheel_kinb_cntr_349.publish
      (&ROPOD_4Wheel_kinb_cntr_B.BusAssignment);

    // End of Outputs for SubSystem: '<S4>/Publish'

    // Update for Delay: '<S13>/Enabled Delay'
    if (ROPOD_4Wheel_kinb_cntr_B.SourceBlock_o1) {
      ROPOD_4Wheel_kinb_cntr_DW.EnabledDelay_DSTATE = 0.0;
    }

    // End of Update for Delay: '<S13>/Enabled Delay'

    // Update for UnitDelay: '<S46>/Delay Input2'
    //
    //  Block description for '<S46>/Delay Input2':
    //
    //   Store in Global RAM

    ROPOD_4Wheel_kinb_cntr_DW.DelayInput2_DSTATE =
      ROPOD_4Wheel_kinb_cntr_B.DifferenceInputs2;

    // Update for UnitDelay: '<S47>/Delay Input2'
    //
    //  Block description for '<S47>/Delay Input2':
    //
    //   Store in Global RAM

    ROPOD_4Wheel_kinb_cntr_DW.DelayInput2_DSTATE_a =
      ROPOD_4Wheel_kinb_cntr_B.DifferenceInputs2_n;

    // Update for UnitDelay: '<S48>/Delay Input2'
    //
    //  Block description for '<S48>/Delay Input2':
    //
    //   Store in Global RAM

    ROPOD_4Wheel_kinb_cntr_DW.DelayInput2_DSTATE_e =
      ROPOD_4Wheel_kinb_cntr_B.DifferenceInputs2_g;
  }

  // End of RateTransition: '<S4>/Rate Transition'

  // MATLAB Function: '<S3>/pos_rot_matrix' incorporates:
  //   DiscreteIntegrator: '<S3>/Discrete-Time Integrator'

  ROPOD_4Wheel_kinb_cntr_B.t23 = cos
    (ROPOD_4Wheel_kinb_cntr_DW.DiscreteTimeIntegrator_DSTATE[2]);
  ROPOD_4Wheel_kinb_cntr_B.dv1[0] = ROPOD_4Wheel_kinb_cntr_B.t23;
  ROPOD_4Wheel_kinb_cntr_B.t5_tmp = sin
    (ROPOD_4Wheel_kinb_cntr_DW.DiscreteTimeIntegrator_DSTATE[2]);
  ROPOD_4Wheel_kinb_cntr_B.dv1[3] = -ROPOD_4Wheel_kinb_cntr_B.t5_tmp;
  ROPOD_4Wheel_kinb_cntr_B.dv1[6] = 0.0;
  ROPOD_4Wheel_kinb_cntr_B.dv1[1] = ROPOD_4Wheel_kinb_cntr_B.t5_tmp;
  ROPOD_4Wheel_kinb_cntr_B.dv1[4] = ROPOD_4Wheel_kinb_cntr_B.t23;
  ROPOD_4Wheel_kinb_cntr_B.dv1[7] = 0.0;
  ROPOD_4Wheel_kinb_cntr_B.dv1[2] = 0.0;
  ROPOD_4Wheel_kinb_cntr_B.dv1[5] = 0.0;
  ROPOD_4Wheel_kinb_cntr_B.dv1[8] = 1.0;
  for (i = 0; i < 3; i++) {
    // Update for DiscreteIntegrator: '<S3>/Discrete-Time Integrator'
    ROPOD_4Wheel_kinb_cntr_DW.DiscreteTimeIntegrator_DSTATE[i] +=
      ROPOD_4Wheel_kinb_cntr_P.DiscreteTimeIntegrator_gainval *
      (ROPOD_4Wheel_kinb_cntr_B.dv1[i + 6] *
       ROPOD_4Wheel_kinb_cntr_B.TmpSignalConversionAtCoordi[2] +
       (ROPOD_4Wheel_kinb_cntr_B.dv1[i + 3] *
        ROPOD_4Wheel_kinb_cntr_B.TmpSignalConversionAtCoordi[1] +
        ROPOD_4Wheel_kinb_cntr_B.dv1[i] *
        ROPOD_4Wheel_kinb_cntr_B.TmpSignalConversionAtCoordi[0]));
  }

  // End of MATLAB Function: '<S3>/pos_rot_matrix'

  // Update absolute time for base rate
  // The "clockTick0" counts the number of times the code of this task has
  //  been executed. The absolute time is the multiplication of "clockTick0"
  //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
  //  overflow during the application lifespan selected.

  ROPOD_4Wheel_kinb_cntr_M->Timing.t[0] =
    (++ROPOD_4Wheel_kinb_cntr_M->Timing.clockTick0) *
    ROPOD_4Wheel_kinb_cntr_M->Timing.stepSize0;
  rate_scheduler();
}

// Model initialize function
void ROPOD_4Wheel_kinb_cntr_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  // initialize real-time model
  (void) memset((void *)ROPOD_4Wheel_kinb_cntr_M, 0,
                sizeof(RT_MODEL_ROPOD_4Wheel_kinb_cntr_T));
  rtsiSetSolverName(&ROPOD_4Wheel_kinb_cntr_M->solverInfo,"FixedStepDiscrete");
  ROPOD_4Wheel_kinb_cntr_M->solverInfoPtr =
    (&ROPOD_4Wheel_kinb_cntr_M->solverInfo);

  // Initialize timing info
  {
    int_T *mdlTsMap = ROPOD_4Wheel_kinb_cntr_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    mdlTsMap[2] = 2;
    ROPOD_4Wheel_kinb_cntr_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    ROPOD_4Wheel_kinb_cntr_M->Timing.sampleTimes =
      (&ROPOD_4Wheel_kinb_cntr_M->Timing.sampleTimesArray[0]);
    ROPOD_4Wheel_kinb_cntr_M->Timing.offsetTimes =
      (&ROPOD_4Wheel_kinb_cntr_M->Timing.offsetTimesArray[0]);

    // task periods
    ROPOD_4Wheel_kinb_cntr_M->Timing.sampleTimes[0] = (0.001);
    ROPOD_4Wheel_kinb_cntr_M->Timing.sampleTimes[1] = (0.01);
    ROPOD_4Wheel_kinb_cntr_M->Timing.sampleTimes[2] = (1.0);

    // task offsets
    ROPOD_4Wheel_kinb_cntr_M->Timing.offsetTimes[0] = (0.0);
    ROPOD_4Wheel_kinb_cntr_M->Timing.offsetTimes[1] = (0.0);
    ROPOD_4Wheel_kinb_cntr_M->Timing.offsetTimes[2] = (0.0);
  }

  rtmSetTPtr(ROPOD_4Wheel_kinb_cntr_M, &ROPOD_4Wheel_kinb_cntr_M->Timing.tArray
             [0]);

  {
    int_T *mdlSampleHits = ROPOD_4Wheel_kinb_cntr_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    mdlSampleHits[2] = 1;
    ROPOD_4Wheel_kinb_cntr_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(ROPOD_4Wheel_kinb_cntr_M, -1);
  ROPOD_4Wheel_kinb_cntr_M->Timing.stepSize0 = 0.001;
  ROPOD_4Wheel_kinb_cntr_M->solverInfoPtr =
    (&ROPOD_4Wheel_kinb_cntr_M->solverInfo);
  ROPOD_4Wheel_kinb_cntr_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&ROPOD_4Wheel_kinb_cntr_M->solverInfo, 0.001);
  rtsiSetSolverMode(&ROPOD_4Wheel_kinb_cntr_M->solverInfo,
                    SOLVER_MODE_SINGLETASKING);

  // block I/O
  (void) memset(((void *) &ROPOD_4Wheel_kinb_cntr_B), 0,
                sizeof(B_ROPOD_4Wheel_kinb_cntr_T));

  // states (dwork)
  (void) memset((void *)&ROPOD_4Wheel_kinb_cntr_DW, 0,
                sizeof(DW_ROPOD_4Wheel_kinb_cntr_T));

  // child S-Function registration
  {
    RTWSfcnInfo *sfcnInfo = &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.sfcnInfo;
    ROPOD_4Wheel_kinb_cntr_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(ROPOD_4Wheel_kinb_cntr_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo,
      &ROPOD_4Wheel_kinb_cntr_M->Sizes.numSampTimes);
    ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr
      (ROPOD_4Wheel_kinb_cntr_M)[0]);
    ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.taskTimePtrs[1] = &(rtmGetTPtr
      (ROPOD_4Wheel_kinb_cntr_M)[1]);
    ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.taskTimePtrs[2] = &(rtmGetTPtr
      (ROPOD_4Wheel_kinb_cntr_M)[2]);
    rtssSetTPtrPtr(sfcnInfo,
                   ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(ROPOD_4Wheel_kinb_cntr_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(ROPOD_4Wheel_kinb_cntr_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (ROPOD_4Wheel_kinb_cntr_M));
    rtssSetStepSizePtr(sfcnInfo, &ROPOD_4Wheel_kinb_cntr_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested
      (ROPOD_4Wheel_kinb_cntr_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &ROPOD_4Wheel_kinb_cntr_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &ROPOD_4Wheel_kinb_cntr_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &ROPOD_4Wheel_kinb_cntr_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo, &ROPOD_4Wheel_kinb_cntr_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &ROPOD_4Wheel_kinb_cntr_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &ROPOD_4Wheel_kinb_cntr_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &ROPOD_4Wheel_kinb_cntr_M->solverInfoPtr);
  }

  ROPOD_4Wheel_kinb_cntr_M->Sizes.numSFcns = (5);

  // register each child
  {
    (void) memset((void *)
                  &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.childSFunctions[0],
                  0,
                  5*sizeof(SimStruct));
    ROPOD_4Wheel_kinb_cntr_M->childSfunctions =
      (&ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 5; i++) {
        ROPOD_4Wheel_kinb_cntr_M->childSfunctions[i] =
          (&ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.childSFunctions[i]);
      }
    }

    // Level2 S-Function Block: ROPOD_4Wheel_kinb_cntr/<S5>/ECAT_Interface (ECAT_Interface) 
    {
      SimStruct *rts = ROPOD_4Wheel_kinb_cntr_M->childSfunctions[0];

      // timing info
      time_T *sfcnPeriod =
        ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset =
        ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap =
        ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.blkInfo2[0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.inputOutputPortInfo2[0]);

      // Set up the mdlInfo pointer
      ssSetRTWSfcnInfo(rts, ROPOD_4Wheel_kinb_cntr_M->sfcnInfo);

      // Allocate memory of model methods 2
      {
        ssSetModelMethods2(rts,
                           &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.methods2[0]);
      }

      // Allocate memory of model methods 3
      {
        ssSetModelMethods3(rts,
                           &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.methods3[0]);
      }

      // Allocate memory of model methods 4
      {
        ssSetModelMethods4(rts,
                           &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.methods4[0]);
      }

      // Allocate memory for states auxilliary information
      {
        ssSetStatesInfo2(rts,
                         &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.statesInfo2
                         [0]);
        ssSetPeriodicStatesInfo(rts,
          &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      // outputs
      {
        ssSetPortInfoForOutputs(rts,
          &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.Sfcn0.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);

        // port 0
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &ROPOD_4Wheel_kinb_cntr_B.ECAT_Interface_e));
        }
      }

      // path info
      ssSetModelName(rts, "ECAT_Interface");
      ssSetPath(rts,
                "ROPOD_4Wheel_kinb_cntr/ROPOD 4SW VELOCITY MODE/ECAT_Interface");
      ssSetRTModel(rts,ROPOD_4Wheel_kinb_cntr_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      // parameters
      {
        mxArray **sfcnParams = (mxArray **)
          &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       ROPOD_4Wheel_kinb_cntr_P.ECAT_Interface_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       ROPOD_4Wheel_kinb_cntr_P.ECAT_Interface_P2_Size);
      }

      // work vectors
      ssSetRWork(rts, (real_T *)
                 &ROPOD_4Wheel_kinb_cntr_DW.ECAT_Interface_RWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        // RWORK
        ssSetDWorkWidth(rts, 0, 13);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &ROPOD_4Wheel_kinb_cntr_DW.ECAT_Interface_RWORK[0]);
      }

      // registration
      ECAT_Interface(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      // adjust sample time
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      // set compiled values of dynamic vector attributes
      ssSetNumNonsampledZCs(rts, 0);

      // Update connectivity flags for each port
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      // Update the BufferDstPort flags for each input port
    }

    // Level2 S-Function Block: ROPOD_4Wheel_kinb_cntr/<S41>/S-Function (ec_ROPOD_SmartWheel) 
    {
      SimStruct *rts = ROPOD_4Wheel_kinb_cntr_M->childSfunctions[1];

      // timing info
      time_T *sfcnPeriod =
        ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset =
        ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap =
        ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.blkInfo2[1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.inputOutputPortInfo2[1]);

      // Set up the mdlInfo pointer
      ssSetRTWSfcnInfo(rts, ROPOD_4Wheel_kinb_cntr_M->sfcnInfo);

      // Allocate memory of model methods 2
      {
        ssSetModelMethods2(rts,
                           &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.methods2[1]);
      }

      // Allocate memory of model methods 3
      {
        ssSetModelMethods3(rts,
                           &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.methods3[1]);
      }

      // Allocate memory of model methods 4
      {
        ssSetModelMethods4(rts,
                           &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.methods4[1]);
      }

      // Allocate memory for states auxilliary information
      {
        ssSetStatesInfo2(rts,
                         &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.statesInfo2
                         [1]);
        ssSetPeriodicStatesInfo(rts,
          &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      // inputs
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.Sfcn1.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.Sfcn1.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);

        // port 0
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.Sfcn1.UPtrs0;
          sfcnUPtrs[0] = &ROPOD_4Wheel_kinb_cntr_B.command1;
          sfcnUPtrs[1] = &ROPOD_4Wheel_kinb_cntr_B.command2;
          sfcnUPtrs[2] = &ROPOD_4Wheel_kinb_cntr_B.Product3[7];
          sfcnUPtrs[3] = &ROPOD_4Wheel_kinb_cntr_B.setpoint2;
          sfcnUPtrs[4] = &ROPOD_4Wheel_kinb_cntr_B.limit1_p;
          sfcnUPtrs[5] = &ROPOD_4Wheel_kinb_cntr_B.limit1_n;
          sfcnUPtrs[6] = &ROPOD_4Wheel_kinb_cntr_B.limit2_p_i;
          sfcnUPtrs[7] = &ROPOD_4Wheel_kinb_cntr_B.limit2_n_f;
          sfcnUPtrs[8] = &ROPOD_4Wheel_kinb_cntr_B.timestamp_d;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 9);
        }
      }

      // outputs
      {
        ssSetPortInfoForOutputs(rts,
          &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.Sfcn1.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);

        // port 0
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 40);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            ROPOD_4Wheel_kinb_cntr_B.SFunction));
        }
      }

      // path info
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "ROPOD_4Wheel_kinb_cntr/ROPOD 4SW VELOCITY MODE/Smart_Wheel_1/ec_ROPOD_SmartWheel/S-Function");
      ssSetRTModel(rts,ROPOD_4Wheel_kinb_cntr_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      // parameters
      {
        mxArray **sfcnParams = (mxArray **)
          &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       ROPOD_4Wheel_kinb_cntr_P.SFunction_P1_Size);
      }

      // registration
      ec_ROPOD_SmartWheel(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      // adjust sample time
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      // set compiled values of dynamic vector attributes
      ssSetNumNonsampledZCs(rts, 0);

      // Update connectivity flags for each port
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      // Update the BufferDstPort flags for each input port
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    // Level2 S-Function Block: ROPOD_4Wheel_kinb_cntr/<S42>/S-Function (ec_ROPOD_SmartWheel) 
    {
      SimStruct *rts = ROPOD_4Wheel_kinb_cntr_M->childSfunctions[2];

      // timing info
      time_T *sfcnPeriod =
        ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset =
        ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap =
        ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.blkInfo2[2]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.inputOutputPortInfo2[2]);

      // Set up the mdlInfo pointer
      ssSetRTWSfcnInfo(rts, ROPOD_4Wheel_kinb_cntr_M->sfcnInfo);

      // Allocate memory of model methods 2
      {
        ssSetModelMethods2(rts,
                           &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.methods2[2]);
      }

      // Allocate memory of model methods 3
      {
        ssSetModelMethods3(rts,
                           &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.methods3[2]);
      }

      // Allocate memory of model methods 4
      {
        ssSetModelMethods4(rts,
                           &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.methods4[2]);
      }

      // Allocate memory for states auxilliary information
      {
        ssSetStatesInfo2(rts,
                         &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.statesInfo2
                         [2]);
        ssSetPeriodicStatesInfo(rts,
          &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      // inputs
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.Sfcn2.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.Sfcn2.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);

        // port 0
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.Sfcn2.UPtrs0;
          sfcnUPtrs[0] = &ROPOD_4Wheel_kinb_cntr_B.command1_o;
          sfcnUPtrs[1] = &ROPOD_4Wheel_kinb_cntr_B.command2_d;
          sfcnUPtrs[2] = &ROPOD_4Wheel_kinb_cntr_B.Product3[9];
          sfcnUPtrs[3] = &ROPOD_4Wheel_kinb_cntr_B.setpoint2_h;
          sfcnUPtrs[4] = &ROPOD_4Wheel_kinb_cntr_B.limit1_p_o;
          sfcnUPtrs[5] = &ROPOD_4Wheel_kinb_cntr_B.limit1_n_m;
          sfcnUPtrs[6] = &ROPOD_4Wheel_kinb_cntr_B.limit2_p_l;
          sfcnUPtrs[7] = &ROPOD_4Wheel_kinb_cntr_B.limit2_n_j;
          sfcnUPtrs[8] = &ROPOD_4Wheel_kinb_cntr_B.timestamp_o;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 9);
        }
      }

      // outputs
      {
        ssSetPortInfoForOutputs(rts,
          &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.Sfcn2.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.Sfcn2.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);

        // port 0
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 40);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            ROPOD_4Wheel_kinb_cntr_B.SFunction_n));
        }
      }

      // path info
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "ROPOD_4Wheel_kinb_cntr/ROPOD 4SW VELOCITY MODE/Smart_Wheel_2/ec_ROPOD_SmartWheel/S-Function");
      ssSetRTModel(rts,ROPOD_4Wheel_kinb_cntr_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      // parameters
      {
        mxArray **sfcnParams = (mxArray **)
          &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       ROPOD_4Wheel_kinb_cntr_P.SFunction_P1_Size_d);
      }

      // registration
      ec_ROPOD_SmartWheel(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      // adjust sample time
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      // set compiled values of dynamic vector attributes
      ssSetNumNonsampledZCs(rts, 0);

      // Update connectivity flags for each port
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      // Update the BufferDstPort flags for each input port
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    // Level2 S-Function Block: ROPOD_4Wheel_kinb_cntr/<S43>/S-Function (ec_ROPOD_SmartWheel) 
    {
      SimStruct *rts = ROPOD_4Wheel_kinb_cntr_M->childSfunctions[3];

      // timing info
      time_T *sfcnPeriod =
        ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset =
        ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap =
        ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.blkInfo2[3]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.inputOutputPortInfo2[3]);

      // Set up the mdlInfo pointer
      ssSetRTWSfcnInfo(rts, ROPOD_4Wheel_kinb_cntr_M->sfcnInfo);

      // Allocate memory of model methods 2
      {
        ssSetModelMethods2(rts,
                           &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.methods2[3]);
      }

      // Allocate memory of model methods 3
      {
        ssSetModelMethods3(rts,
                           &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.methods3[3]);
      }

      // Allocate memory of model methods 4
      {
        ssSetModelMethods4(rts,
                           &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.methods4[3]);
      }

      // Allocate memory for states auxilliary information
      {
        ssSetStatesInfo2(rts,
                         &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.statesInfo2
                         [3]);
        ssSetPeriodicStatesInfo(rts,
          &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.periodicStatesInfo[3]);
      }

      // inputs
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.Sfcn3.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.Sfcn3.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);

        // port 0
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.Sfcn3.UPtrs0;
          sfcnUPtrs[0] = &ROPOD_4Wheel_kinb_cntr_B.command1_d;
          sfcnUPtrs[1] = &ROPOD_4Wheel_kinb_cntr_B.command2_h;
          sfcnUPtrs[2] = &ROPOD_4Wheel_kinb_cntr_B.Product3[11];
          sfcnUPtrs[3] = &ROPOD_4Wheel_kinb_cntr_B.setpoint2_j;
          sfcnUPtrs[4] = &ROPOD_4Wheel_kinb_cntr_B.limit1_p_f;
          sfcnUPtrs[5] = &ROPOD_4Wheel_kinb_cntr_B.limit1_n_g;
          sfcnUPtrs[6] = &ROPOD_4Wheel_kinb_cntr_B.limit2_p;
          sfcnUPtrs[7] = &ROPOD_4Wheel_kinb_cntr_B.limit2_n;
          sfcnUPtrs[8] = &ROPOD_4Wheel_kinb_cntr_B.timestamp_i;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 9);
        }
      }

      // outputs
      {
        ssSetPortInfoForOutputs(rts,
          &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.Sfcn3.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.Sfcn3.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);

        // port 0
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 40);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            ROPOD_4Wheel_kinb_cntr_B.SFunction_m));
        }
      }

      // path info
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "ROPOD_4Wheel_kinb_cntr/ROPOD 4SW VELOCITY MODE/Smart_Wheel_3/ec_ROPOD_SmartWheel/S-Function");
      ssSetRTModel(rts,ROPOD_4Wheel_kinb_cntr_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      // parameters
      {
        mxArray **sfcnParams = (mxArray **)
          &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       ROPOD_4Wheel_kinb_cntr_P.SFunction_P1_Size_e);
      }

      // registration
      ec_ROPOD_SmartWheel(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      // adjust sample time
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      // set compiled values of dynamic vector attributes
      ssSetNumNonsampledZCs(rts, 0);

      // Update connectivity flags for each port
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      // Update the BufferDstPort flags for each input port
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    // Level2 S-Function Block: ROPOD_4Wheel_kinb_cntr/<S44>/S-Function (ec_ROPOD_SmartWheel) 
    {
      SimStruct *rts = ROPOD_4Wheel_kinb_cntr_M->childSfunctions[4];

      // timing info
      time_T *sfcnPeriod =
        ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset =
        ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap =
        ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.blkInfo2[4]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.inputOutputPortInfo2[4]);

      // Set up the mdlInfo pointer
      ssSetRTWSfcnInfo(rts, ROPOD_4Wheel_kinb_cntr_M->sfcnInfo);

      // Allocate memory of model methods 2
      {
        ssSetModelMethods2(rts,
                           &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.methods2[4]);
      }

      // Allocate memory of model methods 3
      {
        ssSetModelMethods3(rts,
                           &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.methods3[4]);
      }

      // Allocate memory of model methods 4
      {
        ssSetModelMethods4(rts,
                           &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.methods4[4]);
      }

      // Allocate memory for states auxilliary information
      {
        ssSetStatesInfo2(rts,
                         &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.statesInfo2
                         [4]);
        ssSetPeriodicStatesInfo(rts,
          &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.periodicStatesInfo[4]);
      }

      // inputs
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.Sfcn4.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.Sfcn4.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);

        // port 0
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.Sfcn4.UPtrs0;
          sfcnUPtrs[0] = &ROPOD_4Wheel_kinb_cntr_B.command1_e;
          sfcnUPtrs[1] = &ROPOD_4Wheel_kinb_cntr_B.command2_j;
          sfcnUPtrs[2] = &ROPOD_4Wheel_kinb_cntr_B.Product3[13];
          sfcnUPtrs[3] = &ROPOD_4Wheel_kinb_cntr_B.setpoint2_n;
          sfcnUPtrs[4] = &ROPOD_4Wheel_kinb_cntr_B.limit1_p_b;
          sfcnUPtrs[5] = &ROPOD_4Wheel_kinb_cntr_B.limit1_n_d;
          sfcnUPtrs[6] = &ROPOD_4Wheel_kinb_cntr_B.limit2_p_c;
          sfcnUPtrs[7] = &ROPOD_4Wheel_kinb_cntr_B.limit2_n_k;
          sfcnUPtrs[8] = &ROPOD_4Wheel_kinb_cntr_B.timestamp;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 9);
        }
      }

      // outputs
      {
        ssSetPortInfoForOutputs(rts,
          &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.Sfcn4.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.Sfcn4.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);

        // port 0
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 40);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            ROPOD_4Wheel_kinb_cntr_B.SFunction_k));
        }
      }

      // path info
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "ROPOD_4Wheel_kinb_cntr/ROPOD 4SW VELOCITY MODE/Smart_Wheel_4/ec_ROPOD_SmartWheel/S-Function");
      ssSetRTModel(rts,ROPOD_4Wheel_kinb_cntr_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      // parameters
      {
        mxArray **sfcnParams = (mxArray **)
          &ROPOD_4Wheel_kinb_cntr_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       ROPOD_4Wheel_kinb_cntr_P.SFunction_P1_Size_l);
      }

      // registration
      ec_ROPOD_SmartWheel(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      // adjust sample time
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      // set compiled values of dynamic vector attributes
      ssSetNumNonsampledZCs(rts, 0);

      // Update connectivity flags for each port
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      // Update the BufferDstPort flags for each input port
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }
  }

  {
    static const char_T tmp[16] = { '/', 'o', 'd', 'o', 'm', '_', 'i', 'n', 'c',
      'o', 'm', 'p', 'l', 'e', 't', 'e' };

    static const char_T tmp_0[22] = { '/', 's', 'm', 'a', 'r', 't', 'w', '4',
      '_', 'v', 'o', 'l', 'c', 'u', 'r', 'r', '_', 'd', 'e', 'b', 'u', 'g' };

    static const char_T tmp_1[22] = { '/', 's', 'm', 'a', 'r', 't', 'w', '3',
      '_', 'v', 'o', 'l', 'c', 'u', 'r', 'r', '_', 'd', 'e', 'b', 'u', 'g' };

    static const char_T tmp_2[22] = { '/', 's', 'm', 'a', 'r', 't', 'w', '2',
      '_', 'v', 'o', 'l', 'c', 'u', 'r', 'r', '_', 'd', 'e', 'b', 'u', 'g' };

    static const char_T tmp_3[22] = { '/', 's', 'm', 'a', 'r', 't', 'w', '1',
      '_', 'v', 'o', 'l', 'c', 'u', 'r', 'r', '_', 'd', 'e', 'b', 'u', 'g' };

    static const char_T tmp_4[14] = { '/', 's', 'm', 'a', 'r', 't', 'w', '4',
      '_', 'd', 'e', 'b', 'u', 'g' };

    static const char_T tmp_5[14] = { '/', 's', 'm', 'a', 'r', 't', 'w', '3',
      '_', 'd', 'e', 'b', 'u', 'g' };

    static const char_T tmp_6[14] = { '/', 's', 'm', 'a', 'r', 't', 'w', '2',
      '_', 'd', 'e', 'b', 'u', 'g' };

    static const char_T tmp_7[14] = { '/', 's', 'm', 'a', 'r', 't', 'w', '1',
      '_', 'd', 'e', 'b', 'u', 'g' };

    static const char_T tmp_8[24] = { '/', 'b', 'a', 's', 'e', '_', 'c', 'o',
      'n', 'f', '/', 'm', 'a', 'x', '_', 'v', 'e', 'l', '_', 't', 'h', 'e', 't',
      'a' };

    static const char_T tmp_9[24] = { '/', 'b', 'a', 's', 'e', '_', 'c', 'o',
      'n', 'f', '/', 'm', 'a', 'x', '_', 'a', 'c', 'c', '_', 't', 'h', 'e', 't',
      'a' };

    static const char_T tmp_a[8] = { '/', 'c', 'm', 'd', '_', 'v', 'e', 'l' };

    static const char_T tmp_b[21] = { '/', 'b', 'a', 's', 'e', '_', 'c', 'o',
      'n', 'f', '/', 'm', 'a', 'x', '_', 'v', 'e', 'l', '_', 'x', 'y' };

    static const char_T tmp_c[21] = { '/', 'b', 'a', 's', 'e', '_', 'c', 'o',
      'n', 'f', '/', 'm', 'a', 'x', '_', 'a', 'c', 'c', '_', 'x', 'y' };

    static const char_T tmp_d[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'y', 'p', 'o', 's', '_', 'S', 'W',
      '4' };

    static const char_T tmp_e[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'x', 'p', 'o', 's', '_', 'S', 'W',
      '4' };

    static const char_T tmp_f[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'y', 'p', 'o', 's', '_', 'S', 'W',
      '3' };

    static const char_T tmp_g[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'x', 'p', 'o', 's', '_', 'S', 'W',
      '3' };

    static const char_T tmp_h[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'y', 'p', 'o', 's', '_', 'S', 'W',
      '2' };

    static const char_T tmp_i[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'x', 'p', 'o', 's', '_', 'S', 'W',
      '2' };

    static const char_T tmp_j[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'y', 'p', 'o', 's', '_', 'S', 'W',
      '1' };

    static const char_T tmp_k[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'x', 'p', 'o', 's', '_', 'S', 'W',
      '1' };

    static const char_T tmp_l[19] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'd', '_', 'w' };

    static const char_T tmp_m[19] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 's', '_', 'w' };

    static const char_T tmp_n[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'r', '_', 'w', 'R', '_', 'S', 'W',
      '4' };

    static const char_T tmp_o[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'r', '_', 'w', 'L', '_', 'S', 'W',
      '4' };

    static const char_T tmp_p[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'r', '_', 'w', 'R', '_', 'S', 'W',
      '3' };

    static const char_T tmp_q[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'r', '_', 'w', 'L', '_', 'S', 'W',
      '3' };

    static const char_T tmp_r[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'r', '_', 'w', 'R', '_', 'S', 'W',
      '2' };

    static const char_T tmp_s[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'r', '_', 'w', 'L', '_', 'S', 'W',
      '2' };

    static const char_T tmp_t[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'r', '_', 'w', 'R', '_', 'S', 'W',
      '1' };

    static const char_T tmp_u[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'r', '_', 'w', 'L', '_', 'S', 'W',
      '1' };

    static const char_T tmp_v[25] = { '/', 's', 'm', 'a', 'r', 't', '_', 'w',
      'h', 'e', 'e', 'l', 's', '/', 'm', 'a', 'x', '_', 'c', 'u', 'r', 'r', 'e',
      'n', 't' };

    static const char_T tmp_w[20] = { '/', 's', 'm', 'a', 'r', 't', '_', 'w',
      'h', 'e', 'e', 'l', 's', '/', 'e', 'n', 'a', 'b', 'l', 'e' };

    static const char_T tmp_x[28] = { '/', 's', 'm', 'a', 'r', 't', '_', 'w',
      'h', 'e', 'e', 'l', 's', '/', 'p', 'i', 'v', 'o', 't', '_', 'o', 'f', 'f',
      's', '_', 's', 'w', '4' };

    static const char_T tmp_y[28] = { '/', 's', 'm', 'a', 'r', 't', '_', 'w',
      'h', 'e', 'e', 'l', 's', '/', 'p', 'i', 'v', 'o', 't', '_', 'o', 'f', 'f',
      's', '_', 's', 'w', '3' };

    static const char_T tmp_z[28] = { '/', 's', 'm', 'a', 'r', 't', '_', 'w',
      'h', 'e', 'e', 'l', 's', '/', 'p', 'i', 'v', 'o', 't', '_', 'o', 'f', 'f',
      's', '_', 's', 'w', '2' };

    static const char_T tmp_10[28] = { '/', 's', 'm', 'a', 'r', 't', '_', 'w',
      'h', 'e', 'e', 'l', 's', '/', 'p', 'i', 'v', 'o', 't', '_', 'o', 'f', 'f',
      's', '_', 's', 'w', '1' };

    char_T tmp_11[17];
    char_T tmp_12[15];
    char_T tmp_13[9];
    int32_T i;

    // Start for S-Function (ECAT_Interface): '<S5>/ECAT_Interface'
    // Level2 S-Function Block: '<S5>/ECAT_Interface' (ECAT_Interface)
    {
      SimStruct *rts = ROPOD_4Wheel_kinb_cntr_M->childSfunctions[0];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    // Start for MATLABSystem: '<S9>/Get Parameter1'
    ROPOD_4Wheel_kinb_cntr_DW.obj_b.isInitialized = 0;
    ROPOD_4Wheel_kinb_cntr_DW.obj_b.SampleTime = ROPOD_4Wheel_kinb_cntr_P.Tsp;
    ROPOD_4Wheel_kinb_cntr_DW.obj_b.isInitialized = 1;
    for (i = 0; i < 28; i++) {
      ROPOD_4Wheel_kinb_cntr_B.cv0[i] = tmp_10[i];
    }

    ROPOD_4Wheel_kinb_cntr_B.cv0[28] = '\x00';
    ParamGet_ROPOD_4Wheel_kinb_cntr_1130.initialize(ROPOD_4Wheel_kinb_cntr_B.cv0);
    ParamGet_ROPOD_4Wheel_kinb_cntr_1130.initialize_error_codes(0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_kinb_cntr_1130.set_initial_value
      (ParameterInitialValu_nc4bpmzdsy);

    // End of Start for MATLABSystem: '<S9>/Get Parameter1'

    // Start for MATLABSystem: '<S9>/Get Parameter3'
    ROPOD_4Wheel_kinb_cntr_DW.obj_l.isInitialized = 0;
    ROPOD_4Wheel_kinb_cntr_DW.obj_l.SampleTime = ROPOD_4Wheel_kinb_cntr_P.Tsp;
    ROPOD_4Wheel_kinb_cntr_DW.obj_l.isInitialized = 1;
    for (i = 0; i < 28; i++) {
      ROPOD_4Wheel_kinb_cntr_B.cv0[i] = tmp_z[i];
    }

    ROPOD_4Wheel_kinb_cntr_B.cv0[28] = '\x00';
    ParamGet_ROPOD_4Wheel_kinb_cntr_1132.initialize(ROPOD_4Wheel_kinb_cntr_B.cv0);
    ParamGet_ROPOD_4Wheel_kinb_cntr_1132.initialize_error_codes(0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_kinb_cntr_1132.set_initial_value
      (ParameterInitialValue_nc4bpmzds);

    // End of Start for MATLABSystem: '<S9>/Get Parameter3'

    // Start for MATLABSystem: '<S9>/Get Parameter4'
    ROPOD_4Wheel_kinb_cntr_DW.obj_c.isInitialized = 0;
    ROPOD_4Wheel_kinb_cntr_DW.obj_c.SampleTime = ROPOD_4Wheel_kinb_cntr_P.Tsp;
    ROPOD_4Wheel_kinb_cntr_DW.obj_c.isInitialized = 1;
    for (i = 0; i < 28; i++) {
      ROPOD_4Wheel_kinb_cntr_B.cv0[i] = tmp_y[i];
    }

    ROPOD_4Wheel_kinb_cntr_B.cv0[28] = '\x00';
    ParamGet_ROPOD_4Wheel_kinb_cntr_1134.initialize(ROPOD_4Wheel_kinb_cntr_B.cv0);
    ParamGet_ROPOD_4Wheel_kinb_cntr_1134.initialize_error_codes(0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_kinb_cntr_1134.set_initial_value
      (ParameterInitialValue_nc4bpmzd);

    // End of Start for MATLABSystem: '<S9>/Get Parameter4'

    // Start for MATLABSystem: '<S9>/Get Parameter5'
    ROPOD_4Wheel_kinb_cntr_DW.obj_a.isInitialized = 0;
    ROPOD_4Wheel_kinb_cntr_DW.obj_a.SampleTime = ROPOD_4Wheel_kinb_cntr_P.Tsp;
    ROPOD_4Wheel_kinb_cntr_DW.obj_a.isInitialized = 1;
    for (i = 0; i < 28; i++) {
      ROPOD_4Wheel_kinb_cntr_B.cv0[i] = tmp_x[i];
    }

    ROPOD_4Wheel_kinb_cntr_B.cv0[28] = '\x00';
    ParamGet_ROPOD_4Wheel_kinb_cntr_1136.initialize(ROPOD_4Wheel_kinb_cntr_B.cv0);
    ParamGet_ROPOD_4Wheel_kinb_cntr_1136.initialize_error_codes(0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_kinb_cntr_1136.set_initial_value
      (R_ParameterInitialValue_nc4bpmz);

    // End of Start for MATLABSystem: '<S9>/Get Parameter5'
    // Start for MATLABSystem: '<S9>/Get Parameter'
    ROPOD_4Wheel_kinb_cntr_DW.obj_f.isInitialized = 0;
    ROPOD_4Wheel_kinb_cntr_DW.obj_f.SampleTime = ROPOD_4Wheel_kinb_cntr_P.Tsp;
    ROPOD_4Wheel_kinb_cntr_DW.obj_f.isInitialized = 1;
    for (i = 0; i < 20; i++) {
      ROPOD_4Wheel_kinb_cntr_B.cv5[i] = tmp_w[i];
    }

    ROPOD_4Wheel_kinb_cntr_B.cv5[20] = '\x00';
    ParamGet_ROPOD_4Wheel_kinb_cntr_542.initialize(ROPOD_4Wheel_kinb_cntr_B.cv5);
    ParamGet_ROPOD_4Wheel_kinb_cntr_542.initialize_error_codes(0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_kinb_cntr_542.set_initial_value
      (RO_ParameterInitialValue_nc4bpm);

    // End of Start for MATLABSystem: '<S9>/Get Parameter'

    // Start for MATLABSystem: '<S9>/Get Parameter2'
    ROPOD_4Wheel_kinb_cntr_DW.obj_g.isInitialized = 0;
    ROPOD_4Wheel_kinb_cntr_DW.obj_g.SampleTime = ROPOD_4Wheel_kinb_cntr_P.Tsp;
    ROPOD_4Wheel_kinb_cntr_DW.obj_g.isInitialized = 1;
    for (i = 0; i < 25; i++) {
      ROPOD_4Wheel_kinb_cntr_B.cv1[i] = tmp_v[i];
    }

    ROPOD_4Wheel_kinb_cntr_B.cv1[25] = '\x00';
    ParamGet_ROPOD_4Wheel_kinb_cntr_544.initialize(ROPOD_4Wheel_kinb_cntr_B.cv1);
    ParamGet_ROPOD_4Wheel_kinb_cntr_544.initialize_error_codes(0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_kinb_cntr_544.set_initial_value
      (ROP_ParameterInitialValue_nc4bp);

    // End of Start for MATLABSystem: '<S9>/Get Parameter2'

    // Start for MATLABSystem: '<S8>/Get Parameter'
    ROPOD_4Wheel_kinb_cntr_DW.obj_ft.isInitialized = 0;
    ROPOD_4Wheel_kinb_cntr_DW.obj_ft.SampleTime = ROPOD_4Wheel_kinb_cntr_P.Tsp;
    ROPOD_4Wheel_kinb_cntr_DW.obj_ft.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_kinb_cntr_B.cv2[i] = tmp_u[i];
    }

    ROPOD_4Wheel_kinb_cntr_B.cv2[24] = '\x00';
    ParamGet_ROPOD_4Wheel_kinb_cntr_1081.initialize(ROPOD_4Wheel_kinb_cntr_B.cv2);
    ParamGet_ROPOD_4Wheel_kinb_cntr_1081.initialize_error_codes(0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_kinb_cntr_1081.set_initial_value
      (ROPO_ParameterInitialValue_nc4b);

    // End of Start for MATLABSystem: '<S8>/Get Parameter'

    // Start for MATLABSystem: '<S8>/Get Parameter11'
    ROPOD_4Wheel_kinb_cntr_DW.obj_e.isInitialized = 0;
    ROPOD_4Wheel_kinb_cntr_DW.obj_e.SampleTime = ROPOD_4Wheel_kinb_cntr_P.Tsp;
    ROPOD_4Wheel_kinb_cntr_DW.obj_e.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_kinb_cntr_B.cv2[i] = tmp_t[i];
    }

    ROPOD_4Wheel_kinb_cntr_B.cv2[24] = '\x00';
    ParamGet_ROPOD_4Wheel_kinb_cntr_1082.initialize(ROPOD_4Wheel_kinb_cntr_B.cv2);
    ParamGet_ROPOD_4Wheel_kinb_cntr_1082.initialize_error_codes(0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_kinb_cntr_1082.set_initial_value
      (ROPO_ParameterInitialValue_nc4b);

    // End of Start for MATLABSystem: '<S8>/Get Parameter11'

    // Start for MATLABSystem: '<S8>/Get Parameter12'
    ROPOD_4Wheel_kinb_cntr_DW.obj_ps.isInitialized = 0;
    ROPOD_4Wheel_kinb_cntr_DW.obj_ps.SampleTime = ROPOD_4Wheel_kinb_cntr_P.Tsp;
    ROPOD_4Wheel_kinb_cntr_DW.obj_ps.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_kinb_cntr_B.cv2[i] = tmp_s[i];
    }

    ROPOD_4Wheel_kinb_cntr_B.cv2[24] = '\x00';
    ParamGet_ROPOD_4Wheel_kinb_cntr_1083.initialize(ROPOD_4Wheel_kinb_cntr_B.cv2);
    ParamGet_ROPOD_4Wheel_kinb_cntr_1083.initialize_error_codes(0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_kinb_cntr_1083.set_initial_value
      (ROPO_ParameterInitialValue_nc4b);

    // End of Start for MATLABSystem: '<S8>/Get Parameter12'

    // Start for MATLABSystem: '<S8>/Get Parameter13'
    ROPOD_4Wheel_kinb_cntr_DW.obj_h.isInitialized = 0;
    ROPOD_4Wheel_kinb_cntr_DW.obj_h.SampleTime = ROPOD_4Wheel_kinb_cntr_P.Tsp;
    ROPOD_4Wheel_kinb_cntr_DW.obj_h.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_kinb_cntr_B.cv2[i] = tmp_r[i];
    }

    ROPOD_4Wheel_kinb_cntr_B.cv2[24] = '\x00';
    ParamGet_ROPOD_4Wheel_kinb_cntr_1084.initialize(ROPOD_4Wheel_kinb_cntr_B.cv2);
    ParamGet_ROPOD_4Wheel_kinb_cntr_1084.initialize_error_codes(0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_kinb_cntr_1084.set_initial_value
      (ROPO_ParameterInitialValue_nc4b);

    // End of Start for MATLABSystem: '<S8>/Get Parameter13'

    // Start for MATLABSystem: '<S8>/Get Parameter14'
    ROPOD_4Wheel_kinb_cntr_DW.obj_k.isInitialized = 0;
    ROPOD_4Wheel_kinb_cntr_DW.obj_k.SampleTime = ROPOD_4Wheel_kinb_cntr_P.Tsp;
    ROPOD_4Wheel_kinb_cntr_DW.obj_k.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_kinb_cntr_B.cv2[i] = tmp_q[i];
    }

    ROPOD_4Wheel_kinb_cntr_B.cv2[24] = '\x00';
    ParamGet_ROPOD_4Wheel_kinb_cntr_1085.initialize(ROPOD_4Wheel_kinb_cntr_B.cv2);
    ParamGet_ROPOD_4Wheel_kinb_cntr_1085.initialize_error_codes(0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_kinb_cntr_1085.set_initial_value
      (ROPO_ParameterInitialValue_nc4b);

    // End of Start for MATLABSystem: '<S8>/Get Parameter14'

    // Start for MATLABSystem: '<S8>/Get Parameter15'
    ROPOD_4Wheel_kinb_cntr_DW.obj_kj.isInitialized = 0;
    ROPOD_4Wheel_kinb_cntr_DW.obj_kj.SampleTime = ROPOD_4Wheel_kinb_cntr_P.Tsp;
    ROPOD_4Wheel_kinb_cntr_DW.obj_kj.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_kinb_cntr_B.cv2[i] = tmp_p[i];
    }

    ROPOD_4Wheel_kinb_cntr_B.cv2[24] = '\x00';
    ParamGet_ROPOD_4Wheel_kinb_cntr_1086.initialize(ROPOD_4Wheel_kinb_cntr_B.cv2);
    ParamGet_ROPOD_4Wheel_kinb_cntr_1086.initialize_error_codes(0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_kinb_cntr_1086.set_initial_value
      (ROPO_ParameterInitialValue_nc4b);

    // End of Start for MATLABSystem: '<S8>/Get Parameter15'

    // Start for MATLABSystem: '<S8>/Get Parameter16'
    ROPOD_4Wheel_kinb_cntr_DW.obj_i.isInitialized = 0;
    ROPOD_4Wheel_kinb_cntr_DW.obj_i.SampleTime = ROPOD_4Wheel_kinb_cntr_P.Tsp;
    ROPOD_4Wheel_kinb_cntr_DW.obj_i.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_kinb_cntr_B.cv2[i] = tmp_o[i];
    }

    ROPOD_4Wheel_kinb_cntr_B.cv2[24] = '\x00';
    ParamGet_ROPOD_4Wheel_kinb_cntr_1087.initialize(ROPOD_4Wheel_kinb_cntr_B.cv2);
    ParamGet_ROPOD_4Wheel_kinb_cntr_1087.initialize_error_codes(0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_kinb_cntr_1087.set_initial_value
      (ROPO_ParameterInitialValue_nc4b);

    // End of Start for MATLABSystem: '<S8>/Get Parameter16'

    // Start for MATLABSystem: '<S8>/Get Parameter17'
    ROPOD_4Wheel_kinb_cntr_DW.obj_m.isInitialized = 0;
    ROPOD_4Wheel_kinb_cntr_DW.obj_m.SampleTime = ROPOD_4Wheel_kinb_cntr_P.Tsp;
    ROPOD_4Wheel_kinb_cntr_DW.obj_m.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_kinb_cntr_B.cv2[i] = tmp_n[i];
    }

    ROPOD_4Wheel_kinb_cntr_B.cv2[24] = '\x00';
    ParamGet_ROPOD_4Wheel_kinb_cntr_1088.initialize(ROPOD_4Wheel_kinb_cntr_B.cv2);
    ParamGet_ROPOD_4Wheel_kinb_cntr_1088.initialize_error_codes(0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_kinb_cntr_1088.set_initial_value
      (ROPO_ParameterInitialValue_nc4b);

    // End of Start for MATLABSystem: '<S8>/Get Parameter17'

    // Start for MATLABSystem: '<S8>/Get Parameter1'
    ROPOD_4Wheel_kinb_cntr_DW.obj_ei.isInitialized = 0;
    ROPOD_4Wheel_kinb_cntr_DW.obj_ei.SampleTime = ROPOD_4Wheel_kinb_cntr_P.Tsp;
    ROPOD_4Wheel_kinb_cntr_DW.obj_ei.isInitialized = 1;
    for (i = 0; i < 19; i++) {
      ROPOD_4Wheel_kinb_cntr_B.cv6[i] = tmp_m[i];
    }

    ROPOD_4Wheel_kinb_cntr_B.cv6[19] = '\x00';
    ParamGet_ROPOD_4Wheel_kinb_cntr_1097.initialize(ROPOD_4Wheel_kinb_cntr_B.cv6);
    ParamGet_ROPOD_4Wheel_kinb_cntr_1097.initialize_error_codes(0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_kinb_cntr_1097.set_initial_value
      (ROPOD_ParameterInitialValue_nc4);

    // End of Start for MATLABSystem: '<S8>/Get Parameter1'

    // Start for MATLABSystem: '<S8>/Get Parameter2'
    ROPOD_4Wheel_kinb_cntr_DW.obj_j.isInitialized = 0;
    ROPOD_4Wheel_kinb_cntr_DW.obj_j.SampleTime = ROPOD_4Wheel_kinb_cntr_P.Tsp;
    ROPOD_4Wheel_kinb_cntr_DW.obj_j.isInitialized = 1;
    for (i = 0; i < 19; i++) {
      ROPOD_4Wheel_kinb_cntr_B.cv6[i] = tmp_l[i];
    }

    ROPOD_4Wheel_kinb_cntr_B.cv6[19] = '\x00';
    ParamGet_ROPOD_4Wheel_kinb_cntr_1098.initialize(ROPOD_4Wheel_kinb_cntr_B.cv6);
    ParamGet_ROPOD_4Wheel_kinb_cntr_1098.initialize_error_codes(0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_kinb_cntr_1098.set_initial_value
      (ROPOD__ParameterInitialValue_nc);

    // End of Start for MATLABSystem: '<S8>/Get Parameter2'

    // Start for MATLABSystem: '<S8>/Get Parameter3'
    ROPOD_4Wheel_kinb_cntr_DW.obj_is.isInitialized = 0;
    ROPOD_4Wheel_kinb_cntr_DW.obj_is.SampleTime = ROPOD_4Wheel_kinb_cntr_P.Tsp;
    ROPOD_4Wheel_kinb_cntr_DW.obj_is.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_kinb_cntr_B.cv2[i] = tmp_k[i];
    }

    ROPOD_4Wheel_kinb_cntr_B.cv2[24] = '\x00';
    ParamGet_ROPOD_4Wheel_kinb_cntr_1101.initialize(ROPOD_4Wheel_kinb_cntr_B.cv2);
    ParamGet_ROPOD_4Wheel_kinb_cntr_1101.initialize_error_codes(0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_kinb_cntr_1101.set_initial_value
      (ROPOD_4_ParameterInitialValue_n);

    // End of Start for MATLABSystem: '<S8>/Get Parameter3'

    // Start for MATLABSystem: '<S8>/Get Parameter4'
    ROPOD_4Wheel_kinb_cntr_DW.obj_kd.isInitialized = 0;
    ROPOD_4Wheel_kinb_cntr_DW.obj_kd.SampleTime = ROPOD_4Wheel_kinb_cntr_P.Tsp;
    ROPOD_4Wheel_kinb_cntr_DW.obj_kd.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_kinb_cntr_B.cv2[i] = tmp_j[i];
    }

    ROPOD_4Wheel_kinb_cntr_B.cv2[24] = '\x00';
    ParamGet_ROPOD_4Wheel_kinb_cntr_1102.initialize(ROPOD_4Wheel_kinb_cntr_B.cv2);
    ParamGet_ROPOD_4Wheel_kinb_cntr_1102.initialize_error_codes(0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_kinb_cntr_1102.set_initial_value
      (ROPOD_4_ParameterInitialValue_n);

    // End of Start for MATLABSystem: '<S8>/Get Parameter4'

    // Start for MATLABSystem: '<S8>/Get Parameter5'
    ROPOD_4Wheel_kinb_cntr_DW.obj_aa.isInitialized = 0;
    ROPOD_4Wheel_kinb_cntr_DW.obj_aa.SampleTime = ROPOD_4Wheel_kinb_cntr_P.Tsp;
    ROPOD_4Wheel_kinb_cntr_DW.obj_aa.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_kinb_cntr_B.cv2[i] = tmp_i[i];
    }

    ROPOD_4Wheel_kinb_cntr_B.cv2[24] = '\x00';
    ParamGet_ROPOD_4Wheel_kinb_cntr_1103.initialize(ROPOD_4Wheel_kinb_cntr_B.cv2);
    ParamGet_ROPOD_4Wheel_kinb_cntr_1103.initialize_error_codes(0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_kinb_cntr_1103.set_initial_value
      (ROPOD_4Wh_ParameterInitialValue);

    // End of Start for MATLABSystem: '<S8>/Get Parameter5'

    // Start for MATLABSystem: '<S8>/Get Parameter6'
    ROPOD_4Wheel_kinb_cntr_DW.obj_m2.isInitialized = 0;
    ROPOD_4Wheel_kinb_cntr_DW.obj_m2.SampleTime = ROPOD_4Wheel_kinb_cntr_P.Tsp;
    ROPOD_4Wheel_kinb_cntr_DW.obj_m2.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_kinb_cntr_B.cv2[i] = tmp_h[i];
    }

    ROPOD_4Wheel_kinb_cntr_B.cv2[24] = '\x00';
    ParamGet_ROPOD_4Wheel_kinb_cntr_1104.initialize(ROPOD_4Wheel_kinb_cntr_B.cv2);
    ParamGet_ROPOD_4Wheel_kinb_cntr_1104.initialize_error_codes(0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_kinb_cntr_1104.set_initial_value
      (ROPOD_4_ParameterInitialValue_n);

    // End of Start for MATLABSystem: '<S8>/Get Parameter6'

    // Start for MATLABSystem: '<S8>/Get Parameter7'
    ROPOD_4Wheel_kinb_cntr_DW.obj_d.isInitialized = 0;
    ROPOD_4Wheel_kinb_cntr_DW.obj_d.SampleTime = ROPOD_4Wheel_kinb_cntr_P.Tsp;
    ROPOD_4Wheel_kinb_cntr_DW.obj_d.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_kinb_cntr_B.cv2[i] = tmp_g[i];
    }

    ROPOD_4Wheel_kinb_cntr_B.cv2[24] = '\x00';
    ParamGet_ROPOD_4Wheel_kinb_cntr_1110.initialize(ROPOD_4Wheel_kinb_cntr_B.cv2);
    ParamGet_ROPOD_4Wheel_kinb_cntr_1110.initialize_error_codes(0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_kinb_cntr_1110.set_initial_value
      (ROPOD_4_ParameterInitialValue_n);

    // End of Start for MATLABSystem: '<S8>/Get Parameter7'

    // Start for MATLABSystem: '<S8>/Get Parameter8'
    ROPOD_4Wheel_kinb_cntr_DW.obj_gc.isInitialized = 0;
    ROPOD_4Wheel_kinb_cntr_DW.obj_gc.SampleTime = ROPOD_4Wheel_kinb_cntr_P.Tsp;
    ROPOD_4Wheel_kinb_cntr_DW.obj_gc.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_kinb_cntr_B.cv2[i] = tmp_f[i];
    }

    ROPOD_4Wheel_kinb_cntr_B.cv2[24] = '\x00';
    ParamGet_ROPOD_4Wheel_kinb_cntr_1111.initialize(ROPOD_4Wheel_kinb_cntr_B.cv2);
    ParamGet_ROPOD_4Wheel_kinb_cntr_1111.initialize_error_codes(0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_kinb_cntr_1111.set_initial_value
      (ROPOD_4Wh_ParameterInitialValue);

    // End of Start for MATLABSystem: '<S8>/Get Parameter8'

    // Start for MATLABSystem: '<S8>/Get Parameter9'
    ROPOD_4Wheel_kinb_cntr_DW.obj_c0.isInitialized = 0;
    ROPOD_4Wheel_kinb_cntr_DW.obj_c0.SampleTime = ROPOD_4Wheel_kinb_cntr_P.Tsp;
    ROPOD_4Wheel_kinb_cntr_DW.obj_c0.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_kinb_cntr_B.cv2[i] = tmp_e[i];
    }

    ROPOD_4Wheel_kinb_cntr_B.cv2[24] = '\x00';
    ParamGet_ROPOD_4Wheel_kinb_cntr_1112.initialize(ROPOD_4Wheel_kinb_cntr_B.cv2);
    ParamGet_ROPOD_4Wheel_kinb_cntr_1112.initialize_error_codes(0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_kinb_cntr_1112.set_initial_value
      (ROPOD_4Wh_ParameterInitialValue);

    // End of Start for MATLABSystem: '<S8>/Get Parameter9'

    // Start for MATLABSystem: '<S8>/Get Parameter10'
    ROPOD_4Wheel_kinb_cntr_DW.obj_fc.isInitialized = 0;
    ROPOD_4Wheel_kinb_cntr_DW.obj_fc.SampleTime = ROPOD_4Wheel_kinb_cntr_P.Tsp;
    ROPOD_4Wheel_kinb_cntr_DW.obj_fc.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_kinb_cntr_B.cv2[i] = tmp_d[i];
    }

    ROPOD_4Wheel_kinb_cntr_B.cv2[24] = '\x00';
    ParamGet_ROPOD_4Wheel_kinb_cntr_1109.initialize(ROPOD_4Wheel_kinb_cntr_B.cv2);
    ParamGet_ROPOD_4Wheel_kinb_cntr_1109.initialize_error_codes(0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_kinb_cntr_1109.set_initial_value
      (ROPOD_4Wh_ParameterInitialValue);

    // End of Start for MATLABSystem: '<S8>/Get Parameter10'

    // Start for MATLABSystem: '<S11>/Get Parameter'
    ROPOD_4Wheel_kinb_cntr_DW.obj.isInitialized = 0;
    ROPOD_4Wheel_kinb_cntr_DW.obj.SampleTime = ROPOD_4Wheel_kinb_cntr_P.Tsp;
    ROPOD_4Wheel_kinb_cntr_DW.obj.isInitialized = 1;
    for (i = 0; i < 21; i++) {
      ROPOD_4Wheel_kinb_cntr_B.cv4[i] = tmp_c[i];
    }

    ROPOD_4Wheel_kinb_cntr_B.cv4[21] = '\x00';
    ParamGet_ROPOD_4Wheel_kinb_cntr_551.initialize(ROPOD_4Wheel_kinb_cntr_B.cv4);
    ParamGet_ROPOD_4Wheel_kinb_cntr_551.initialize_error_codes(0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_kinb_cntr_551.set_initial_value
      (ParameterInitial_nc4bpmzdsyxjme);

    // End of Start for MATLABSystem: '<S11>/Get Parameter'

    // Start for MATLABSystem: '<S11>/Get Parameter1'
    ROPOD_4Wheel_kinb_cntr_DW.obj_p.isInitialized = 0;
    ROPOD_4Wheel_kinb_cntr_DW.obj_p.SampleTime = ROPOD_4Wheel_kinb_cntr_P.Tsp;
    ROPOD_4Wheel_kinb_cntr_DW.obj_p.isInitialized = 1;
    for (i = 0; i < 21; i++) {
      ROPOD_4Wheel_kinb_cntr_B.cv4[i] = tmp_b[i];
    }

    ROPOD_4Wheel_kinb_cntr_B.cv4[21] = '\x00';
    ParamGet_ROPOD_4Wheel_kinb_cntr_552.initialize(ROPOD_4Wheel_kinb_cntr_B.cv4);
    ParamGet_ROPOD_4Wheel_kinb_cntr_552.initialize_error_codes(0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_kinb_cntr_552.set_initial_value
      (ParameterInitialV_nc4bpmzdsyxjm);

    // End of Start for MATLABSystem: '<S11>/Get Parameter1'

    // Start for Atomic SubSystem: '<S13>/Subscribe1'
    // Start for MATLABSystem: '<S52>/SourceBlock'
    ROPOD_4Wheel_kinb_cntr_DW.obj_ja.isInitialized = 0;
    ROPOD_4Wheel_kinb_cntr_DW.obj_ja.isInitialized = 1;
    for (i = 0; i < 8; i++) {
      tmp_13[i] = tmp_a[i];
    }

    tmp_13[8] = '\x00';
    Sub_ROPOD_4Wheel_kinb_cntr_528.createSubscriber(tmp_13,
      ROPOD_4Wheel__MessageQueueLen_n);

    // End of Start for MATLABSystem: '<S52>/SourceBlock'
    // End of Start for SubSystem: '<S13>/Subscribe1'

    // Start for Delay: '<S13>/Enabled Delay'
    ROPOD_4Wheel_kinb_cntr_B.EnabledDelay = 0.0;

    // Start for MATLABSystem: '<S11>/Get Parameter2'
    ROPOD_4Wheel_kinb_cntr_DW.obj_o.isInitialized = 0;
    ROPOD_4Wheel_kinb_cntr_DW.obj_o.SampleTime = ROPOD_4Wheel_kinb_cntr_P.Tsp;
    ROPOD_4Wheel_kinb_cntr_DW.obj_o.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_kinb_cntr_B.cv2[i] = tmp_9[i];
    }

    ROPOD_4Wheel_kinb_cntr_B.cv2[24] = '\x00';
    ParamGet_ROPOD_4Wheel_kinb_cntr_664.initialize(ROPOD_4Wheel_kinb_cntr_B.cv2);
    ParamGet_ROPOD_4Wheel_kinb_cntr_664.initialize_error_codes(0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_kinb_cntr_664.set_initial_value
      (ParameterInitialVa_nc4bpmzdsyxj);

    // End of Start for MATLABSystem: '<S11>/Get Parameter2'

    // Start for MATLABSystem: '<S11>/Get Parameter3'
    ROPOD_4Wheel_kinb_cntr_DW.obj_pq.isInitialized = 0;
    ROPOD_4Wheel_kinb_cntr_DW.obj_pq.SampleTime = ROPOD_4Wheel_kinb_cntr_P.Tsp;
    ROPOD_4Wheel_kinb_cntr_DW.obj_pq.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_kinb_cntr_B.cv2[i] = tmp_8[i];
    }

    ROPOD_4Wheel_kinb_cntr_B.cv2[24] = '\x00';
    ParamGet_ROPOD_4Wheel_kinb_cntr_665.initialize(ROPOD_4Wheel_kinb_cntr_B.cv2);
    ParamGet_ROPOD_4Wheel_kinb_cntr_665.initialize_error_codes(0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_kinb_cntr_665.set_initial_value
      (ParameterInitialVal_nc4bpmzdsyx);

    // End of Start for MATLABSystem: '<S11>/Get Parameter3'

    // Start for Atomic SubSystem: '<S1>/Publish'
    // Start for MATLABSystem: '<S22>/SinkBlock'
    ROPOD_4Wheel_kinb_cntr_DW.obj_o2.isInitialized = 0;
    ROPOD_4Wheel_kinb_cntr_DW.obj_o2.isInitialized = 1;
    for (i = 0; i < 14; i++) {
      tmp_12[i] = tmp_7[i];
    }

    tmp_12[14] = '\x00';
    Pub_ROPOD_4Wheel_kinb_cntr_902.createPublisher(tmp_12,
      ROPOD_4Wheel_ki_MessageQueueLen);

    // End of Start for MATLABSystem: '<S22>/SinkBlock'
    // End of Start for SubSystem: '<S1>/Publish'

    // Start for Atomic SubSystem: '<S1>/Publish1'
    // Start for MATLABSystem: '<S23>/SinkBlock'
    ROPOD_4Wheel_kinb_cntr_DW.obj_kt.isInitialized = 0;
    ROPOD_4Wheel_kinb_cntr_DW.obj_kt.isInitialized = 1;
    for (i = 0; i < 14; i++) {
      tmp_12[i] = tmp_6[i];
    }

    tmp_12[14] = '\x00';
    Pub_ROPOD_4Wheel_kinb_cntr_959.createPublisher(tmp_12,
      ROPOD_4Wheel_ki_MessageQueueLen);

    // End of Start for MATLABSystem: '<S23>/SinkBlock'
    // End of Start for SubSystem: '<S1>/Publish1'

    // Start for Atomic SubSystem: '<S1>/Publish2'
    // Start for MATLABSystem: '<S24>/SinkBlock'
    ROPOD_4Wheel_kinb_cntr_DW.obj_k1w.isInitialized = 0;
    ROPOD_4Wheel_kinb_cntr_DW.obj_k1w.isInitialized = 1;
    for (i = 0; i < 14; i++) {
      tmp_12[i] = tmp_5[i];
    }

    tmp_12[14] = '\x00';
    Pub_ROPOD_4Wheel_kinb_cntr_983.createPublisher(tmp_12,
      ROPOD_4Wheel_ki_MessageQueueLen);

    // End of Start for MATLABSystem: '<S24>/SinkBlock'
    // End of Start for SubSystem: '<S1>/Publish2'

    // Start for Atomic SubSystem: '<S1>/Publish3'
    // Start for MATLABSystem: '<S25>/SinkBlock'
    ROPOD_4Wheel_kinb_cntr_DW.obj_dq.isInitialized = 0;
    ROPOD_4Wheel_kinb_cntr_DW.obj_dq.isInitialized = 1;
    for (i = 0; i < 14; i++) {
      tmp_12[i] = tmp_4[i];
    }

    tmp_12[14] = '\x00';
    Pub_ROPOD_4Wheel_kinb_cntr_994.createPublisher(tmp_12,
      ROPOD_4Wheel_ki_MessageQueueLen);

    // End of Start for MATLABSystem: '<S25>/SinkBlock'
    // End of Start for SubSystem: '<S1>/Publish3'

    // Start for Atomic SubSystem: '<S1>/Publish4'
    // Start for MATLABSystem: '<S26>/SinkBlock'
    ROPOD_4Wheel_kinb_cntr_DW.obj_k1.isInitialized = 0;
    ROPOD_4Wheel_kinb_cntr_DW.obj_k1.isInitialized = 1;
    for (i = 0; i < 22; i++) {
      ROPOD_4Wheel_kinb_cntr_B.cv3[i] = tmp_3[i];
    }

    ROPOD_4Wheel_kinb_cntr_B.cv3[22] = '\x00';
    Pub_ROPOD_4Wheel_kinb_cntr_1179.createPublisher(ROPOD_4Wheel_kinb_cntr_B.cv3,
      ROPOD_4Wheel_ki_MessageQueueLen);

    // End of Start for MATLABSystem: '<S26>/SinkBlock'
    // End of Start for SubSystem: '<S1>/Publish4'

    // Start for Atomic SubSystem: '<S1>/Publish5'
    // Start for MATLABSystem: '<S27>/SinkBlock'
    ROPOD_4Wheel_kinb_cntr_DW.obj_du.isInitialized = 0;
    ROPOD_4Wheel_kinb_cntr_DW.obj_du.isInitialized = 1;
    for (i = 0; i < 22; i++) {
      ROPOD_4Wheel_kinb_cntr_B.cv3[i] = tmp_2[i];
    }

    ROPOD_4Wheel_kinb_cntr_B.cv3[22] = '\x00';
    Pub_ROPOD_4Wheel_kinb_cntr_1185.createPublisher(ROPOD_4Wheel_kinb_cntr_B.cv3,
      ROPOD_4Wheel_ki_MessageQueueLen);

    // End of Start for MATLABSystem: '<S27>/SinkBlock'
    // End of Start for SubSystem: '<S1>/Publish5'

    // Start for Atomic SubSystem: '<S1>/Publish6'
    // Start for MATLABSystem: '<S28>/SinkBlock'
    ROPOD_4Wheel_kinb_cntr_DW.obj_cx.isInitialized = 0;
    ROPOD_4Wheel_kinb_cntr_DW.obj_cx.isInitialized = 1;
    for (i = 0; i < 22; i++) {
      ROPOD_4Wheel_kinb_cntr_B.cv3[i] = tmp_1[i];
    }

    ROPOD_4Wheel_kinb_cntr_B.cv3[22] = '\x00';
    Pub_ROPOD_4Wheel_kinb_cntr_1190.createPublisher(ROPOD_4Wheel_kinb_cntr_B.cv3,
      ROPOD_4Wheel_ki_MessageQueueLen);

    // End of Start for MATLABSystem: '<S28>/SinkBlock'
    // End of Start for SubSystem: '<S1>/Publish6'

    // Start for Atomic SubSystem: '<S1>/Publish7'
    // Start for MATLABSystem: '<S29>/SinkBlock'
    ROPOD_4Wheel_kinb_cntr_DW.obj_fm.isInitialized = 0;
    ROPOD_4Wheel_kinb_cntr_DW.obj_fm.isInitialized = 1;
    for (i = 0; i < 22; i++) {
      ROPOD_4Wheel_kinb_cntr_B.cv3[i] = tmp_0[i];
    }

    ROPOD_4Wheel_kinb_cntr_B.cv3[22] = '\x00';
    Pub_ROPOD_4Wheel_kinb_cntr_1206.createPublisher(ROPOD_4Wheel_kinb_cntr_B.cv3,
      ROPOD_4Wheel_ki_MessageQueueLen);

    // End of Start for MATLABSystem: '<S29>/SinkBlock'
    // End of Start for SubSystem: '<S1>/Publish7'

    // Start for MATLABSystem: '<S4>/Coordinate Transformation Conversion'
    ROPOD_4Wheel_kinb_cntr_DW.obj_dx.isInitialized = 0;
    ROPOD_4Wheel_kinb_cntr_DW.obj_dx.isInitialized = 1;

    // Start for Atomic SubSystem: '<S4>/Publish'
    // Start for MATLABSystem: '<S34>/SinkBlock'
    ROPOD_4Wheel_kinb_cntr_DW.obj_hz.isInitialized = 0;
    ROPOD_4Wheel_kinb_cntr_DW.obj_hz.isInitialized = 1;
    for (i = 0; i < 16; i++) {
      tmp_11[i] = tmp[i];
    }

    tmp_11[16] = '\x00';
    Pub_ROPOD_4Wheel_kinb_cntr_349.createPublisher(tmp_11,
      ROPOD_4Wheel_ki_MessageQueueLen);

    // End of Start for MATLABSystem: '<S34>/SinkBlock'
    // End of Start for SubSystem: '<S4>/Publish'

    // InitializeConditions for Delay: '<S13>/Enabled Delay'
    ROPOD_4Wheel_kinb_cntr_DW.EnabledDelay_DSTATE =
      ROPOD_4Wheel_kinb_cntr_P.EnabledDelay_InitialCondition;

    // InitializeConditions for UnitDelay: '<S46>/Delay Input2'
    //
    //  Block description for '<S46>/Delay Input2':
    //
    //   Store in Global RAM

    ROPOD_4Wheel_kinb_cntr_DW.DelayInput2_DSTATE =
      ROPOD_4Wheel_kinb_cntr_P.DelayInput2_InitialCondition;

    // InitializeConditions for UnitDelay: '<S47>/Delay Input2'
    //
    //  Block description for '<S47>/Delay Input2':
    //
    //   Store in Global RAM

    ROPOD_4Wheel_kinb_cntr_DW.DelayInput2_DSTATE_a =
      ROPOD_4Wheel_kinb_cntr_P.DelayInput2_InitialCondition_e;

    // InitializeConditions for UnitDelay: '<S48>/Delay Input2'
    //
    //  Block description for '<S48>/Delay Input2':
    //
    //   Store in Global RAM

    ROPOD_4Wheel_kinb_cntr_DW.DelayInput2_DSTATE_e =
      ROPOD_4Wheel_kinb_cntr_P.DelayInput2_InitialCondition_eo;

    // InitializeConditions for DiscreteIntegrator: '<S3>/Discrete-Time Integrator' 
    ROPOD_4Wheel_kinb_cntr_DW.DiscreteTimeIntegrator_DSTATE[0] =
      ROPOD_4Wheel_kinb_cntr_P.DiscreteTimeIntegrator_IC;
    ROPOD_4Wheel_kinb_cntr_DW.DiscreteTimeIntegrator_DSTATE[1] =
      ROPOD_4Wheel_kinb_cntr_P.DiscreteTimeIntegrator_IC;
    ROPOD_4Wheel_kinb_cntr_DW.DiscreteTimeIntegrator_DSTATE[2] =
      ROPOD_4Wheel_kinb_cntr_P.DiscreteTimeIntegrator_IC;

    // SystemInitialize for Atomic SubSystem: '<S13>/Subscribe1'
    // SystemInitialize for Enabled SubSystem: '<S52>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S56>/Out1'
    ROPOD_4Wheel_kinb_cntr_B.In1 = ROPOD_4Wheel_kinb_cntr_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S52>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<S13>/Subscribe1'
  }
}

// Model terminate function
void ROPOD_4Wheel_kinb_cntr_terminate(void)
{
  // Terminate for S-Function (ECAT_Interface): '<S5>/ECAT_Interface'
  // Level2 S-Function Block: '<S5>/ECAT_Interface' (ECAT_Interface)
  {
    SimStruct *rts = ROPOD_4Wheel_kinb_cntr_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  // Start for MATLABSystem: '<S9>/Get Parameter1'
  if (ROPOD_4Wheel_kinb_cntr_DW.obj_b.isInitialized == 1) {
    ROPOD_4Wheel_kinb_cntr_DW.obj_b.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S9>/Get Parameter1'

  // Start for MATLABSystem: '<S9>/Get Parameter3'
  if (ROPOD_4Wheel_kinb_cntr_DW.obj_l.isInitialized == 1) {
    ROPOD_4Wheel_kinb_cntr_DW.obj_l.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S9>/Get Parameter3'

  // Start for MATLABSystem: '<S9>/Get Parameter4'
  if (ROPOD_4Wheel_kinb_cntr_DW.obj_c.isInitialized == 1) {
    ROPOD_4Wheel_kinb_cntr_DW.obj_c.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S9>/Get Parameter4'

  // Start for MATLABSystem: '<S9>/Get Parameter5'
  if (ROPOD_4Wheel_kinb_cntr_DW.obj_a.isInitialized == 1) {
    ROPOD_4Wheel_kinb_cntr_DW.obj_a.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S9>/Get Parameter5'

  // Terminate for S-Function (ec_ROPOD_SmartWheel): '<S41>/S-Function'
  // Level2 S-Function Block: '<S41>/S-Function' (ec_ROPOD_SmartWheel)
  {
    SimStruct *rts = ROPOD_4Wheel_kinb_cntr_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  // Terminate for S-Function (ec_ROPOD_SmartWheel): '<S42>/S-Function'
  // Level2 S-Function Block: '<S42>/S-Function' (ec_ROPOD_SmartWheel)
  {
    SimStruct *rts = ROPOD_4Wheel_kinb_cntr_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  // Terminate for S-Function (ec_ROPOD_SmartWheel): '<S43>/S-Function'
  // Level2 S-Function Block: '<S43>/S-Function' (ec_ROPOD_SmartWheel)
  {
    SimStruct *rts = ROPOD_4Wheel_kinb_cntr_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  // Terminate for S-Function (ec_ROPOD_SmartWheel): '<S44>/S-Function'
  // Level2 S-Function Block: '<S44>/S-Function' (ec_ROPOD_SmartWheel)
  {
    SimStruct *rts = ROPOD_4Wheel_kinb_cntr_M->childSfunctions[4];
    sfcnTerminate(rts);
  }

  // Start for MATLABSystem: '<S9>/Get Parameter'
  if (ROPOD_4Wheel_kinb_cntr_DW.obj_f.isInitialized == 1) {
    ROPOD_4Wheel_kinb_cntr_DW.obj_f.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S9>/Get Parameter'

  // Start for MATLABSystem: '<S9>/Get Parameter2'
  if (ROPOD_4Wheel_kinb_cntr_DW.obj_g.isInitialized == 1) {
    ROPOD_4Wheel_kinb_cntr_DW.obj_g.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S9>/Get Parameter2'

  // Start for MATLABSystem: '<S8>/Get Parameter'
  if (ROPOD_4Wheel_kinb_cntr_DW.obj_ft.isInitialized == 1) {
    ROPOD_4Wheel_kinb_cntr_DW.obj_ft.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S8>/Get Parameter'

  // Start for MATLABSystem: '<S8>/Get Parameter11'
  if (ROPOD_4Wheel_kinb_cntr_DW.obj_e.isInitialized == 1) {
    ROPOD_4Wheel_kinb_cntr_DW.obj_e.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S8>/Get Parameter11'

  // Start for MATLABSystem: '<S8>/Get Parameter12'
  if (ROPOD_4Wheel_kinb_cntr_DW.obj_ps.isInitialized == 1) {
    ROPOD_4Wheel_kinb_cntr_DW.obj_ps.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S8>/Get Parameter12'

  // Start for MATLABSystem: '<S8>/Get Parameter13'
  if (ROPOD_4Wheel_kinb_cntr_DW.obj_h.isInitialized == 1) {
    ROPOD_4Wheel_kinb_cntr_DW.obj_h.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S8>/Get Parameter13'

  // Start for MATLABSystem: '<S8>/Get Parameter14'
  if (ROPOD_4Wheel_kinb_cntr_DW.obj_k.isInitialized == 1) {
    ROPOD_4Wheel_kinb_cntr_DW.obj_k.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S8>/Get Parameter14'

  // Start for MATLABSystem: '<S8>/Get Parameter15'
  if (ROPOD_4Wheel_kinb_cntr_DW.obj_kj.isInitialized == 1) {
    ROPOD_4Wheel_kinb_cntr_DW.obj_kj.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S8>/Get Parameter15'

  // Start for MATLABSystem: '<S8>/Get Parameter16'
  if (ROPOD_4Wheel_kinb_cntr_DW.obj_i.isInitialized == 1) {
    ROPOD_4Wheel_kinb_cntr_DW.obj_i.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S8>/Get Parameter16'

  // Start for MATLABSystem: '<S8>/Get Parameter17'
  if (ROPOD_4Wheel_kinb_cntr_DW.obj_m.isInitialized == 1) {
    ROPOD_4Wheel_kinb_cntr_DW.obj_m.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S8>/Get Parameter17'

  // Start for MATLABSystem: '<S8>/Get Parameter1'
  if (ROPOD_4Wheel_kinb_cntr_DW.obj_ei.isInitialized == 1) {
    ROPOD_4Wheel_kinb_cntr_DW.obj_ei.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S8>/Get Parameter1'

  // Start for MATLABSystem: '<S8>/Get Parameter2'
  if (ROPOD_4Wheel_kinb_cntr_DW.obj_j.isInitialized == 1) {
    ROPOD_4Wheel_kinb_cntr_DW.obj_j.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S8>/Get Parameter2'

  // Start for MATLABSystem: '<S8>/Get Parameter3'
  if (ROPOD_4Wheel_kinb_cntr_DW.obj_is.isInitialized == 1) {
    ROPOD_4Wheel_kinb_cntr_DW.obj_is.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S8>/Get Parameter3'

  // Start for MATLABSystem: '<S8>/Get Parameter4'
  if (ROPOD_4Wheel_kinb_cntr_DW.obj_kd.isInitialized == 1) {
    ROPOD_4Wheel_kinb_cntr_DW.obj_kd.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S8>/Get Parameter4'

  // Start for MATLABSystem: '<S8>/Get Parameter5'
  if (ROPOD_4Wheel_kinb_cntr_DW.obj_aa.isInitialized == 1) {
    ROPOD_4Wheel_kinb_cntr_DW.obj_aa.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S8>/Get Parameter5'

  // Start for MATLABSystem: '<S8>/Get Parameter6'
  if (ROPOD_4Wheel_kinb_cntr_DW.obj_m2.isInitialized == 1) {
    ROPOD_4Wheel_kinb_cntr_DW.obj_m2.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S8>/Get Parameter6'

  // Start for MATLABSystem: '<S8>/Get Parameter7'
  if (ROPOD_4Wheel_kinb_cntr_DW.obj_d.isInitialized == 1) {
    ROPOD_4Wheel_kinb_cntr_DW.obj_d.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S8>/Get Parameter7'

  // Start for MATLABSystem: '<S8>/Get Parameter8'
  if (ROPOD_4Wheel_kinb_cntr_DW.obj_gc.isInitialized == 1) {
    ROPOD_4Wheel_kinb_cntr_DW.obj_gc.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S8>/Get Parameter8'

  // Start for MATLABSystem: '<S8>/Get Parameter9'
  if (ROPOD_4Wheel_kinb_cntr_DW.obj_c0.isInitialized == 1) {
    ROPOD_4Wheel_kinb_cntr_DW.obj_c0.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S8>/Get Parameter9'

  // Start for MATLABSystem: '<S8>/Get Parameter10'
  if (ROPOD_4Wheel_kinb_cntr_DW.obj_fc.isInitialized == 1) {
    ROPOD_4Wheel_kinb_cntr_DW.obj_fc.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S8>/Get Parameter10'

  // Start for MATLABSystem: '<S11>/Get Parameter'
  if (ROPOD_4Wheel_kinb_cntr_DW.obj.isInitialized == 1) {
    ROPOD_4Wheel_kinb_cntr_DW.obj.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S11>/Get Parameter'

  // Start for MATLABSystem: '<S11>/Get Parameter1'
  if (ROPOD_4Wheel_kinb_cntr_DW.obj_p.isInitialized == 1) {
    ROPOD_4Wheel_kinb_cntr_DW.obj_p.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S11>/Get Parameter1'

  // Terminate for Atomic SubSystem: '<S13>/Subscribe1'
  // Start for MATLABSystem: '<S52>/SourceBlock'
  if (ROPOD_4Wheel_kinb_cntr_DW.obj_ja.isInitialized == 1) {
    ROPOD_4Wheel_kinb_cntr_DW.obj_ja.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S52>/SourceBlock'
  // End of Terminate for SubSystem: '<S13>/Subscribe1'

  // Start for MATLABSystem: '<S11>/Get Parameter2'
  if (ROPOD_4Wheel_kinb_cntr_DW.obj_o.isInitialized == 1) {
    ROPOD_4Wheel_kinb_cntr_DW.obj_o.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S11>/Get Parameter2'

  // Start for MATLABSystem: '<S11>/Get Parameter3'
  if (ROPOD_4Wheel_kinb_cntr_DW.obj_pq.isInitialized == 1) {
    ROPOD_4Wheel_kinb_cntr_DW.obj_pq.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S11>/Get Parameter3'

  // Terminate for Atomic SubSystem: '<S1>/Publish'
  // Start for MATLABSystem: '<S22>/SinkBlock'
  if (ROPOD_4Wheel_kinb_cntr_DW.obj_o2.isInitialized == 1) {
    ROPOD_4Wheel_kinb_cntr_DW.obj_o2.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S22>/SinkBlock'
  // End of Terminate for SubSystem: '<S1>/Publish'

  // Terminate for Atomic SubSystem: '<S1>/Publish1'
  // Start for MATLABSystem: '<S23>/SinkBlock'
  if (ROPOD_4Wheel_kinb_cntr_DW.obj_kt.isInitialized == 1) {
    ROPOD_4Wheel_kinb_cntr_DW.obj_kt.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S23>/SinkBlock'
  // End of Terminate for SubSystem: '<S1>/Publish1'

  // Terminate for Atomic SubSystem: '<S1>/Publish2'
  // Start for MATLABSystem: '<S24>/SinkBlock'
  if (ROPOD_4Wheel_kinb_cntr_DW.obj_k1w.isInitialized == 1) {
    ROPOD_4Wheel_kinb_cntr_DW.obj_k1w.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S24>/SinkBlock'
  // End of Terminate for SubSystem: '<S1>/Publish2'

  // Terminate for Atomic SubSystem: '<S1>/Publish3'
  // Start for MATLABSystem: '<S25>/SinkBlock'
  if (ROPOD_4Wheel_kinb_cntr_DW.obj_dq.isInitialized == 1) {
    ROPOD_4Wheel_kinb_cntr_DW.obj_dq.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S25>/SinkBlock'
  // End of Terminate for SubSystem: '<S1>/Publish3'

  // Terminate for Atomic SubSystem: '<S1>/Publish4'
  // Start for MATLABSystem: '<S26>/SinkBlock'
  if (ROPOD_4Wheel_kinb_cntr_DW.obj_k1.isInitialized == 1) {
    ROPOD_4Wheel_kinb_cntr_DW.obj_k1.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S26>/SinkBlock'
  // End of Terminate for SubSystem: '<S1>/Publish4'

  // Terminate for Atomic SubSystem: '<S1>/Publish5'
  // Start for MATLABSystem: '<S27>/SinkBlock'
  if (ROPOD_4Wheel_kinb_cntr_DW.obj_du.isInitialized == 1) {
    ROPOD_4Wheel_kinb_cntr_DW.obj_du.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S27>/SinkBlock'
  // End of Terminate for SubSystem: '<S1>/Publish5'

  // Terminate for Atomic SubSystem: '<S1>/Publish6'
  // Start for MATLABSystem: '<S28>/SinkBlock'
  if (ROPOD_4Wheel_kinb_cntr_DW.obj_cx.isInitialized == 1) {
    ROPOD_4Wheel_kinb_cntr_DW.obj_cx.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S28>/SinkBlock'
  // End of Terminate for SubSystem: '<S1>/Publish6'

  // Terminate for Atomic SubSystem: '<S1>/Publish7'
  // Start for MATLABSystem: '<S29>/SinkBlock'
  if (ROPOD_4Wheel_kinb_cntr_DW.obj_fm.isInitialized == 1) {
    ROPOD_4Wheel_kinb_cntr_DW.obj_fm.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S29>/SinkBlock'
  // End of Terminate for SubSystem: '<S1>/Publish7'

  // Start for MATLABSystem: '<S4>/Coordinate Transformation Conversion'
  if (ROPOD_4Wheel_kinb_cntr_DW.obj_dx.isInitialized == 1) {
    ROPOD_4Wheel_kinb_cntr_DW.obj_dx.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S4>/Coordinate Transformation Conversion'

  // Terminate for Atomic SubSystem: '<S4>/Publish'
  // Start for MATLABSystem: '<S34>/SinkBlock'
  if (ROPOD_4Wheel_kinb_cntr_DW.obj_hz.isInitialized == 1) {
    ROPOD_4Wheel_kinb_cntr_DW.obj_hz.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S34>/SinkBlock'
  // End of Terminate for SubSystem: '<S4>/Publish'
}

//
// File trailer for generated code.
//
// [EOF]
//
