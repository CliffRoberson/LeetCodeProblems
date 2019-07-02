#pragma once

#include "../std_lib_facilities.h"
#include <stack>

class Solution {
public:
	string reverseWords(string s) 
	{
		istringstream iss(s);
		string word;
		string output;
		stack<string> myStack;
		while (iss >> word)
		{
			myStack.push(word);
		}

		while (!myStack.empty())
		{
			output = output + myStack.top() + " ";
			myStack.pop();
		}
		output.pop_back();
		return output;
	}
};