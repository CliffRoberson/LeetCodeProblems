#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	int strongPasswordChecker(string s) {

		int changes = 0;
		bool threeInARow = false;
		do
		{
			//check for three In a row
			threeInARow = false;
			int count = 1;
			for (int i = 0; i < s.size(); i++)
			{
				if (i < s.size() - 1 &&
					s[i] == s[i + 1])
					count++;
				else
				{
					count = 1;
				}

				if (count == 3)
				{
					i = s.size();
					threeInARow = true;
				}
			}

			if (s.size() > 20)
			{

			}

		} while (s.size() > 20 ||
			s.size() < 6 ||
			all_of(s.begin(), s.end(), islower) ||
			all_of(s.begin(), s.end(), isupper) ||
			all_of(s.begin(), s.end(), isalpha) ||
			threeInARow);
	
	}
};
