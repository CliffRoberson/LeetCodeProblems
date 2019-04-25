#include "pch.h"
#include <iostream>
#include "CodeClassFile.h"

int main()
{
	vector<string> input = { "bella","label","roller" };
	vector<string> expected = { "e","l","l" };
	if (Solution().commonChars(input) == expected)
	{
		cout << "Test 1 OK";
	}
	else
	{
		cout << "Test 1 FAIL";
	}
	cout << endl;

	input = { "cool","lock","cook" };
	expected = { "c","o" };
	if (Solution().commonChars(input) == expected)
	{
		cout << "Test 2 OK";
	}
	else
	{
		cout << "Test 2 FAIL";
	}
	cout << endl;
}


