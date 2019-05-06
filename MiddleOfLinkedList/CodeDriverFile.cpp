#include "pch.h"
#include <iostream>
#include "CodeClassFile.h"

int main()
{
	ListNode* one = new ListNode(1);
	ListNode* two = new ListNode(2);
	ListNode* three = new ListNode(3);
	ListNode* four = new ListNode(4);
	ListNode* five = new ListNode(5);

	one->next = two;
	two->next = three;
	three->next = four;
	four->next = five;

	Solution().middleNode(one);
}


