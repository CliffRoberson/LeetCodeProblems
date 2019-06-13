#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	char nextGreatestLetter(vector<char>& letters, char target) 
	{
		char output = 'A';
		int smallestdiff = 27;
		int diff = 0;
		for (int i = 0; i < letters.size(); i++)
		{
			int curChar = letters[i];
			diff = curChar - target;
			if (diff > 0 && diff < smallestdiff)
			{
				smallestdiff = diff;
				output = letters[i];
			}
		}
		if (output == 'A')
			return letters[0];
		else
			return output;
	}
};