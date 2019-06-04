#pragma once

#include "../std_lib_facilities.h"

class Solution 
{
public:
	vector<string> letterCasePermutation(string originalString) 
	{
		vector<string> output;
		vector<int> indexes;
		for (int i = 0; i < originalString.size(); i++)
		{
			if (isalpha(originalString[i]))
				indexes.push_back(i);
		}
	
		int n = indexes.size();		
		
		vector<vector<int>> permutations;
		
		int max = pow(2, n);
		for (int i = 0; i < max; i++)
		{
			vector<int> permutation;
			int intToStoreAsBinary = i;
			for (int i = 0; i < n; i++)
			{
				permutation.push_back((intToStoreAsBinary >> i) & 1);
			}
			reverse(permutation.begin(), permutation.end());
			permutations.push_back(permutation);
		}
		
		for (int i = 0; i < permutations.size(); i++)
		{
			string tmp = originalString;
			for (int k = 0; k < permutations[i].size(); k++)
			{
				if (permutations[i][k] == 1)
				{
					tmp[indexes[k]] = toupper(tmp[indexes[k]]);
				}
				else
				{
					tmp[indexes[k]] = tolower(tmp[indexes[k]]);
				}
			}
			output.push_back(tmp);
		}

		return output;

	}
};