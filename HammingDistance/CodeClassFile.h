#pragma once

#include "../std_lib_facilities.h"
#include<bitset>

class Solution {
public:
	int hammingDistance(int x, int y) {
		string binX = bitset<32>(x).to_string(); 
		string binY = bitset<32>(y).to_string();
		int count = 0;
		for (int i=0;i<binX.size();i++)
		{
			if (binX[i] != binY[i])
			{
				count++;
			}
		}

		return count;
	}
};