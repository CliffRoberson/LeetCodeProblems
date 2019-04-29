#pragma once

#include "../std_lib_facilities.h"
#include <set>

class Solution {
public:
	vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) 
	{
		
		set<vector<int>> tmpOutput;
		for (vector<int> v1 : A)
		{
			for (vector<int> v2 : B)
			{
				
				if (v1[0] < v2[0] && 
					v1[0] < v2[1] &&
					v1[1] > v2[0] &&
					v1[1] < v2[1])
				{
					vector<int> tmp = { v2[0], v1[1] }; //Case 1
					tmpOutput.insert(tmp);
				}
				else if (v1[0] == v2[0] &&
						 v1[0] < v2[1] &&
						 v1[1] > v2[0] &&
						 v1[1] == v2[1])
				{
					vector<int> tmp = { v1[0], v1[1] }; // Case 2
					tmpOutput.insert(tmp);
				}
				else if (v1[0] == v2[0] &&
					v1[0] == v2[1] &&
					v1[1] == v2[0] &&
					v1[1] == v2[1])
				{
					vector<int> tmp = { v1[0], v1[1] }; // Case 14
					tmpOutput.insert(tmp);
				}
				else if (v1[0] > v2[0] &&
						 v1[0] < v2[1] &&
						 v1[1] > v2[0] &&
						 v1[1] > v2[1])
				{
					vector<int> tmp = { v1[0], v2[1] }; // Case 3
					tmpOutput.insert(tmp);
				}
				else if (v1[0] < v2[0] &&
						 v1[0] < v2[1] &&
						 v1[1] < v2[0] &&
						 v1[1] < v2[1])
				{
					int foo = 4; //Case 4
				}
				else if (v1[0] > v2[0] &&
						 v1[0] > v2[1] &&
						 v1[1] > v2[0] &&
						 v1[1] > v2[1])
				{
					int foo = 5; // Case 5
				}
				else if (v1[0] == v2[0] &&
						v1[0] < v2[1] &&
						v1[1] > v2[0] &&
						v1[1] < v2[1])
				{
					vector<int> tmp = { v1[0], v1[1] }; //Case 6
					tmpOutput.insert(tmp);
				}
				else if (v1[0] == v2[0] &&
						 v1[0] < v2[1] &&
						 v1[1] > v2[0] &&
						 v1[1] > v2[1])
				{
					vector<int> tmp = { v2[0], v2[1] }; // Case 7
					tmpOutput.insert(tmp);
				}
				else if (v1[0] < v2[0] &&
						v1[0] < v2[1] &&
						v1[1] > v2[0] &&
						v1[1] == v2[1])
				{
					vector<int> tmp = { v2[0], v2[1] }; // Case 8
					tmpOutput.insert(tmp);
				}
				else if (v1[0] > v2[0] &&
						v1[0] < v2[1] &&
						v1[1] > v2[0] &&
						v1[1] == v2[1])
				{
					vector<int> tmp = { v1[0], v1[1] }; // Case 9
					tmpOutput.insert(tmp);
				}
				else if (v1[0] < v2[0] &&
						v1[0] < v2[1] &&
						v1[1] == v2[0] &&
						v1[1] < v2[1])
				{
					vector<int> tmp = { v1[1], v2[0] }; // Case 10
					tmpOutput.insert(tmp);
				}
				else if (v1[0] > v2[0] &&
						v1[0] == v2[1] &&
						v1[1] > v2[0] &&
						v1[1] > v2[1])
				{
					vector<int> tmp = { v1[0], v2[1] }; // Case 11
					tmpOutput.insert(tmp);
				}
				else if (v1[0] < v2[0] &&
						v1[0] < v2[1] &&
						v1[1] > v2[0] &&
						v1[1] > v2[1])
				{
					vector<int> tmp = { v2[0], v2[1] }; // Case 12
					tmpOutput.insert(tmp);
				}
				else if (v1[0] > v2[0] &&
						v1[0] < v2[1] &&
						v1[1] > v2[0] &&
						v1[1] < v2[1])
				{
					vector<int> tmp = { v1[0], v1[1] }; // Case 13
					tmpOutput.insert(tmp);
				}
				else
				{
					cout << "missed a case" << endl;
				}
			}
		}

		vector<vector<int>> output(tmpOutput.begin(),tmpOutput.end());
		return output;
	}
};