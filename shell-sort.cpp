//============================================================================
// Name        : shell-sort.cpp
// Author      : 
// Date        :
// Copyright   : 
// Description : Implementation of shell sort in C++
//============================================================================

#include "sort.h"
#include <iostream>

void
ShellSort::sort(int A[], int size)
{
  /* Complete this function with the implementation of shell sort algorithm 
  Record number of comparisons in variable num_cmps of class Sort
  */
	for(int i = size/2; i>= 1; i/=2)
	{
		for(int j=0;j<=size-i-1; j++)
		{
			if(A[j]>A[j+i])
			{
				int n = j+i;
				bool flag = 1;
				while(flag)
				{
					flag = 0;
					while(n>=i)
					{
						if(A[n-i]>A[n])
						{
							int temp = A[n];
							A[n] = A[n-i];
							A[n-i]= temp;
							flag = 1;
						}	
						n-=i;
					}
				}	
			}	
		}	
	}	
}
