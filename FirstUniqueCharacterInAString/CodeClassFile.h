#pragma once

#include "../std_lib_facilities.h"
#include <map>

class Solution {
public:
	int firstUniqChar(string s) 
	{
		map<char, int> myMap;

		for (int i = 0; i < s.size(); i++)
		{
			char curChar = s[i];
			myMap[curChar]++;
		}

		for (int i = 0; i < s.size(); i++)
		{
			char curChar = s[i];
			if (myMap[curChar] == 1)
				return i;
		}

		return -1;
	}
};