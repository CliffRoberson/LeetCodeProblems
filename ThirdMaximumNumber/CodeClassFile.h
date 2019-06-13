#pragma once

#include "../std_lib_facilities.h"
#include <set>
class Solution {
public:
	int thirdMax(vector<int>& nums) 
	{
		if (nums.size() == 1)
			return nums[0];
		else if (nums.size() == 2)
		{
			if (nums[0] > nums[1])
				return nums[0];
			else
				return nums[1];
		}
		else
		{
			set<int, greater<int> > myInverseSortedSet;
			for (int num : nums)
			{
				myInverseSortedSet.insert(num);
			}

			set<int>::iterator it = myInverseSortedSet.begin();

			if (myInverseSortedSet.size() < 3)
				return (*it);
			else
			{
				int count = 0;
				while (count < 2)
				{
					count++;
					it++;
				}


				return (*it);
			}		
		}
	}
};