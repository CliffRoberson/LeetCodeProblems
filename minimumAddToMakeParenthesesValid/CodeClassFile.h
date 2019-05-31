#pragma once

#include "../std_lib_facilities.h"
#include <stack>

class Solution {
public:
	int minAddToMakeValid(string S) 
	{
		if (S.size() == 0)
			return 0;
		else
		{
			stack<int> myStack;
			int count = 0;
			for (int i = 0; i < S.size(); i++)
			{
				if (S[i] == '(')
					myStack.push(0);
				else
				{
					if (myStack.size() == 0)
						count++;
					else
						myStack.pop();
				}
			}
			count += myStack.size();
			return count;
		}
	}
};