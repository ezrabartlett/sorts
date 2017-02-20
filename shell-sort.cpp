//============================================================================
// Name        : shell-sort.cpp
// Author      : Ezra Bartlett
// Date        : 2/19/17
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
  int comparisons = 0;
	for(int i = size/2; i>= 1; i/=2)
	{
		for(int j=0;j<=size-i-1; j++)
		{
			if(comparisons++, A[j]>A[j+i])
			{
				int n = j+i;
				bool flag = 1;
				while(flag)
				{
					flag = 0;
					while(n>=i)//goes through the current key "i" and sorts the array in those increments
					{
						if(comparisons++, A[n-i]>A[n])//switches the appropriate numbers so that the chain is sorted.
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
	num_cmps = comparisons;
}
