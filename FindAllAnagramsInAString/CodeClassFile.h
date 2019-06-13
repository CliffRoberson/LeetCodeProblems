#pragma once

#include "../std_lib_facilities.h"
#include <map>

class Solution {
public:
	vector<int> findAnagrams(string s, string p) 
	{
		vector<int> output;
		map<char, int> origMap;
		for (char c : p)
		{
			origMap[c]++;
		}

		for (int i = 0; i < s.size(); i++)
		{
			string curString = s.substr(i, p.size());
			map<char, int> curMap;
			for (char c : curString)
			{
				curMap[c]++;
			}
			if (curMap == origMap)
				output.push_back(i);
		}
		return output;
	}
};