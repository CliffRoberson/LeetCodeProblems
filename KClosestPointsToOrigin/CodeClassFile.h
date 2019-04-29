#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
		
		vector<pair<double, vector<int>>> distanceAndCoordinate;
		for (vector<int> coordinate : points)
		{
			double distance = sqrt(pow(coordinate[0],2) + pow(coordinate[1],2));
			pair<double, vector<int>> tmp = { distance, coordinate };
			distanceAndCoordinate.push_back(tmp);
		}

		sort(distanceAndCoordinate.begin(),distanceAndCoordinate.end());
		vector<vector<int>> output;
		for (int i = 0; i < K; i++)
		{
			output.push_back(distanceAndCoordinate[i].second);
		}
		return output;
	}
};