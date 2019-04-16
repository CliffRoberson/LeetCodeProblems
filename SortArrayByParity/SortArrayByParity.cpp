#include "pch.h"
#include <iostream>
#include "SortArrayByParity.h"

int main()
{
	vector<int> input = { 3,1,2,4 };
	vector<int> expected = { 2,4,3,1 };
	if (Solution().sortArrayByParity(input) == expected)
	{
		cout << "Test OK";
	}
}


