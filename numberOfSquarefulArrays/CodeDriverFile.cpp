#include "pch.h"
#include <iostream>
#include "CodeClassFile.h"

int main()
{
	vector<int> input = { 1,17,8 };
	if (Solution().numSquarefulPerms(input) == 2)
	{
		cout << "Test 1 OK";
	}
	else
	{
		cout << "Test 1 FAIL";
	}
	cout << endl;

	input = { 2,2,2 };
	if (Solution().numSquarefulPerms(input) == 1)
	{
		cout << "Test 2 OK";
	}
	else
	{
		cout << "Test 2 FAIL";
	}
	cout << endl;

	input = { 75,91,39,33,39,39,69,20,43,38,48,29 };
	if (Solution().numSquarefulPerms(input) == 1)
	{
		cout << "Test 3 OK";
	}
	else
	{
		cout << "Test 3 FAIL";
	}
	cout << endl;
}



