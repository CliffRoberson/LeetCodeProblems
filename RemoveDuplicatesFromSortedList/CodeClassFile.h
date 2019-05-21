#pragma once

#include "../std_lib_facilities.h"



struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode* deleteDuplicates(ListNode* head) 
	{
		if (head == NULL)
			return head;
		else
		{
			int curNum;
			ListNode* cur = head;
			ListNode* prev = head;
			while (cur != NULL)
			{
				if (cur == head)
				{
					curNum = head->val;				
				}					
				else
				{
					if (cur->val == curNum)					
						prev->next = cur->next;									
					else
					{
						prev = cur;
						curNum = cur->val;
					}					
				}															
				cur = cur->next;
			}
		}
	}
};