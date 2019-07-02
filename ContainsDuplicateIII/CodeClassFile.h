#pragma once

#include "../std_lib_facilities.h"

//Time limit exceeded

class Solution {
public:
	bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff)
	{
		if (indexDiff <= 0 || valueDiff < 0)
			return false;
		else
		{
			for (int index = 0; index < nums.size() - 1; index++)
			{
				for (int i = index + 1;i < nums.size() || i - index <= indexDiff ; i++)
				{
					unsigned long absDiff;
					long indexValue = nums[index];
					long iValue = nums[i];

					if (indexValue < iValue)
					

					absDiff = abs(indexValue - iValue);

						if (absDiff <= valueDiff)
							return true;
				}
			}
			return false;
		}
	}
};