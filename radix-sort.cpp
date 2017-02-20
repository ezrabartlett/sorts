//============================================================================
// Name        : radix-sort.cpp
// Author      : 
// Date        :
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
			bucket[(A[i]%key)/(key/10)].push_back(A[i]);
		}
		int m = 0;
		
		if(bucket[0].size()==size){flag = 0;}
		
		for(int i = 0; i<10; i++)
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
