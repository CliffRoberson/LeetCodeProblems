#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	int pick = 6;
	int guess(int num)
	{
		if (num == pick)
			return 0;
		else if (num < pick)
			return 1;
		else
			return -1;
	}

	int guessNumber(int n) {
		int max = n;
		int min = 1;
		n /= 2;
		int result = -1;
		while (result != 0)
		{
			result = guess(n);
			if (result == 0)
			{
				return n;
			}
			else if (result == 1)
			{
				min = n;
				n = n + (max - n) / 2;
				if (n == min) n++;
			}
			else
			{
				max = n;
				n = n - ((n - min) / 2);
				if (n == max) n--;
			}
		}
		return -1;
	}
};