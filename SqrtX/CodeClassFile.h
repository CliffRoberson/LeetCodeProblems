#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	int mySqrt(int x)
	{
		int ans = 0;
		int num = 0;
		
		while (true)
		{
			ans = num * num;
			if (ans >= x)
				break;
			num++;
		}

		if (ans == x)
			return num;
		else
			return num - 1;
	}
};