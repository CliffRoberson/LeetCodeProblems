#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	int removeDuplicates(vector<int>& nums) 
	{
		if (nums.size() == 0)
		{
			return 0;
		}
		else
		{
			int curNum = nums[0];
			for (int i = 1; i < nums.size(); i++)
			{
				if (nums[i] == curNum)
				{
					nums.erase(nums.begin() + i);
					i--;
				}
				else
				{
					curNum = nums[i];
				}				
			}
			return nums.size();
		}
	}
};