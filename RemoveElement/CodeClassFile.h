#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	int removeElement(vector<int>& nums, int val) {

		int finalLength = nums.size();
		for (int i = 0; i < nums.size(); i++)
		{
			if (nums[i] == val)
			{
				nums.erase(nums.begin() + i);
				finalLength--;
				i--;
			}
		}
		return finalLength;

	}
};