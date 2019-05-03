#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	string reverseWords(string s) 
	{
		istringstream iss(s);
		string word;
		string output;
		while (iss >> word)
		{
			reverse(word.begin(), word.end());
			output = output + word + " ";
		}
		output.pop_back();
		return output;
	}
};