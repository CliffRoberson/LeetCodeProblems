#include "pch.h"
#include <iostream>
#include "CodeClassFile.h"

int main()
{
	vector<int> stop1 = {2, 1, 5};
	vector<int>stop2 = { 3,3,7 };

	vector<vector<int>> input = { stop1, stop2 };

	Solution().carPooling(input, 4);
}


