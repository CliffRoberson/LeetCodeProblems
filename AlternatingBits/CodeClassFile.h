#pragma once

#include "../std_lib_facilities.h"
#include<stack>

class Solution {
public:
	string convertToBinaryString(int num)
	{
		stack<int> s;
		while (num > 0)
		{
			int rem = num % 2;
			s.push(abs(rem));
			num = num / 2;
		}

		string binString = "";
		while (!s.empty())
		{
			binString += to_string(s.top());
			s.pop();
		}
		return binString;

	}

	bool hasAlternatingBits(int n) {
		string binInt = convertToBinaryString(n);

		bool one;
		if (binInt[0] == '1')
			one = true;
		else
			one = false;

		for (int i = 1; i < binInt.size(); i++)
		{
			char cur = binInt[i];
			if ((cur == '1' && one) || (cur == '0' && !one))
			{
				return false;
			}
			else
			{
				one = !one;
			}
		}
		return true;
	}
};