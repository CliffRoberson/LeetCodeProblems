#include "pch.h"
#include <iostream>
#include "CodeClassFile.h"

int main()
{
	if (Solution().titleToNumber("A") == 1)
	{
		cout << "Test 1 OK";
	}
	else
	{
		cout << "Test 1 FAIL";
	}
	cout << endl;

	if (Solution().titleToNumber("AB") == 28)
	{
		cout << "Test 2 OK";
	}
	else
	{
		cout << "Test 2 FAIL";
	}
	cout << endl;

	if (Solution().titleToNumber("ZY") == 701)
	{
		cout << "Test 3 OK";
	}
	else
	{
		cout << "Test 3 FAIL";
	}
	cout << endl;

	if (Solution().titleToNumber("AAA") == 703)
	{
		cout << "Test 4 OK";
	}
	else
	{
		cout << "Test 4 FAIL";
	}
	cout << endl;

	cout << Solution().titleToNumber("AY");
}


