#include "pch.h"
#include <iostream>
#include "CodeClassFile.h"

int main()
{
	//[[0,1,0,0],[1,1,1,0],[0,1,0,0],[1,1,0,0]]
	vector<int> r1 = { 0, 1, 0, 0 };
	vector<int> r2 = { 1,1,1,0 };
	vector<int> r3 = { 0,1,0,0 };
	vector<int> r4 = { 1,1,0,0 };
	
	vector<vector<int>> input = { r1,r2,r3,r4 };

	int ans = Solution().islandPerimeter(input);
	cout << ans;

}


