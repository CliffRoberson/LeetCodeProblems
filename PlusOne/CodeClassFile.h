#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	vector<int> plusOne(vector<int>& digits)
	{
		vector<int> output;
		reverse(digits.begin(), digits.end());
		bool carry = false;

		int tmpSum = digits[0] + 1;
		if (tmpSum > 9)
			carry = true;
		output.push_back(tmpSum % 10);

		for (int i = 0; i < digits.size(); i++)
		{

			if (carry)
			{
				tmpSum++;
				carry = false;
			}


			int digit = tmpSum % 10;

			if (tmpSum > 9)
				carry = true;

			output.push_back(digit);
		}
		if (carry)
			output.push_back(1);

		reverse(output.begin(), output.end());
		return output;
	}
};