#pragma once

#include "../std_lib_facilities.h"
#include <set>
#include <bitset>

class Solution {
public:
	int numTilePossibilities(string tiles) 
	{
		set<string> output;

		int maxPermutations = pow(2, tiles.size());

		for (int i = 0; i < maxPermutations; i++)
		{
			bitset<7> bits(i);
				
			string aPermutation;
			for (int k = 0; k < tiles.size(); k++)
			{				
				if (bits[k] == 1)
				{
					aPermutation += tiles[k];
				}
			}
			
			if (aPermutation.size() > 0)
				output.insert(aPermutation);
						
		}
		return output.size();
	}
};