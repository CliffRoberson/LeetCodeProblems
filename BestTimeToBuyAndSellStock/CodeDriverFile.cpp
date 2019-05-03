#include "pch.h"
#include <iostream>
#include "CodeClassFile.h"

int main()
{
	vector<int> input = { 7,1,5,3,6,4 };

	if (Solution().maxProfit(input) == 5)
	{
		cout << "Test 1 OK";
	}
	else
	{
		cout << "Test 1 FAIL";
	}
	cout << endl;

	input = { 7,6,4,3,1 };
	if (Solution().maxProfit(input) == 0)
	{
		cout << "Test 2 OK";
	}
	else
	{
		cout << "Test 2 FAIL";
	}
	cout << endl;
}


