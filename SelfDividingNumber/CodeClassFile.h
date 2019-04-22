#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	vector<int> selfDividingNumbers(int left, int right) 
	{
		vector<int> output;
		for (int i = left; i <= right; i++)
		{
			if (isOK(i))
			{
				output.push_back(i);
			}			
		}	
		return output;
	}

	bool isOK(int num)
	{
		string numString;
		numString = to_string(num);
		for (int digit : numString)
		{
			digit -= 48;
			if (digit == 0 || num % digit != 0)
			{
				return false;
			}
		}
		return true;

	}
};