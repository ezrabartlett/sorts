//============================================================================
// Name        : insertion-sort.cpp
// Author      : 
// Date        :
// Copyright   : 
// Description : Implementation of insertion sort in C++
//============================================================================

#include "sort.h"
#include "iostream"

void
InsertionSort::sort(int A[], int size)				// main entry point
{
  for(int i = 0; i< size; i++)
  {
	int j = i, temp;
	while(A[j]<A[j-1])
	{
		temp = A[j-1];
		A[j-1]=A[j];
		A[j]=temp;
		j--;
	}	
  }
}
