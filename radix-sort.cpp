//============================================================================
// Name        : radix-sort.cpp
// Author      : Ezra Bartlett
// Date        : 2/19/17
// Copyright   : 
// Description : Implementation of radix sort in C++
//============================================================================

#include "sort.h"
#include <iostream>
#include <vector>
void
RadixSort::sort(int A[], int size)
{
  /*
     Complete this function with the implementation of radix sort
     algorithm.
  */
	std::vector<int> bucket[10];
	bool flag = 1;
	int key = 10;
	while(flag)
	{
		for(int i = 0; i<size; i++)
		{
			bucket[(A[i]%key)/(key/10)].push_back(A[i]);//inserts the element into the correct bucket
		}
		int m = 0;
		
		if(bucket[0].size()==size){flag = 0;}//if all elements are in bucket zero, the array is sorted
			//we can break out of the loop in that case.
		
		for(int i = 0; i<10; i++)//this for loop unloads the buckets in the correct orde
		{
			for(int j = 0; j<bucket[i].size();j++)
			{
				A[m]=bucket[i].at(j);
				m++;
			}
			bucket[i].clear();
		}
		key*=10;
	}  
}
