// MaximumFrequencyStack.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "MaximumFrequencyStack.h"

int main()
{
	FreqStack* obj = new FreqStack();
	obj->push(5);
	obj->push(7);
	obj->push(5);
	obj->push(7);
	obj->push(4);
	obj->push(5);

	cout << obj->pop() << endl;
	cout << obj->pop() << endl;
	cout << obj->pop() << endl;
	cout << obj->pop() << endl;
}

