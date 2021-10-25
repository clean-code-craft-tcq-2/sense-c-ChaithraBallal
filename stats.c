/***********************************************************************
 *  Stats.c
 *  Implementation of statistics from a bunch of reading from a sensor
 ***********************************************************************/
  
#include "stdio.h"
#include "stats.h"
#include "math.h"
struct Stats compute_statistics(const float* numberset, int setlength)
{
	struct Stats S;
	int i;
	S.min = numberset[0];
	S.max = numberset[0];
	S.average = 0.0;
	S.Totalsum = 0.0;
	
	for(i=0; i<setlength; i++)
	{
		S.Totalsum += numberset[i]; /*Calculating the total sum*/
		/*Fetch the minimum value*/
		if(S.min > numberset[i])
		{
		   S.min = numberset[i];
		}
		/*Fetch the maximum value*/
		if (S.max < numberset[i])
		{
	           S.max = numberset[i];
		}
	}
	/* calculating the average of the elements*/
	S.average = S.Totalsum/setlength; 
	return S;	
}

