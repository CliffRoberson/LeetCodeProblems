#pragma once

#include "../std_lib_facilities.h"
#include <stack>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	vector<int> nextLargerNodes(ListNode* head) 
	{		
		vector<pair<int,int>> input; //index, value
		int index = 0;
		while (head != NULL)
		{
			pair<int, int> tmp(index, head->val);
			
			input.push_back(tmp);
			head = head->next;
			index++;
		}	

		vector<int> output(input.size());
		if (input.size() == 0)
			return output;

		stack<pair<int,int>> monotoneDecreasing;
		monotoneDecreasing.push(input[0]);
		for (int i = 1; i < input.size(); i++)
		{
			pair<int, int> curPair = input[i];
			if (curPair.second <= monotoneDecreasing.top().second)
			{
				monotoneDecreasing.push(curPair);
			}
			else
			{
				while (monotoneDecreasing.size() > 0 && monotoneDecreasing.top().second < curPair.second)
				{
					output[monotoneDecreasing.top().first] = curPair.second;
					monotoneDecreasing.pop();
				}
				monotoneDecreasing.push(curPair);
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
