#pragma once

#include "../std_lib_facilities.h"
#include <map>

class Solution {
public:
	vector<string> uncommonFromSentences(string A, string B) 
	{
		map<string, int> numOfWord;

		istringstream iss(A);
		string word;
		while (iss >> word) 
		{
			numOfWord[word]++;
		}

		istringstream iss0(B);
		while (iss0 >> word)
		{
			numOfWord[word]++;
		}

		vector<string> output;
		map<string, int>::iterator it;

		for (it = numOfWord.begin(); it != numOfWord.end(); it++)
		{
			if (it->second == 1)
				output.push_back(it->first);
		}
		return output;
	}
};