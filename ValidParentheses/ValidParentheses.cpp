// ValidParentheses.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "ValidParentheses.h"

int main()
{
	string inputString = "";
	if (Solution().isValid(inputString))
	{
		cout << inputString << " OK" << endl;
	}
	else
	{
		cout << inputString << " FAIL" << endl;
	}

	inputString = "()";
	if (Solution().isValid(inputString))
	{
		cout << inputString << " OK" << endl;
	}
	else
	{
		cout << inputString << " FAIL" << endl;
	}

	inputString = "()[]{}";
	if (Solution().isValid(inputString))
	{
		cout << inputString << " OK" << endl;
	}
	else
	{
		cout << inputString << " FAIL" << endl;
	}

	inputString = "(]";
	if (!Solution().isValid(inputString))
	{
		cout << inputString << " OK" << endl;
	}
	else
	{
		cout << inputString << " FAIL" << endl;
	}

	inputString = "([)]";
	if (!Solution().isValid(inputString))
	{
		cout << inputString << " OK" << endl;
	}
	else
	{
		cout << inputString << " FAIL" << endl;
	}

	inputString = "{[]}";
	if (Solution().isValid(inputString))
	{
		cout << inputString << " OK" << endl;
	}
	else
	{
		cout << inputString << " FAIL" << endl;
	}

	inputString = "]";
	if (!Solution().isValid(inputString))
	{
		cout << inputString << " OK" << endl;
	}
	else
	{
		cout << inputString << " FAIL" << endl;
	}
}

