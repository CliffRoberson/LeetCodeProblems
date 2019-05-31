#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	string removeDuplicates(string S) 
	{
		if (S.size() == 1)
			return S;
		else
		{
			for (int i = 0; i < S.size(); i++)
			{
				if (S[i] == S[i + 1])
				{
					S.erase(i, 2);
					i = -1;
				}
			}
			return S;
		}
	}
};