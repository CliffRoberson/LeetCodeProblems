#pragma once

#include "../std_lib_facilities.h"

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class MyLinkedList {
public:
	ListNode* head;
	ListNode* tail;
	int size = 0;

	/** Initialize your data structure here. */
	MyLinkedList() 
	{
	}

	/** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
	int get(int index) 
	{
		if (size == 0 || index >= size || index < 0)
			return -1;
		else
		{
			ListNode* cur = head;
			for (int i = 0; i < index; ++i)
			{
				cur = cur->next;
			}
			return cur->val;
		}
	}

	/** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
	void addAtHead(int val) 
	{
		if (size == 0)
		{
			head = new ListNode(val);
			tail = head;
		}
		else
		{
			ListNode* cur = new ListNode(val);
			cur->next = head;
			head = cur;
		}
		size++;
	}

	/** Append a node of value val to the last element of the linked list. */
	void addAtTail(int val) 
	{
		if (size == 0)
		{
			head = new ListNode(val);
			tail = head;
		}
		else
		{
			ListNode* cur = new ListNode(val);
			tail->next = cur;
			tail = tail->next;
		}
		size++;
	}

	/** Add a node of value val before the index-th node in the linked list. 
	If index equals to the length of linked list, the node will be appended to the end of linked list. 
	If index is greater than the length, the node will not be inserted. */
	void addAtIndex(int index, int val) 
	{
		if (index < 0)
			index = 0;

		if (size == 0 && index != size)
			return;

		if (index == size)
		{
			addAtTail(val);
		}
		else if (index == 0)
		{
			addAtHead(val);
		}
		else if (index > size)
		{
			return;
		}
		else
		{
			ListNode* cur = head;
			for (int i = 0; i < index - 1; i++)
			{
				cur = cur->next;
			}
			ListNode* tmp = new ListNode(val);
			ListNode* tmp2 = cur->next;
			tmp->next = tmp2;
			cur->next = tmp;
			size++;
		}		
				
	}

	/** Delete the index-th node in the linked list, if the index is valid. */
	void deleteAtIndex(int index) 
	{
		if (index >= 0 && index < size)
		{
			if (size == 1)
			{
				head = NULL;
				tail = NULL;				
			}
			else if (index == 0)
			{
				ListNode* tmpNext = head->next;
				head->next = NULL;
				head = tmpNext;
			}
			else
			{
				ListNode* cur = head;
				for (int i = 0; i < index - 1; i++)
				{
					cur = cur->next;
				}
				ListNode* tmpNext = cur->next;
				if (tmpNext == tail)
				{
					tail = cur;
				}

				cur->next = tmpNext->next;
				tmpNext->next = NULL;
				tmpNext = NULL;
				
			}
			size--;
		}
	}
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */