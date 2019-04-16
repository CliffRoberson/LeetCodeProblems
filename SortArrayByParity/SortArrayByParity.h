#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	vector<int> sortArrayByParity(vector<int>& A) 
	{
		vector<int> output;
		for (int num : A)
		{
			if (num % 2 == 0)
			{
				output.push_back(num);
			}
		}
		for (int num : A)
		{
			if (num % 2 != 0)
			{
				output.push_back(num);
			}
		}

		return output;
	}
};