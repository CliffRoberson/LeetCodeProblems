#pragma once

#include "../std_lib_facilities.h"
#include <stack>
class Solution {
public:
	vector<int> dailyTemperatures(vector<int>& T) 
	{

		vector<int> output(T.size());
		if (T.size() == 0)
			return output;

		vector<pair<int, int>> input;
		for (int i = 0; i < T.size(); i++)
		{
			pair<int, int> tmp(i, T[i]);
			input.push_back(tmp);
		}

		stack<pair<int, int>> monotoneDecreasing;
		monotoneDecreasing.push(input[0]);
		for (int i = 1; i < input.size(); i++)
		{
			int curInputIndex = input[i].first;
			int curInputVal = input[i].second;


			if (curInputVal <= monotoneDecreasing.top().second)
			{
				monotoneDecreasing.push(input[i]);
			}
			else
			{
				while (monotoneDecreasing.size() > 0 && monotoneDecreasing.top().second < curInputVal)
				{					
					int topStackIndex = monotoneDecreasing.top().first;
					int topStackValue = monotoneDecreasing.top().second;
					int indexDiff = curInputIndex - topStackIndex;
					output[topStackIndex] = indexDiff;
					
					monotoneDecreasing.pop();
				}
				monotoneDecreasing.push(input[i]);
			}
		}

		while (monotoneDecreasing.size() > 0)
		{
			output[monotoneDecreasing.top().first] = 0;
			monotoneDecreasing.pop();
		}

		return output;
	}
};