#pragma once

#include "../std_lib_facilities.h"
#include <stack>

class Solution {
public:
	bool validateStackSequences(vector<int>& pushed, vector<int>& popped)
	{
		stack<int> myStack;
		int i = 0;
		for (int num : pushed)
		{
			myStack.push(num);
			while (!myStack.empty() && myStack.top() == popped[i])
			{
				myStack.pop();
				i++;
			}
		}
		return myStack.empty();
	}
};