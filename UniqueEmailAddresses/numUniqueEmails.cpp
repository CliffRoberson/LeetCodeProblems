#include "pch.h"
#include <iostream>
#include "numUniqueEmails.h"

int main()
{
	vector<string> inputVector;
	inputVector.push_back("test.email+alex@leetcode.com");
	inputVector.push_back("test.e.mail+bob.cathy@leetcode.com");
	inputVector.push_back("testemail+david@lee.tcode.com");

	if (Solution().numUniqueEmails(inputVector) == 2)
	{
		cout << "Test 1 OK";
	}
	else
	{
		cout << "Test 1 FAIL";
	}
	cout << endl;
}


