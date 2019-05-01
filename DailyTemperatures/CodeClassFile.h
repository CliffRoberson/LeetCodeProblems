#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	vector<int> dailyTemperatures(vector<int>& T) 
	{
		vector<int> output;
		for (int i = 0; i < T.size(); i++)
		{
			bool updated = false;
			for (int k = i + 1; k < T.size(); k++)
			{
				if (T[k] > T[i])
				{
					output.push_back(k - i);
					updated = true;
					k = T.size();
				}
				
			}
			if (!updated)
			{
				output.push_back(0);
			}
		}
		return output;
	}
};