#pragma once

#include "../std_lib_facilities.h"
#include <map>

class Solution {
public:
	vector<int> findDuplicates(vector<int>& nums) 
	{
		vector<int> output;
		map<int, int> numAndCount;
		for (int i = 0; i < nums.size(); i++)
		{
			int curNum = nums[i];
			numAndCount[curNum]++;
		}

		map<int, int>::iterator it;
		for (it = numAndCount.begin(); it != numAndCount.end(); it++)
		{
			if (it->second >= 2)
				output.push_back(it->first);
		}

		return output;
	}
};