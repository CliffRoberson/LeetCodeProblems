#include "pch.h"
#include <iostream>
#include "CodeClassFile.h"

int main()
{
	vector<int> input = { 4,2,3 };
	if (Solution().checkPossibility(input))
	{
		cout << "Test 1 OK";
	}
	else
	{
		cout << "Test 1 FAIL";
	}
	cout << endl;

	input = { 4,2,1 };
	if (!Solution().checkPossibility(input))
	{
		cout << "Test 2 OK";
	}
	else
	{
		cout << "Test 2 FAIL";
	}
	cout << endl;

	input = { 3,4,2,3 };
	if (!Solution().checkPossibility(input))
	{
		cout << "Test 2 OK";
	}
	else
	{
		cout << "Test 2 FAIL";
	}
	cout << endl;
}


