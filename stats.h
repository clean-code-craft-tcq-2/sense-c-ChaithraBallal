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

#define NULL_VALUE 0
#define NULL_PTR (void*)0

#endif
