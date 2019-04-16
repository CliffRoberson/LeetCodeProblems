#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	string toLowerCase(string str) 
	{
		string output = "";
		for (int i = 0; i < str.size(); i++)
		{
			char currChar = str[i];
			output += ::tolower(currChar);
		}

		return output;
	}
};