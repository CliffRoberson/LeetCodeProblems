#pragma once

#include "../std_lib_facilities.h"
#include<stack>

class Solution {
public:


	string toBinaryFlipDigits(int num)
	{
		stack<int> s;
		while (num > 0)
		{
			int rem = num % 2;
			s.push(abs(rem - 1));
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

	int findComplement(int num) 
	{
		string bin = toBinaryFlipDigits(num);
		return stoi(bin,nullptr,2);
	}
};