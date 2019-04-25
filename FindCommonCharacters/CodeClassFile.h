#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	vector<string> commonChars(vector<string>& A)
	{
		vector<string> output;
		for (int i = 0; i < A[0].size(); i++)
		{
			string letter(1,A[0][i]);
			int count = 1;
			for (int k = 1; k < A.size(); k++)
			{
				int pos = A[k].find(letter);
				if (pos != -1)
				{
					count++;
					A[k].erase(pos,1);
				}
			}
			if (count == A.size())
				output.push_back(letter);
		}
		return output;
	}
};