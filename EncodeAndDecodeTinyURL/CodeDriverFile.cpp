#include "pch.h"
#include <iostream>
#include "CodeClassFile.h"

int main()
{
	string input = "https://leetcode.com/problems/design-tinyurl";
	cout << "input: " << input << endl;

	Solution sol = Solution();
	string encoding = sol.encode(input);
	cout << encoding << endl;
	string decoding = sol.decode(encoding);
	cout << decoding << endl;
		

	if (input == decoding )
	{
		cout << "Test 1 OK";
	}
	else
	{
		cout << "Test 1 FAIL";
	}
	cout << endl;
}


