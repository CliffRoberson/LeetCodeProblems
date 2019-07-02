#pragma once

#include "../std_lib_facilities.h"
#include <set>

////////////////////////Time limit exceeded
class Solution {
public:
	set<vector<int>> comb(int N, int K, vector<int> nums)
	{
		std::string bitmask(K, 1); // K leading 1's
		bitmask.resize(N, 0); // N-K trailing 0's

		set<vector<int>> output;
		do {
			vector<int> tmpVec;
			for (int i = 0; i < N; ++i)
			{
				if (bitmask[i])
					tmpVec.push_back(nums[i]);
			}

			sort(tmpVec.begin(), tmpVec.end());
			output.insert(tmpVec);
		} while (std::prev_permutation(bitmask.begin(), bitmask.end()));
		return output;
	}

	vector<vector<int>> threeSum(vector<int>& nums) 
	{
		

		set<vector<int>> outputSet = comb(nums.size(), 3, nums);

		vector<vector<int>> finalOutput;
		if (nums.size() < 3)
			return finalOutput;

		for (vector<int> vec : outputSet)
		{
			int sum = 0;
			for (int num : vec)
			{			
				sum += num;
			}

			if (sum == 0)
				finalOutput.push_back(vec);
		}

		return finalOutput;
	}
};