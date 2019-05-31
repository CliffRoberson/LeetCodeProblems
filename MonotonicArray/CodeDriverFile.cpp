#include "pch.h"
#include <iostream>
#include "CodeClassFile.h"

int main()
{
	vector<int> input = { 11, 11, 9, 4, 3, 3, 3, 1, -1, -1, 3, 3, 3, 5, 5, 5 };
	
	cout << Solution().isMonotonic(input);
}


