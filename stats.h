/***********************************************************************
 *  Stats.h
 *  Implementation of statistics from a bunch of reading from a sensor
 ***********************************************************************/

#include "stdio.h"
#include "math.h"

struct Stats compute_statistics(const float* numberset, int setlength);

typedef struct 
{
	float min;             /*minimum of the array*/
	float max;             /*maximum of the array*/
	float average;         /*average of the array*/
	float Totalsum;        /*sum of the array*/
} Stats_st;


