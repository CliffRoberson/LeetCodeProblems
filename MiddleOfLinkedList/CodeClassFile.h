#pragma once

#include "../std_lib_facilities.h"

 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
 
class Solution {
public:
	ListNode* middleNode(ListNode* head) 
	{
		if (head == NULL)
		{
			return NULL;
		}
		else
		{
			ListNode* tmp = head;
			int size = 1;
			while (tmp->next != NULL)
			{
				tmp = tmp->next;
				size++;
			}
			tmp = head;
			int count = 1;
			while (count < size / 2)
			{
				tmp = tmp->next;
				count++;
			}
			return tmp;
		}
	}
};