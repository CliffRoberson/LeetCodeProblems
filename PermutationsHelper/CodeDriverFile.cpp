#include "pch.h"
#include <iostream>
#include "CodeClassFile.h"

void comb(int N, int K)
{
	std::string bitmask(K, 1); // K leading 1's
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

int main()
{
	/*int intToStoreAsBinary = 6;
	int n = 3;
	vector<int> myVector;

	for (int i = 0; i < n; i++) 
	{
		myVector.push_back( (intToStoreAsBinary >> i) & 1);
	}
	reverse(myVector.begin(),myVector.end());*/

	comb(5, 3);


}


