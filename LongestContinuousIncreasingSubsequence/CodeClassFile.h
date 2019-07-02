#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	int findLengthOfLCIS(vector<int>& nums) 
	{
		if (nums.size() == 0)
			return 0;
		
		int maxLength = 1;
		int curLength = 1;
		for (int i = 0; i < nums.size() - 1; i++)
		{
			if (nums[i] < nums[i + 1])
			{
				curLength++;
			}
			else
			{
				if (maxLength < curLength)
					maxLength = curLength;
				curLength = 1;
			}
		}

		if (maxLength < curLength)
			maxLength = curLength;

		return maxLength;

	}
};