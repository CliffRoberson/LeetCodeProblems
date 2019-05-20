#pragma once

#include "../std_lib_facilities.h"

struct ListNode {
    long long int val;
    ListNode *next;
    ListNode(long long int x) : val(x), next(NULL) {}
};

class Solution {
public:

	
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
	{
		ListNode* output;
		int sum = l1->val + l2->val;
		int lastDigit = sum % 10;
		bool carry = false;
		if (sum >= 10)
			carry = true;
		ListNode* cur = new ListNode(lastDigit);
		output = cur;
		l1 = l1->next;
		l2 = l2->next;
		while (l1 != NULL && l2 != NULL)
		{
			sum = l1->val + l2->val;
			if (carry)
				sum += 1;

			if (sum >= 10)
				carry = true;
			else
				carry = false;

			lastDigit = sum % 10;
			cur->next = new ListNode(lastDigit);
			cur = cur->next;
			l1 = l1->next;
			l2 = l2->next;
		}

		while (l1 != NULL)
		{
			if (carry)
				sum = l1->val + 1;
			else
				sum = l1->val;

			if (sum >= 10)
				carry = true;
			else
				carry = false;

			lastDigit = sum % 10;
			cur->next = new ListNode(lastDigit);
			cur = cur->next;
			l1 = l1->next;
		}

		while (l2 != NULL)
		{
			if (carry)
				sum = l2->val + 1;
			else
				sum = l2->val;

			if (sum >= 10)
				carry = true;
			else
				carry = false;

			lastDigit = sum % 10;
			cur->next = new ListNode(lastDigit);
			cur = cur->next;
			l2 = l2->next;
		}

		if (carry)
			cur->next = new ListNode(1);

		return output;

	}
};