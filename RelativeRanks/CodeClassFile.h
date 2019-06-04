#pragma once

#include "../std_lib_facilities.h"
#include <map>
class Solution {
public:
	vector<string> findRelativeRanks(vector<int>& nums) 
	{
		map<int, int> myMap;
		vector<int> unsorted = nums;
		sort(nums.begin(), nums.end(), greater<int>());
		vector<string> output;
		
		for (int i = 0; i < nums.size(); i++)
		{
			int curNum = nums[i];
			myMap[curNum] = i;
		}

		for (int i = 0; i < unsorted.size(); i++)
		{
			int curNum = unsorted[i];
			if (myMap[curNum] == 0)
			{
				output.push_back("Gold Medal");
			}
			else if (myMap[curNum] == 1)
			{
				output.push_back("Silver Medal");
			}
			else if (myMap[curNum] == 2)
			{
				output.push_back("Bronze Medal");
			}
			else
			{
				output.push_back(to_string(myMap[curNum]+1));
			}
		}
		return output;
	}
};