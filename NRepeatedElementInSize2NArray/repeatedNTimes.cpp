#include "pch.h"
#include <iostream>
#include "repeatedNTimes.h"

int main()
{
	vector<int> input = { 1,2,3,3 };
	if (Solution().repeatedNTimes(input) == 3)
		cout << "Test 1 OK";
	else
		cout << "Test 1 FAIL";
	cout << endl;

	input = { 2,1,2,5,3,2 };
	if (Solution().repeatedNTimes(input) == 2)
		cout << "Test 2 OK";
	else
		cout << "Test 2 FAIL";
	cout << endl;

	input = { 5,1,5,2,5,3,5,4 };
	if (Solution().repeatedNTimes(input) == 5)
		cout << "Test 3 OK";
	else
		cout << "Test 3 FAIL";
	cout << endl;
	

}


