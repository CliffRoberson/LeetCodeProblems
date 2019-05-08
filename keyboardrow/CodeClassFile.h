#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	vector<string> findWords(vector<string>& words) 
	{
		string firstRow = "qwertyuiopQWERTYUIOP";
		string secondRow = "asdfghjklASDFGHJKL";
		string thirdRow = "zxcvbnmZXCVBNM";
		vector<string> output;

		for (int i = 0; i < words.size(); i++)
		{
			string word = words[i];
			if (firstRow.find(word[0]) != string::npos)
			{
				bool isOK = true;
				for (int k=0;k<word.size();k++)
				{
					if (firstRow.find(word[k]) == string::npos)
					{
						isOK = false;
						k = word.size();
					}
				}
				if (isOK)
					output.push_back(word);

			}
			else if (secondRow.find(word[0]) != string::npos)
			{
				bool isOK = true;
				for (int k = 0; k < word.size(); k++)
				{
					if (secondRow.find(word[k]) == string::npos)
					{
						isOK = false;
						k = word.size();
					}
				}
				if (isOK)
					output.push_back(word);
			}
			else if (thirdRow.find(word[0]) != string::npos)
			{
				bool isOK = true;
				for (int k = 0; k < word.size(); k++)
				{
					if (thirdRow.find(word[k]) == string::npos)
					{
						isOK = false;
						k = word.size();
					}
				}
				if (isOK)
					output.push_back(word);
			}
		}
		return output;
	}
};