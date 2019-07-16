#pragma once

#include "../std_lib_facilities.h"
#include <stack>

class Solution {
public:
	string baseNeg2(int N) {
		stack<int> s;
		while (N != 0)
		{
			int rem = N % -2;
			if (rem < 0)
			{
				rem = rem + 2;
				N = N / -2 + 1;
			}
			else
			{
				N = N / -2;
			}
			s.push(rem);
			
		}

		string binString = "";
		while (!s.empty())
		{
			binString += to_string(s.top());
			s.pop();
		}
		return binString;
	}
};