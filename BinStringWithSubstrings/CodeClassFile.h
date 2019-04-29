#pragma once

#include "../std_lib_facilities.h"
#include <bitset>
class Solution {
public:
	bool queryString(string S, int N) {
		vector<string> binaryStrings;
		int const stringSize = S.size();
		for (int i = 1; i <= N; i++)
		{
			string s = std::bitset< 20 >(i).to_string();

			int count = 0;
			while (s[count] == '0')
			{
				count++;
			}
			s.erase(0,count);
			if (S.find(s) == -1)
			{
				return false;
			}
			cout << i << endl;
		}

		return true;
	}
};