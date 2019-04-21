#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	vector<int> diStringMatch(string S) 
	{
		int min = 0;
		int max = S.size();

		vector<int> output;
		for (char symbol : S)
		{
			if (symbol == 'I')
			{
				output.push_back(min);
				min++;
			}
			else
			{
				output.push_back(max);
				max--;
			}
		}
		output.push_back(min);

		return output;
	}
};