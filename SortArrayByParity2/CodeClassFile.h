#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	vector<int> sortArrayByParityII(vector<int>& A) {
		vector<int> even;
		vector<int> odd;
		vector<int> output;

		for (int i = 0; i < A.size(); i++)
		{
			if (A[i] % 2 == 0)
				even.push_back(A[i]);
			else
				odd.push_back(A[i]);

		}

		for (int i = 0; i < A.size(); i++)
		{
			if (i % 2 == 0)
			{
				output.push_back(even.back());
				even.pop_back();

			}
			else
			{
				output.push_back(odd.back());
				odd.pop_back();
			}
		}

		return output;
	}
};