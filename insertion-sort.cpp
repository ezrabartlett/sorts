//============================================================================
// Name        : insertion-sort.cpp
// Author      : Ezra Bartlett
// Date        : 2/19/17
// Copyright   : 
// Description : Implementation of insertion sort in C++
//============================================================================

#include "sort.h"
#include "iostream"

void
InsertionSort::sort(int A[], int size)				// main entry point
{
	int comparisons = 0;
  for(int i = 0; i< size; i++)//goes through the entire array
  {
	int j = i, temp;
	while(comparisons++,A[j]<A[j-1])//switches the current index with 
		//the previous one "inserting" the element into its correct position
	{
		temp = A[j-1];
		A[j-1]=A[j];
		A[j]=temp;
		j--;
	}	
  }
  num_cmps = comparisons;
}
