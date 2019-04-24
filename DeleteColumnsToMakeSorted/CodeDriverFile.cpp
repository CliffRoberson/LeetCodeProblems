#include "pch.h"
#include <iostream>
#include "CodeClassFile.h"

int main()
{
	vector<string> input = { "cba", "daf", "ghi" };

	if (Solution().minDeletionSize(input) == 1)
	{
		cout << "Test 1 OK";
	}
	else
	{
		cout << "Test 1 FAIL";
	}
	cout << endl;

	vector<string> input2 = { "a","b" };
	if (Solution().minDeletionSize(input2) == 0)
	{
		cout << "Test 2 OK";
	}
	else
	{
		cout << "Test 2 FAIL";
	}
	cout << endl;

	vector<string> input3 = { "zyx","wvu","tsr" };
	if (Solution().minDeletionSize(input3) == 3)
	{
		cout << "Test 3 OK";
	}
	else
	{
		cout << "Test 3 FAIL";
	}
	cout << endl;
}


