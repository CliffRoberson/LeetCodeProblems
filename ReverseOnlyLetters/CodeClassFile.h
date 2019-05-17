#pragma once

#include "../std_lib_facilities.h"
#include <stack>

class Solution {
public:
	string reverseOnlyLetters(string S) 
	{
		stack<char> letters;
		for (int i = 0; i < S.size(); i++)
		{
			char curChar = S[i];
			if (isalpha(curChar))
				letters.push(curChar);
		}

		for (int i = 0; i < S.size(); i++)
		{
			char curChar = S[i];
			if (isalpha(curChar))
			{
				S[i] = letters.top();
				letters.pop();
			}				
		}
		return S;
	}
};