#pragma once

#include "../std_lib_facilities.h"

class RecentCounter {
public:
	int lowerBound = 0;
	vector<int> times;
	RecentCounter() 
	{
		
	}

	int ping(int t) 
	{
		lowerBound = t - 3000;
		times.push_back(t);
		for (int i = 0; i < times.size(); i++)
		{
			if (times[i] < lowerBound)
			{
				times.erase(times.begin() + i);
				i--;
			}
		}
		
		return times.size();
	}
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */