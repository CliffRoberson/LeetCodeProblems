#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	bool carPooling(vector<vector<int>>& trips, int capacity) {
		int lastEndpoint = 0;
		for (int i = 0; i < trips.size(); i++)
		{
			if (trips[i][2] > lastEndpoint)
				lastEndpoint = trips[i][2];
		}

		vector<int> journey(lastEndpoint+1);
		for (int i = 0; i < trips.size(); i++)
		{
			int passengers = trips[i][0];
			int startingKilo = trips[i][1];
			int endingKilo = trips[i][2];
			journey[startingKilo] += passengers;
			journey[endingKilo] -= passengers;
		}

		int curAmountRiding = 0;
		for (int i = 0; i < journey.size(); i++)
		{
			curAmountRiding += journey[i];
			if (curAmountRiding > capacity)
				return false;
		}

		return true;
	}
};