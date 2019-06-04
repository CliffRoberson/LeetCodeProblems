#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	vector<int> twoSum(vector<int>& numbers, int target) 
	{
		vector<int> output;
		for (int i = 0; i < numbers.size(); i++)
		{
			for (int k = i + 1; k < numbers.size(); k++)
			{
				if (numbers[i] + numbers[k] > target)
					k = numbers.size();
				else if (numbers[i] + numbers[k] == target)
				{
					output.push_back(i+1);
					output.push_back(k+1);
					return output;
				}
			}
		}
		return output;
	}
};