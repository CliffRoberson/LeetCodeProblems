#include "pch.h"
#include <iostream>
#include "CodeClassFile.h"

int main()
{
	vector<int> p1 = { -5,4 };
	vector<int> p2 = { -6,-5 };
	vector<int> p3 = { 4,6 };
	vector<vector<int>> input = { p1,p2,p3 };

	Solution().kClosest(input, 2);
}


