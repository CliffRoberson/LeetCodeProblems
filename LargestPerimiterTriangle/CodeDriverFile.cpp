#include "pch.h"
#include <iostream>
#include "CodeClassFile.h"

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
		cout << endl;
	} while (prev_permutation(bitmask.begin(), bitmask.end()));
}

int main()
{
	string bitmask(5,1); // K leading 1's
	bitmask.resize(5, 0); // N-K trailing 0's

	for (int i = 0; i < 5; ++i) // [0..N-1] integers
	{
		if (bitmask[i]) 
			cout << " " << i;
	}
}


