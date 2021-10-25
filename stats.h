/***********************************************************************
 *  Stats.h
 *  Implementation of statistics from a bunch of reading from a sensor
 ***********************************************************************/

#include "stdio.h"
struct Stats compute_statistics(const float* numberset, int setlength);

typedef struct 
{
	float min;             /*minimum of the array*/
	float max;             /*maximum of the array*/
	float average;         /*average of the array*/
	float Totalsum;        /*sum of the array*/
} Stats;

typedef void (*alerter_funcptr)();
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats);

extern int emailAlertCallCount;
extern int ledAlertCallCount;
