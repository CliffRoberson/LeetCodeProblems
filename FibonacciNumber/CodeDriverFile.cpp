#include "pch.h"
#include <iostream>
#include "CodeClassFile.h"

int main()
{
	if (Solution().fib(2) == 1 )
	{
		cout << "Test 1 OK";
	}
	else
	{
		cout << "Test 1 FAIL";
	}
	cout << endl;

	if (Solution().fib(3) == 2)
	{
		cout << "Test 2 OK";
	}
	else
	{
		cout << "Test 2 FAIL";
	}
	cout << endl;

	if (Solution().fib(4) == 3)
	{
		cout << "Test 3 OK";
	}
	else
	{
		cout << "Test 3 FAIL";
	}
	cout << endl;

}


