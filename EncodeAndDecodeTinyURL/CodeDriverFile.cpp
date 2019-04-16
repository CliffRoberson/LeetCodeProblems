#include "pch.h"
#include <iostream>
#include "CodeClassFile.h"

int main()
{
	string input = "foobar";
	if (Solution().decode(Solution().encode(input)) == input )
	{
		cout << "Test 1 OK";
	}
	else
	{
		cout << "Test 1 FAIL";
	}
	cout << endl;
}


