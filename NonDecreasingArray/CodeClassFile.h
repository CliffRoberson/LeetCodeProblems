#pragma once

#include "../std_lib_facilities.h"
#include <stack>

class Solution {
public:
	bool checkPossibility(vector<int>& nums)
	{
		stack<int> numsStack;
		//check what to do for empty vector
		numsStack.push(nums[0]);
		int numOfBadNums = 0;
		for (int num : nums)
		{
			if (numOfBadNums > 1)
				return false;

			if (num < numsStack.top())
			{
				numOfBadNums++;
				numsStack.pop();				
			}
			
			numsStack.push(num);
		}
		return true;

		/*
		bool decrease = false;
		int curNum = nums[0];
		int max = INT_MIN;
		for (int i = 0; i < nums.size(); i++)
		{
			int num = nums[i];
			if (num < curNum && decrease == true)
				return false;
			else if (decrease == true && num < max)
				return false;
			else if (num < curNum)
			{
				curNum = num;
				decrease = true;
			}
			else
			{
				curNum = num;
			}

			if (num > max)
				max = num;
		}
		return true;
		*/
	}
};