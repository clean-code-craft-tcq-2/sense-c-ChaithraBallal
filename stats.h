/***********************************************************************
 *  Stats.h
 *  Implementation of statistics from a bunch of reading from a sensor
 ***********************************************************************/
#ifndef STATS_H_
#define STATS_H_

#include "stdio.h"
#include "math.h"

struct Stats
{
	float min;             /*minimum of the array*/
	float max;             /*maximum of the array*/
	float average;         /*average of the array*/
	float Totalsum;        /*sum of the array*/
};

struct Stats compute_statistics(const float* numberset, int setlength);

/*declarations related to TestCase */
#define NUM_ALERTS 2

typedef void (*alerter_Funcptr[NUM_ALERTS](void);
	     
void check_and_alert(float maxThreshold, alerter_Funcptr alerters, struct Stats computedStats);
void emailAlerter(void);
void ledAlerter(void);
	      
extern int emailAlertCallCount;
extern int ledAlertCallCount;

#endif
