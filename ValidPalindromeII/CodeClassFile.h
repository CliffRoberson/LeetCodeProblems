#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	bool validPalindrome(string s) 
	{
		for (int i = 0; i < s.size(); i++)
		{
			string tmp = s;
			tmp.erase(i, 1);
			string rev = tmp;
			reverse(rev.begin(), rev.end());
			if (rev == tmp)
				return true;
		}
		return false;
	}
};