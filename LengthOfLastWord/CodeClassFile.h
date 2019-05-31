#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	int lengthOfLastWord(string s)
	{
		if (s.size() == 0)
			return 0;
		else
		{
			int count = 0;
			for (int i = s.size() - 1; i >= 0; i--)
			{
				if (s[i] == ' ' && count != 0)
					i = -1;
				else if (s[i] == ' ' && count == 0)
					count = count;
				else
					count++;
			}
			return count;
		}
	}
};