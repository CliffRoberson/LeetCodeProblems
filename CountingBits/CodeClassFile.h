#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	vector<int> countBits(int num) {
		
		vector<int> output(num+1,0);
		output[0] = 0;
		
		for (int i = 1; i <= num; ++i)
		{
			if (i % 2 == 0)
			{
				output[i] = output[i / 2];
			}
			else
			{
				output[i] = output[i - 1] + 1;
			}
		}
		
		return output;
	}
};