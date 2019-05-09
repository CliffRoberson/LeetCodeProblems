#include "pch.h"
#include <iostream>
#include "CodeClassFile.h"

int main()
{
	vector<int> r1 = { 1,2,3,4 };
	vector<int> r2 = { 5,1,2,3 };
	vector<int> r3 = { 9,5,1,2 };
	vector<vector<int>> input = { r1,r2,r3 };


	

	r1 = { 1,2 };
	r2 = { 2,2 };
	input = { r1,r2 };

	Solution().isToeplitzMatrix(input);
}


