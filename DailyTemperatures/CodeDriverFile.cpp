#include "pch.h"
#include <iostream>
#include "CodeClassFile.h"

int main()
{
	vector<int> input = { 73, 74, 75, 71, 69, 72, 76, 73 };
	vector<int> expected = {1, 1, 4, 2, 1, 1, 0, 0};
	if (Solution().dailyTemperatures(input) == expected)
	{
		cout << "Test 1 OK";
	}
	else
	{
		cout << "Test 1 FAIL";
	}
	cout << endl;
}


