#include "pch.h"
#include <iostream>
#include "CodeClassFile.h"

int main()
{
	
	vector<int> row1 = { 1,1,0 };
	vector<int> row2 = { 1,0,1 };
	vector<int> row3 = { 0,0,0 };
	vector< vector<int> > input = { row1,row2,row3 };

	vector<int> rowa = { 1,0,0 };
	vector<int> rowb = { 0,1,0 };
	vector<int> rowc = { 1,1,1 };
	vector< vector<int> > expected = { rowa,rowb,rowc };

	if (Solution().flipAndInvertImage(input) == expected)
	{
		cout << "Test 1 OK";
	}
	else
	{
		cout << "Test 1 FAIL";
	}
	cout << endl;
}


