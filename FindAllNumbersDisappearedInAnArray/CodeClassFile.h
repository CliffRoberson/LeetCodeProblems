#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	vector<int> findDisappearedNumbers(vector<int>& nums) 
	{
		vector<bool> numsSeen(nums.size(),false);
		
		vector<int> output;
		
		for (int i =0;i<nums.size();i++)
		{
			if (!numsSeen[nums[i] - 1])
				numsSeen[nums[i] - 1] = true;
		}
		
		for (int i = 0; i < numsSeen.size(); i++)
		{
			if (!numsSeen[i])
				output.push_back(i + 1);
		}
		
		return output;
	}
};