#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	vector<string> fizzBuzz(int n) 
	{
		vector<string> output;
		for (int num = 1; num <= n; num++)
		{
			if (num % 3 == 0 && num % 5 == 0)
				output.push_back("FizzBuzz");
			else if (num % 3 == 0)
				output.push_back("Fizz");
			else if (num % 5 == 0)
				output.push_back("Buzz");
			else
				output.push_back(to_string(num));
		}
		return output;
	}
};