#pragma once

#include "../std_lib_facilities.h"
#include <set>
class Solution {
public:
	vector<vector<int>> allCellsDistOrder(int R, int C, int r0, int c0) {
		multiset <pair<int, vector<int>>> tmpResult;
		for (int i = 0; i < R; i++)
		{
			for (int k = 0; k < C; k++)
			{
				int distance = calculateDistance(i, k, r0, c0);
				vector<int> coordinates = { i,k };
				pair<int, vector<int>> tmp = { distance, coordinates };
				tmpResult.insert(tmp);

			}
		}

		vector<vector<int>> output;
		
		for (auto t : tmpResult)
		{
			output.push_back(t.second);
		}
		return output;
	}

	int calculateDistance(int r1, int c1, int r2, int c2)
	{
		return abs(r1 - r2) + abs(c1 - c2);
	}
};