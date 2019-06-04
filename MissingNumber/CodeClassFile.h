#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	int missingNumber(vector<int>& nums) {
		int inputSize = nums.size();
		int expectedSum = 0;
		for (int i = 0; i < inputSize + 1; i++)
		{
			expectedSum += i;
		}

		int actualSum = 0;
		for (int i = 0; i < nums.size(); i++)
		{
			actualSum += nums[i];
		}

		return expectedSum - actualSum;
	}
};