#pragma once

#include "../std_lib_facilities.h"

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 
	{
		vector<int> vec;

		if (l1 != NULL)
		{
			vec.push_back(l1->val);
			while (l1->next != NULL)
			{
				l1 = l1->next;
				vec.push_back(l1->val);
			}
		}

		if (l2 != NULL)
		{
			vec.push_back(l2->val);
			while (l2->next != NULL)
			{
				l2 = l2->next;
				vec.push_back(l2->val);
			}
		}

		if (vec.size() == 0)
		{
			return NULL;
		}

		sort(vec.begin(),vec.end());
		
		ListNode* cur = new ListNode(vec[0]);
		ListNode* output = cur;
		for (int i = 1; i < vec.size(); i++)
		{			
			cur->next = new ListNode(vec[i]);
			cur = cur->next;				
		}

		return output;
	}
};