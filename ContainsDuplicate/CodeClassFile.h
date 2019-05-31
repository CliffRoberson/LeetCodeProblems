#pragma once

#include "../std_lib_facilities.h"
#include <map>

class Solution {
public:
	bool containsDuplicate(vector<int>& nums) 
	{
		map<int, int> myMap;
		for (int i = 0; i < nums.size(); i++)
		{
			int curNum = nums[i];
			myMap[curNum]++;
			if (myMap[curNum] > 1)
				return true;
		}
		return false;
	}
};