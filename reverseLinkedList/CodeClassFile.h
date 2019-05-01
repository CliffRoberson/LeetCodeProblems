#pragma once

#include "../std_lib_facilities.h"



struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode* reverseList(ListNode* head)
	{
		ListNode* next;
		ListNode* prev = NULL;

		if (head == NULL)
			return head;

		while (head->next != NULL)
		{
			next = head->next;
			head->next = prev;
			prev = head;
			head = next;
		}
		head->next = prev;

		return head;

	}
};