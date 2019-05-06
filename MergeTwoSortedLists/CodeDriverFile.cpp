#include "pch.h"
#include <iostream>
#include "CodeClassFile.h"

int main()
{
	ListNode* L11 = new ListNode(1);
	ListNode* L12 = new ListNode(2);
	ListNode* L14 = new ListNode(4);

	ListNode* L21 = new ListNode(1);
	ListNode* L23 = new ListNode(3);
	ListNode* L24 = new ListNode(4);

	L11->next = L12;
	L12->next = L14;

	L21->next = L23;
	L23->next = L24;

	Solution().mergeTwoLists(L11, L21);


}


