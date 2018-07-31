//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: rtwtypes.h
//
// Code generated for Simulink model 'ROPOD_4Wheel_Tdistkinb_cntr'.
//
// Model version                  : 1.263
// Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
// C/C++ source code generated on : Mon Jul 23 15:41:53 2018
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Linux 64)
// Code generation objectives: Unspecified
// Validation result: Not run
//

#ifndef RTWTYPES_H
#define RTWTYPES_H
#include "tmwtypes.h"
#include "simstruc_types.h"
#ifndef POINTER_T
# define POINTER_T

typedef void * pointer_T;

#endif

// Logical type definitions
#if (!defined(__cplusplus))
#  ifndef false
#   define false                       (0U)
#  endif

#  ifndef true
#   define true                        (1U)
#  endif
#endif

#ifndef INT64_T
#define INT64_T

typedef long int64_T;

#endif

#ifndef UINT64_T
#define UINT64_T

typedef unsigned long uint64_T;

#endif

//===========================================================================*
//  Additional complex number type definitions                                           *
// ===========================================================================
#ifndef CINT64_T
#define CINT64_T

typedef struct {
  int64_T re;
  int64_T im;
} cint64_T;

#endif

#ifndef CUINT64_T
#define CUINT64_T

typedef struct {
  uint64_T re;
  uint64_T im;
} cuint64_T;

#endif
#endif                                 // RTWTYPES_H

//
// File trailer for generated code.
//
// [EOF]
//