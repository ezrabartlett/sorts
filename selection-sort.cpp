//============================================================================
// Name        : selection-sort.cpp
// Author      : 
// Date        :
// Copyright   : 
// Description : Implementation of selection sort in C++
//============================================================================

#include "sort.h"
#include <iostream>

void
SelectionSort::sort(int A[], int size)				// main entry point
{
  /* Complete this function with the implementation of selection sort algorithm 
  Record number of comparisons in variable num_cmps of class Sort
  */
  for(int i = size-1; i>=0 ; i--)
  {
	  int index = 0;
	  for(int j = 0; j<=i; j++)
		{
			if(A[j]>A[index]){
				index = j;
			}
	  }
	  int temp = A[i];
	  A[i] = A[index];
	  A[index]=temp;
  }
}
