#include "pch.h"
#include <iostream>
#include "CodeClassFile.h"

int main()
{
	vector<int> input = { 4,3,2,7,8,2,3,1 };
	Solution().findDisappearedNumbers(input);

	input = {};
	Solution().findDisappearedNumbers(input);

	input = {1,1};
	Solution().findDisappearedNumbers(input);
}


