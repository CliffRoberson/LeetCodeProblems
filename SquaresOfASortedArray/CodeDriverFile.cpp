#include "pch.h"
#include <iostream>
#include "CodeClassFile.h"

int main()
{
	vector<int> input = { -4,-1,0,3,10 };
	vector<int> expected = { 0,1,9,16,100 };

	if (Solution().sortedSquares(input) == expected)
	{
		cout << "Test 1 OK";
	}
	else
	{
		cout << "Test 1 FAIL";
	}
	cout << endl;

	input = { -7,-3,2,3,11 };
	expected = { 4,9,9,49,121 };

	if (Solution().sortedSquares(input) == expected)
	{
		cout << "Test 2 OK";
	}
	else
	{
		cout << "Test 2 FAIL";
	}
	cout << endl;
}


