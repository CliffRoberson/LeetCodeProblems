#pragma once

#include "../std_lib_facilities.h"

//Exceeds time limit
class Solution {
public:
	bool is_palindrome(std::string const& s)
	{
		return std::equal(s.begin(), s.end(), s.rbegin());
	}

	string longestPalindrome(string s) 
	{
		string maxS = "";
		for (int i = 0; i < s.size(); i++)
		{
			string cur = "";
			for (int k = i; k < s.size(); k++)
			{
				cur += s[k];
				if (k - i < maxS.size())
					continue;
				
				if (is_palindrome(cur) && cur.size() > maxS.size())
					maxS = cur;
			}
		}
		return maxS;
	}
};