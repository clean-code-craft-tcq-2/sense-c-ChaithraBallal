/***********************************************************************
 *  Stats.c
 *  Implementation of statistics from a bunch of reading from a sensor
 ***********************************************************************/
  
#include "stdio.h"
#include "stats.h"

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
		S.Totalsum += numberset[i];
		
		if(S.min > numberset[i])
		{
			S.min = numberset[i];
		}
		
		if (S.max < numberset[i])
		{
			S.max = numberset[i];
		}
	}
	
	S.average = S.Totalsum/setlength;
	return S;	
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
