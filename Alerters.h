/***********************************************************************
 *  ALERTERS.h
 *  Implementation of statistics from a bunch of reading from a sensor
 *  Author: bac2kor
 ***********************************************************************/
#ifndef ALERTERS_H_
#define ALERTERS_H_

/*Declared to resolve compilation errors from the Stats_test.cpp file---- functionality not implemented as logic is not clear*/

extern int ledAlertCallCount;
extern int emailAlertCallCount;

#define NUM_ALERTS 2
typedef void (*alerter_funcptr[NUM_ALERTS])(void);
extern void check_and_alert(float maxThreshold, alerter_funcptr alerters, struct Stats computedStats);

#endif
