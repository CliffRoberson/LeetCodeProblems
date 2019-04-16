#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) 
	{
		vector<int> rowMaxes;
		vector<int> colMaxes;
		int lengthAndWidth = grid.size();
		
		for (int i = 0; i < lengthAndWidth; i++)
		{
			int rowMax = 0;
			int colMax = 0;

			for (int j = 0; j < lengthAndWidth; j++)
			{
				int currentCellValueForRow = grid[i][j];
				int currentCellValueForCol = grid[j][i];

				if (currentCellValueForRow > rowMax)
				{
					rowMax = currentCellValueForRow;
				}
				if (currentCellValueForCol > colMax)
				{
					colMax = currentCellValueForCol;
				}
			}
			rowMaxes.push_back(rowMax);
			colMaxes.push_back(colMax);
		}

		int sum = 0;
		for (int i = 0; i < rowMaxes.size(); i++)
		{
			for (int j = 0; j < colMaxes.size(); j++)
			{
				int min;
				if (rowMaxes[i] < colMaxes[j])
				{
					min = rowMaxes[i];
				}
				else
				{
					min = colMaxes[j];
				}

				sum = sum + min - grid[i][j];
			}
		}

		return sum;

	}
};