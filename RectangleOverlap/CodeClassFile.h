#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
		pair<int, int> r1BottomLeft = { rec1[0], rec1[1] };
		pair<int, int> r1UpperLeft = { rec1[0], rec1[3] };
		pair<int, int> r1UpperRight = { rec1[2], rec1[3] };
		pair<int, int> r1BottomRight = { rec1[2], rec1[1] };

		pair<int, int> r2BottomLeft = { rec2[0], rec2[1] };
		pair<int, int> r2UpperLeft = { rec2[0], rec2[3] };
		pair<int, int> r2UpperRight = { rec2[2], rec2[3] };
		pair<int, int> r2BottomRight = { rec2[2], rec2[1] };
	}
};