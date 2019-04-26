#pragma once

#include "../std_lib_facilities.h"

//Solution fails because it takes too long
class Solution {
public:
	bool isSquareful(vector<int>& A)
	{
		for (int i = 0; i < A.size() - 1; i++)
		{
			int sum = A[i] + A[i + 1];
			long double sr = sqrt(sum);
			if (!((sr - floor(sr)) == 0))
			{
				return false;
			}
		}
		return true;
	}

	int numSquarefulPerms(vector<int>& A) 
	{
		int count = 0;
		sort(A.begin(), A.end());
		do
		{
			if (isSquareful(A))
			{
				count++;
			}
		} while (next_permutation(A.begin(), A.end()));

		return count;
	}
};