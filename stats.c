/***********************************************************************
 *  Stats.c
 *  Implementation of statistics from a bunch of reading from a sensor
 ***********************************************************************/
  
#include "stdio.h"
#include "stats.h"
#include "math.h"

struct Stats compute_statistics(const float* numberset, int setlength)
{
	struct Stats Statistics_st;
	int i;
	Statistics_st.min = numberset[0];
	Statistics_st.max = numberset[0];
	Statistics_st.average = 0.0;
	Statistics_st.Totalsum = 0.0;
	
	if((numberset == NULL) || (setlength == NULL_VALUE))
	{
	   Statistics_st.min = NAN;
	   Statistics_st.max = NAN;
	   Statistics_st.average = NAN;
           Statistics_st.Totalsum = NAN;
	}
	else
	{
	   for(i=0; i<setlength; i++)
	   {
		Statistics_st.Totalsum += numberset[i]; /*Calculating the total sum*/
		/*Fetch the minimum value*/
		if(Statistics_st.min > numberset[i])
		{
		   Statistics_st.min = numberset[i];
		}
		/*Fetch the maximum value*/
		if (Statistics_st.max < numberset[i])
		{
	           Statistics_st.max = numberset[i];
		}
	   }
	
	    /* calculating the average of the elements*/
	    Statistics_st.average = Statistics_st.Totalsum/setlength; 
	}
	return Statistics_st;	
}


