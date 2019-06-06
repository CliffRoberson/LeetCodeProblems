#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	int countSegments(string s) {

		istringstream iss(s);
		string word;
		int count = 0;
		while (iss >> word) {
			count++;
		}
		return count;
	}
};

