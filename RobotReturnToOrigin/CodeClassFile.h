#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	bool judgeCircle(string moves) {
		pair<int, int> coordinates;
		coordinates.first = 0;
		coordinates.second = 0;

		for (char direction : moves)
		{
			if (direction == 'U')
			{
				coordinates.second++;
			}
			else if (direction == 'D')
			{
				coordinates.second--;
			}
			else if (direction == 'L')
			{
				coordinates.first--;
			}
			else
			{
				coordinates.first++;
			}
		}

		return coordinates.first == 0 && coordinates.second == 0;
	}
};