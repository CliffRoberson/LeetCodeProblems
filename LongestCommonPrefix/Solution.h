#pragma once
#include "../std_lib_facilities.h"
class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) 
	{
		

		ostringstream os;
		string prefix = os.str();

		int indexOfShortestString = 0;
		int shortestStringSize = strs[0].size();
		for (int i = 0; i < strs.size(); i++)
		{
			if (strs[i].size() < shortestStringSize)
			{
				shortestStringSize = strs[i].size();
				indexOfShortestString = i;
			}
		}

		for (int i = 0; i < strs[indexOfShortestString].size(); i++)//'i' is what character we are examining
		{	
			char currChar = strs[indexOfShortestString].at(i);
			
			for (int j = 0; j < strs.size(); j++)// 'j' is which string we are examining
			{
				if (strs[j][i] != currChar)
				{
					return prefix;
				}
			}
			os << currChar;
			prefix = os.str();
		}

		return prefix;
	}
};