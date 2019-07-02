#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:

	vector<vector<int>> output;
	int numOfElements;
	vector<int> elements;

	void permuteHelper(int pos, vector<bool> used, vector<int> permutation)
	{
		if (pos == numOfElements)
		{
			vector<int> tmp;
			for (int num : permutation)
			{
				tmp.push_back(elements[num]);
			}
			output.push_back(tmp);
		}		
		else
		{
			for (int i = 0; i < numOfElements; i++)
			{
				if (!used[i])
				{
					used[i] = true;
					permutation[pos] = i;
					permuteHelper(pos + 1, used, permutation);
					used[i] = false;
				}
			}
		}
	}

	vector<vector<int>> permute(vector<int>& nums) 
	{
		elements = nums;
		vector<bool> used(nums.size());
		vector<int> permutation(nums.size());
		numOfElements = nums.size();

		permuteHelper(0, used, permutation);

		return output;
	}
};