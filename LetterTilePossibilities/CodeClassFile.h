#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	int numTilePossibilities(string tiles) 
	{
		int n = tiles.size();

		int count = 0;

		int max = pow(2, n);
		for (int i = 0; i < max; i++)
		{
			vector<int> permutation;
			int intToStoreAsBinary = i;
			for (int i = 0; i < n; i++)
			{
				permutation.push_back((intToStoreAsBinary >> i) & 1);
			}
			reverse(permutation.begin(), permutation.end());
			permutations.push_back(permutation);
		}
	}
};