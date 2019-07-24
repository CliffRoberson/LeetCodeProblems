#include "../std_lib_facilities.h"

class Solution {
public:
	int heightChecker(vector<int>& heights) {
		vector<int> tmp = heights;
		sort(tmp.begin(), tmp.end());

		int count = 0;
		for (int i = 0; i < heights.size(); i++)
		{
			if (heights[i] != tmp[i])
				count++;
		}

		return count;
	}
};