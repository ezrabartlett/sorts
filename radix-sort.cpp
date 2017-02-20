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
	int key = 10;//Key used to determine which digit to look at.
	int small = 0;
	for(int i = 0; i < size; i++)//finds smalles value below zero;
	{
		if(A[i]<small){small=A[i];}
	}
	if(small<0)//"shift" all numbers in a so that there are no negative numbers
	{	
		for(int i = 0; i < size; i++)
		{
			A[i]+=abs(small);
		}
	}	
	while(flag)
	{
		for(int i = 0; i<size; i++)
		{
			
			bucket[(A[i]%key)/(key/10)].push_back(A[i]);//inserts the element into the correct bucket
		}
		int m = 0;
		
		if(bucket[0].size()==size){flag = 0;}//if all elements are in bucket zero, the array is sorted
			//we can break out of the loop in that case.
		
		for(int i = 0; i<10; i++)//This nested for loop unloads the buckets in the correct order
		{
			for(int j = 0; j<bucket[i].size();j++)
			{
				A[m]=bucket[i].at(j);
				m++;
			}
			bucket[i].clear();
		}
		key*=10;//Sets the new key
	}
	if(small<0)
	{
		for(int i = 0; i < size; i++)//shifts the numbers in the array back to normal
		{
			A[i]-=abs(small);
		}
	}	
}
