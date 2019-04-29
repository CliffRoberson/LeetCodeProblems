#include "pch.h"
#include <iostream>
#include "CodeClassFile.h"

int main()
{
	vector<vector<int>> inputA = { {0, 2}, {5, 10}, {13, 23}, {24, 25} }; 
	vector<vector<int>> inputB = { {1, 5}, {8, 12}, {15, 24}, {25, 26} };

	vector<vector<int>> expected = { {1, 2}, {5, 5}, {8, 10}, {15, 23}, {24, 24}, {25, 25} };

	if (Solution().intervalIntersection(inputA,inputB ) == expected)
	{
		cout << "Test 1 OK";
	}
	else
	{
		cout << "Test 1 FAIL";
	}
	cout << endl;

	 inputA = { {5,10} };
	 inputB = { {5,10} };

	expected = { {5,10} };

	if (Solution().intervalIntersection(inputA, inputB) == expected)
	{
		cout << "Test 2 OK";
	}
	else
	{
		cout << "Test 2 FAIL";
	}
	cout << endl;


	inputA = {{10, 12}, {18, 19}};
	inputB = {{1, 6}, {8, 11}, {13, 17}, {19, 20}};

	expected = { {10, 11}, {19, 19} };

	if (Solution().intervalIntersection(inputA, inputB) == expected)
	{
		cout << "Test 3 OK";
	}
	else
	{
		cout << "Test 3 FAIL";
	}
	cout << endl;
}


