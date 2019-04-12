#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	string removeOuterParentheses(string s)
	{
		bool innerCollectOn = false;
		vector<char> parenStack;
		string outputString = "";

		for (int i = 0; i < s.size(); i++)
		{
			char currChar = s[i];

			if (currChar == '(' && !innerCollectOn)
			{
				innerCollectOn = true;
				parenStack.push_back(currChar);
			}
			else if (currChar == '(' && innerCollectOn)
			{
				parenStack.push_back(currChar);
				outputString += currChar;
			}
			else if (currChar == ')' && parenStack.size() == 1)
			{
				innerCollectOn = false;
				parenStack.pop_back();
			}
			else if (currChar == ')' && innerCollectOn)
			{
				outputString += currChar;
				parenStack.pop_back();
			}
		}

		return outputString;
	}
};