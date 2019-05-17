#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) 
	{
		vector<int> tmpNums;
		for (int row = 0; row < nums.size(); row++)
		{
			for (int col = 0; col < nums[row].size(); col++)
			{
				tmpNums.push_back[row][col];
			}
		}

		if (tmpNums.size() != r * c)
			return nums;
		else
		{
			reverse(tmpNums.begin(),tmpNums.end());
			vector<vector<int>> output;
			for (int row = 0; row < r; row++)
			{
				vector<int> aRow;
				for (int col = 0; col < c; col++)
				{
					
					aRow.push_back(tmpNums[tmpNums.size()-1]);
					tmpNums.pop_back();
				}
				output.push_back(aRow);
			}
			return output;
		}
	}
};