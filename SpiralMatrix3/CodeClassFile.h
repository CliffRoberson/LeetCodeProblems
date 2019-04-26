#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	vector<vector<int>> spiralMatrixIII(int R, int C, int r0, int c0)
	{
		vector<vector<int>> output;
		vector<int> initialSpace = { r0,c0 };
		output.push_back(initialSpace);
		pair<int, int> currentSpace = { r0, c0 };
		int numOfValidSpaces = R * C;
		int distToTravel = 1;
		int numOfValidSpacesVisited = 1;
		int direction = 0;//0=right,1=down,2=left,3=up

		while (numOfValidSpacesVisited < numOfValidSpaces)
		{
			if (direction == 0)
			{
				for (int i = 0; i < distToTravel; i++)
				{
					vector<int> validSpace;
					currentSpace.second++;
					if (currentSpace.first >-1 && currentSpace.second >-1 && currentSpace.first < R && currentSpace.second < C)
					{
						numOfValidSpacesVisited++;
						validSpace.push_back(currentSpace.first);
						validSpace.push_back(currentSpace.second);
						output.push_back(validSpace);
					}
				}
				direction = 1;
			}
			else if (direction == 1)
			{
				for (int i = 0; i < distToTravel; i++)
				{
					vector<int> validSpace;
					currentSpace.first++;
					if (currentSpace.first > -1 && currentSpace.second > -1 && currentSpace.first < R && currentSpace.second < C)
					{
						numOfValidSpacesVisited++;
						validSpace.push_back(currentSpace.first);
						validSpace.push_back(currentSpace.second);
						output.push_back(validSpace);
					}
				}
				distToTravel++;
				direction = 2;
			}
			else if (direction == 2)
			{
				for (int i = 0; i < distToTravel; i++)
				{
					vector<int> validSpace;
					currentSpace.second--;
					if (currentSpace.first > -1 && currentSpace.second > -1 && currentSpace.first < R && currentSpace.second < C)
					{
						numOfValidSpacesVisited++;
						validSpace.push_back(currentSpace.first);
						validSpace.push_back(currentSpace.second);
						output.push_back(validSpace);
					}
				}
				direction = 3;
			}
			else
			{
				for (int i = 0; i < distToTravel; i++)
				{
					vector<int> validSpace;
					currentSpace.first--;
					if (currentSpace.first > -1 && currentSpace.second > -1 && currentSpace.first < R && currentSpace.second < C)
					{
						numOfValidSpacesVisited++;
						validSpace.push_back(currentSpace.first);
						validSpace.push_back(currentSpace.second);
						output.push_back(validSpace);
					}
				}
				distToTravel++;
				direction = 0;				
			}
		}
		return output;
	}
};