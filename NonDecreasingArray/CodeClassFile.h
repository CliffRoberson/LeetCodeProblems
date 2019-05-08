#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	bool checkPossibility(vector<int>& nums)
	{
		bool decrease = false;
		int curNum = nums[0];
		int max = INT_MIN;
		for (int i = 0; i < nums.size(); i++)
		{
			int num = nums[i];
			if (num < curNum && decrease == true)
				return false;
			else if (decrease == true && num < max)
				return false;
			else if (num < curNum)
			{
				curNum = num;
				decrease = true;
			}
			else
			{
				curNum = num;
			}

			if (num > max)
				max = num;
		}
		return true;
	}
};