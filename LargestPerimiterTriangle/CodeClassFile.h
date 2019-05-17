#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	
	//comb(5, 3);
	/*0 1 2
	0 1 3
	0 1 4
	0 2 3
	0 2 4
	0 3 4
	1 2 3
	1 2 4
	1 3 4
	2 3 4*/
	void comb(int N, int K)
	{
		string bitmask(K, 1); // K leading 1's
		bitmask.resize(N, 0); // N-K trailing 0's

		// print integers and permute bitmask
		do {
			for (int i = 0; i < N; ++i) // [0..N-1] integers
			{
				if (bitmask[i]) std::cout << " " << i;
			}
			std::cout << std::endl;
		} while (std::prev_permutation(bitmask.begin(), bitmask.end()));
	}

	int largestPerimeter(vector<int>& A) 
	{

	}
};