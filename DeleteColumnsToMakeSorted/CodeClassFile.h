#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	int minDeletionSize(vector<string>& A) {
		int count = 0;
		for (int i = 0; i < A[0].size(); i++)
		{
			int prev = A[0][i];
			for (int k = 0; k < A.size(); k++)
			{
				if (A[k][i] < prev)
				{
					count++;
					k = A.size();
				}
				else
				{
					prev = A[k][i];
				}
			}
		}
		return count;
	}
};