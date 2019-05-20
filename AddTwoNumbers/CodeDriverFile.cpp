#include "pch.h"
#include <iostream>
#include "CodeClassFile.h"

int main()
{
	ListNode * head1 = new ListNode(2);
	head1->next = new ListNode(4);
	head1->next->next = new ListNode(3);

	ListNode * head2 = new ListNode(5);
	head2->next = new ListNode(6);
	head2->next->next = new ListNode(4);

	Solution().addTwoNumbers(head1, head2);
}


