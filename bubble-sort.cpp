//============================================================================
// Name        : bubble-sort.cpp
// Author      : 
// Date        :
// Copyright   : 
// Description : Implementation of bubble sort in C++
//============================================================================

#include "sort.h"

void 
BubbleSort::sort(int A[], int size)			// main entry point
{
  /* Complete this function with the implementation of bubble sort algorithm 
     Record number of comparisons in variable num_cmps of class Sort
  */
	bool flag = 1, iterations = 1;
	while(flag)
	{
		flag = 0;
		for(int i = 0; i<size-iterations; i++)
		{
			if(A[i]>A[i+1])
			{
				int temp = A[i+1];
				A[i+1] = A[i];
				A[i] = temp;
				flag = 1;
			}	
		}	
	}	
}
