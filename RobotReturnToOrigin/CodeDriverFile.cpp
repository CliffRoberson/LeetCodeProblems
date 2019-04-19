#include "pch.h"
#include <iostream>
#include "CodeClassFile.h"

int main()
{
	if (Solution().judgeCircle("UD") == true)
	{
		cout << "Test 1 OK";
	}
	else
	{
		cout << "Test 1 FAIL";
	}
	cout << endl;

	if (Solution().judgeCircle("LL") == false)
	{
		cout << "Test 2 OK";
	}
	else
	{
		cout << "Test 2 FAIL";
	}
	cout << endl;
}


