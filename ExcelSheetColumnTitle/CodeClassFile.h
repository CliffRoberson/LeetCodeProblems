#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	vector<char> alphabet = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
	string convertToTitle(int n) 
	{
		string column = "";
		if (n == 1)
			return "A";
		n--;
		bool first = true;
		while (n > 0)
		{
			int digit = n % 26;
			n = n / 26;
			if (!first)
				n--;
			char digitAsChar = alphabet[digit];
			column = digitAsChar + column;
		}

		return column;
	}
};