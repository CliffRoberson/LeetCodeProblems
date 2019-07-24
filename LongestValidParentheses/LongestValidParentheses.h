#pragma once

#include "..//std_lib_facilities.h"
#include <stack>
class Solution {
public:
	int longestValidParentheses(string s) {
		int max = 0;
		bool valid = false;
		int curCount = 0;
		stack<char> chars;
		for (int i = 0; i < s.size(); i++)
		{

			char curChar = s[i];
			if (curChar == ')')
			{
				if (chars.empty())
				{
					if (curCount > max)
						max = curCount;
					curCount = 0;
				}
				else
				{
					chars.pop();
					curCount++;
				}
				
			}
			else
			{
				chars.push('(');
				curCount++;
			}
		}

		while (!chars.empty())
		{
			chars.pop();
			curCount--;
		}
		
		if (curCount > max)
			max = curCount;

		return max;
	}
};