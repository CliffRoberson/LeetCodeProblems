#pragma once

#include "../std_lib_facilities.h"
#include <map>

class Solution {
public:
	int majorityElement(vector<int>& nums) 
	{
		int majorityAmountToLookFor = floor(nums.size() / 2);

		map<int, int> numAndCount;
		for (int num : nums)
		{
			numAndCount[num]++;
		}

		map<int, int>::iterator it;
		for (it = numAndCount.begin(); it != numAndCount.end(); it++)
		{
			if (it->second > majorityAmountToLookFor)
			{
				return it->first;
			}
		}
		return 0;
	}
};

