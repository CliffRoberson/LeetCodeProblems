#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	int titleToNumber(string s) 
	{
		reverse(s.begin(),s.end());
		int sum = 0;
		int base = 0;
		for (int i = 0; i < s.size(); i++)
		{
			char curChar = s[i];
			int charInt = (int)curChar - 'A' + 1;
			sum += pow(26,base) * charInt;
			base++;
		}
		return sum;
	}
};