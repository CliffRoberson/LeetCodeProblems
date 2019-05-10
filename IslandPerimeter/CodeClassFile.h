#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	int islandPerimeter(vector<vector<int>>& grid) 
	{
		int sum = 0;
		for (int row = 0; row < grid.size(); row++)
		{
			for (int col = 0; col < grid[row].size(); col++)
			{
				pair<int, int> left(row, col - 1);
				pair<int, int> up(row - 1, col);
				pair<int, int> right(row, col + 1);
				pair<int, int> down(row + 1, col);
				if (grid[row][col] == 1)
				{
					if (left.second < 0)
						sum++;
					else if (grid[left.first][left.second] == 0)
						sum++;
					else {}

					if (up.first < 0)
						sum++;
					else if (grid[up.first][up.second] == 0)
						sum++;
					else {}

					if (right.second >= grid[row].size())
						sum++;
					else if (grid[right.first][right.second] == 0)
						sum++;
					else {}

					if (down.first >= grid.size())
						sum++;
					else if (grid[down.first][down.second] == 0)
						sum++;
					else {}
				}
				
			}
		}
		return sum;
	}
};