#include "pch.h"
#include <iostream>
#include "CodeClassFile.h"

int main()
{
	vector<int> input = { 4,2,5,7 };
	vector<int> expected = { 4,5,2,7 };
	if (Solution().sortArrayByParityII(input) == expected )
	{
		cout << "Test 1 OK";
	}
	else
	{
		cout << "Test 1 FAIL";
	}
	cout << endl;
}


