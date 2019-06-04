#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	bool rotateString(string A, string B) {
		for (int i = 0; i < A.size(); i++)
		{
			if (A == B)
				return true;
			
			A = A + A[0];
			A.erase(0, 1);
		}
		return false;
	}
};