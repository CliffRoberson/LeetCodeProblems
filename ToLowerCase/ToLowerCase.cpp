#include "pch.h"
#include <iostream>
#include "ToLowerCase.h"

int main()
{
	string inputString = "Hello";
	if (Solution().toLowerCase(inputString) == "hello")
	{
		cout << "input1 OK" << endl;
	}
	else
	{
		cout << "input1 FAIL" << endl;
	}

	inputString = "here";
	if (Solution().toLowerCase(inputString) == "here")
	{
		cout << "input2 OK" << endl;
	}
	else
	{
		cout << "input2 FAIL" << endl;
	}

	inputString = "LOVELY";
	if (Solution().toLowerCase(inputString) == "lovely")
	{
		cout << "input3 OK" << endl;
	}
	else
	{
		cout << "input3 FAIL" << endl;
	}
}


