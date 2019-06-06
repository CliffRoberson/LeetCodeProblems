#pragma once

#include "../std_lib_facilities.h"

class KthLargest {
public:
	int zeroIndexedKthHighest;
	vector<int> sortedNumsDesc;
	int zeroIndexedK;

	KthLargest(int k, vector<int>& nums) 
	{
		sort(nums.begin(), nums.end(), greater<int>());
		sortedNumsDesc = nums;
		zeroIndexedK = k - 1;		
	}

	int add(int val) 
	{
		if (sortedNumsDesc.size() == 0)
		{
			sortedNumsDesc.push_back(val);
			return val;
		}
		else
		{
			bool inserted = false;
			for (int i = 0; i < sortedNumsDesc.size(); i++)
			{
				if (val >= sortedNumsDesc[i])
				{
					sortedNumsDesc.insert(sortedNumsDesc.begin() + i, val);
					inserted = true;
					break;
				}
			}

			if (!inserted)
				sortedNumsDesc.insert(sortedNumsDesc.begin() + sortedNumsDesc.size(), val);

			zeroIndexedKthHighest = sortedNumsDesc[zeroIndexedK];
			return zeroIndexedKthHighest;
		}
		
	}
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */