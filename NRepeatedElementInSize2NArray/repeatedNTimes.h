#pragma once

#include "../std_lib_facilities.h"
#include <map>

class Solution {
public:
	int repeatedNTimes(vector<int>& A) {
		int numLookingFor = A.size() / 2;
		map<int, int> numAndCount;
		for (int num : A)
		{
			numAndCount[num]++;
			if (numAndCount[num] == numLookingFor)
				return num;
		}

		return 0;
	}
};