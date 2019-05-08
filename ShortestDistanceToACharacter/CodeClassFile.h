#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	vector<int> shortestToChar(string S, char C)
	{
		vector<int> output;
		vector<int> locations;

		for (int i = 0; i < S.size(); i++)
		{
			if (S[i] == C)
			{
				locations.push_back(i);

			}
		}
		
		for (int i = 0; i < S.size(); i++)
		{
			int min = 999999;
			for (int k = 0; k < locations.size(); k++)
			{
				int dist = abs(i - locations[k]);
				if (dist < min)
					min = dist;
			}
			output.push_back(min);
		}
		return output;
	}
};