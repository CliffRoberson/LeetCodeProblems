#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	int findNthDigit(int n)
	{
		int digitsSeen = 0;
		int num = 1;
		while (digitsSeen < n)
		{
			int tmp = num;
			vector<int> myVector;
			while (tmp > 0)
			{
				myVector.push_back(tmp % 10);
				tmp /= 10;
			}

			for (int i = myVector.size(); i > 0; i--)
			{
				int digit = myVector[i-1];
				digitsSeen++;
				if (digitsSeen == n)
					return digit;
			}

			num++;
		}
		return -1;
	}
};