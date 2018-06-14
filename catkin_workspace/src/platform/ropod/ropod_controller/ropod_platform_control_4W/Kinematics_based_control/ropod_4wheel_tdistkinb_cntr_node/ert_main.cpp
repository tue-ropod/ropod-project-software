//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: ert_main.cpp
//
// Code generated for Simulink model 'ROPOD_4Wheel_Tdistkinb_cntr_node'.
//
// Model version                  : 1.254
// Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
// C/C++ source code generated on : Wed Jun 13 17:10:27 2018
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Linux 64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include <stdio.h>
#include <stdlib.h>
#include "ROPOD_4Wheel_Tdistkinb_cntr_node.h"
#include "ROPOD_4Wheel_Tdistkinb_cntr_node_private.h"
#include "rtwtypes.h"
#include "limits.h"
#include "rt_nonfinite.h"
#include "linuxinitialize.h"
#define UNUSED(x)                      x = x

// Function prototype declaration
void exitFcn(int sig);
void *terminateTask(void *arg);
void *baseRateTask(void *arg);
void *subrateTask(void *arg);
volatile boolean_T stopRequested = false;
volatile boolean_T runModel = true;
sem_t stopSem;
sem_t baserateTaskSem;
pthread_t schedulerThread;
pthread_t baseRateThread;
unsigned long threadJoinStatus[8];
int terminatingmodel = 0;
void *baseRateTask(void *arg)
{
  runModel = (rtmGetErrorStatus(ROPOD_4Wheel_Tdistkinb_cntr_node_M) == (NULL)) &&
    !rtmGetStopRequested(ROPOD_4Wheel_Tdistkinb_cntr_node_M);
  while (runModel) {
    sem_wait(&baserateTaskSem);
    ROPOD_4Wheel_Tdistkinb_cntr_node_step();

    // Get model outputs here
    stopRequested = !((rtmGetErrorStatus(ROPOD_4Wheel_Tdistkinb_cntr_node_M) ==
                       (NULL)) && !rtmGetStopRequested
                      (ROPOD_4Wheel_Tdistkinb_cntr_node_M));
    runModel = !stopRequested;
  }

  runModel = 0;
  terminateTask(arg);
  pthread_exit((void *)0);
  return NULL;
}

void exitFcn(int sig)
{
  UNUSED(sig);
  rtmSetErrorStatus(ROPOD_4Wheel_Tdistkinb_cntr_node_M, "stopping the model");
}

void *terminateTask(void *arg)
{
  UNUSED(arg);
  terminatingmodel = 1;

  {
    runModel = 0;
  }

  // Disable rt_OneStep() here

  // Terminate model
  ROPOD_4Wheel_Tdistkinb_cntr_node_terminate();
  sem_post(&stopSem);
  return NULL;
}

int main(int argc, char **argv)
{
  UNUSED(argc);
  UNUSED(argv);
  void slros_node_init(int argc, char** argv);
  slros_node_init(argc, argv);
  rtmSetErrorStatus(ROPOD_4Wheel_Tdistkinb_cntr_node_M, 0);

  // Initialize model
  ROPOD_4Wheel_Tdistkinb_cntr_node_initialize();

  // Call RTOS Initialization function
  myRTOSInit(0.001, 0);

  // Wait for stop semaphore
  sem_wait(&stopSem);
  return 0;
}

//
// File trailer for generated code.
//
// [EOF]
//
