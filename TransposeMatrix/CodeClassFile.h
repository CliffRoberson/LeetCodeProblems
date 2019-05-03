#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	vector<vector<int>> transpose(vector<vector<int>>& A)
	{
		vector<vector<int>> output;
		for (int i = 0; i < A[0].size(); i++)
		{			
			output.push_back(vector<int>(A.size()));
		}
		
		for (int i = 0; i < A.size(); i++)
		{
			for (int k = 0; k < A[0].size(); k++)
			{
				output[k][i] = A[i][k];
			}
		}
		
		return output;
	}
};