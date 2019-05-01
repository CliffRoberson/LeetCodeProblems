#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	void moveZeroes(vector<int>& nums) 
	{
		int index = 0;
		for (int count = 0; count < nums.size(); count++)
		{
			if (nums[index] == 0)
			{
				nums.erase(nums.begin() + index);
				nums.push_back(0);
			}
			else
			{
				index++;
			}
		}		
	}
};