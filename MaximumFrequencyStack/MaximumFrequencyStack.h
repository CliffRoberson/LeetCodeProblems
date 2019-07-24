#pragma once

#include "..//std_lib_facilities.h"
#include <stack>
#include <map>

class FreqStack {
public:
	vector<int> nums;
	map<int, int> numAndCounts;
	
	FreqStack() 
	{

	}

	void push(int x) 
	{
		nums.push_back(x);
		numAndCounts[x]++;
	}

	int pop() 
	{
		vector<int> mostFrequentElement;
		int maxCount = 0;
		for (pair<int, int> numAndCount : numAndCounts)
		{
			if (numAndCount.second > maxCount)
				maxCount = numAndCount.second;
		}

		for (pair<int, int> numAndCount : numAndCounts)
		{
			if (numAndCount.second == maxCount)
				mostFrequentElement.push_back(numAndCount.first);
		}

		for (int i = nums.size() - 1; i >= 0; i--)
		{
			if (std::find(mostFrequentElement.begin(), mostFrequentElement.end(), nums[i]) != mostFrequentElement.end()) 
			{	
				int output = nums[i];
				nums.erase(nums.begin() + i);
				numAndCounts[output]--;
				return output;
			}
				
		}
		return -1;

	}
};