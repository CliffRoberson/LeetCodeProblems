#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	bool isPalindrome(string s) 
	{
		string output;
		for (int i = 0; i < s.size(); i++)
		{
			char curChar = s[i];
			if (isalnum(curChar))
				output += tolower(curChar);
		}
	
		string tmp = output;
		reverse(tmp.begin(), tmp.end());
		return tmp == output;

	}
};