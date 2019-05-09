#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	bool isToeplitzMatrix(vector<vector<int>>& matrix) 
	{
		vector<vector<int>> shiftedMatrix;
		for (int i = 0; i < matrix.size(); i++)
		{
			int numActualToPush = matrix[i].size();
			int numBlanksToPush = matrix.size() - 1;
			int numBlanksPushed = 0;
			vector<int> shiftedRow;
			for (int k = 0; k < matrix[i].size() + matrix.size() - 1; k++)
			{
				if (numBlanksToPush - i > 0)
				{
					shiftedRow.push_back(-1);
					numBlanksToPush--;
					numBlanksPushed++;
				}
				else if (numActualToPush > 0)
				{
					shiftedRow.push_back(matrix[i][k - numBlanksPushed]);
					numActualToPush--;
				}
				else
				{
					shiftedRow.push_back(-1);
				}
			}
			shiftedMatrix.push_back(shiftedRow);
		}

		for (int i = 0; i < shiftedMatrix[0].size(); i++)
		{
			int numToCheck = -1;
			for (int k = 0; k < shiftedMatrix.size(); k++)
			{
				int curNum = shiftedMatrix[k][i];
				if (curNum != -1 && numToCheck == -1)
					numToCheck = curNum;
				else if (curNum != -1 && curNum != numToCheck)
					return false;
			}
		}

		return true;

	}
};