#include "pch.h"
#include <iostream>
#include "CodeClassFile.h"

int main()
{
	MyLinkedList* obj = new MyLinkedList();
	obj->addAtHead(1);
	obj->addAtTail(3);
	obj->addAtIndex(4, 2);
	obj->get(1);
	obj->deleteAtIndex(-1);
	obj->get(1);

}


