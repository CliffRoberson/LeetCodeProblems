#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	int maxSubArray(vector<int>& nums) 
	{
		int biggestSum = INT_MIN;
		for (int i = 0; i < nums.size(); i++)
		{
			int runningSum = nums[i];
			if (runningSum > biggestSum)
				biggestSum = runningSum;

			for (int k = i+1; k < nums.size(); k++)
			{
				runningSum += nums[k];
				if (runningSum > biggestSum)
					biggestSum = runningSum;
			}
		}
		return biggestSum;
	}
};