#include "pch.h"
#include <iostream>
#include "CodeClassFile.h"

int main()
{
	if (Solution().convertToTitle(1) == "A" )
	{
		cout << "Test 1 OK";
	}
	else
	{
		cout << "Test 1 FAIL";
	}
	cout << endl;

	if (Solution().convertToTitle(26) == "Z")
	{
		cout << "Test 2 OK";
	}
	else
	{
		cout << "Test 2 FAIL";
	}
	cout << endl;

	if (Solution().convertToTitle(27) == "AA")
	{
		cout << "Test 3 OK";
	}
	else
	{
		cout << "Test 3 FAIL";
	}
	cout << endl;

	if (Solution().convertToTitle(28) == "AB")
	{
		cout << "Test 4 OK";
	}
	else
	{
		cout << "Test 4 FAIL";
	}
	cout << endl;
}


