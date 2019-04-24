#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	int peakIndexInMountainArray(vector<int>& A) 
	{
		int max = 0;
		for (int i = 1; i < A.size() - 1; i++)
		{
			if (A[i] > max)
			{
				max = A[i];
				if (A[i + 1] < A[i])
				{
					return i;
				}
			}
		}

	}
};