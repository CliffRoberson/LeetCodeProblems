#pragma once

#include "../std_lib_facilities.h"

class MinStack {
public:
	vector<int> stackVector;
	int min = INT_MAX;
	/** initialize your data structure here. */
	MinStack() {

	}

	void push(int x) 
	{
		if (x < min)
			min = x;
		stackVector.push_back(x);
	}

	void pop() 
	{
		stackVector.pop_back();
	}

	int top() 
	{
		return stackVector[stackVector.size() - 1];
	}

	int getMin() 
	{
		return min;
	}
};