#include "pch.h"
#include <iostream>
#include "CodeClassFile.h"

int main()
{
	vector<int> expected = { 1,2,3,4,5,6,7,8,9,11,12,15,22 };
	if (Solution().selfDividingNumbers(1,22) == expected)
	{
		cout << "Test 1 OK";
	}
	else
	{
		cout << "Test 1 FAIL";
	}
	cout << endl;
}


