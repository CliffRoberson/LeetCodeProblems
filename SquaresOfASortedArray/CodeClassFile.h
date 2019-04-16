#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	vector<int> sortedSquares(vector<int>& A) 
	{
		vector<int> squares;
		for (int num : A)
		{
			squares.push_back(pow(num, 2));
		}
		
		
		sort(squares.begin(), squares.end());
		return squares;
	}
};