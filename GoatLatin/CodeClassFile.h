#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	string toGoatLatin(string S) 
	{
		string output = "";
		int count = 1;
		istringstream iss(S);
		string word;
		while (iss >> word) 
		{
			char firstChar = word[0];
			if (firstChar == 'a' ||
				firstChar == 'A' ||
				firstChar == 'e' ||
				firstChar == 'E' ||
				firstChar == 'i' ||
				firstChar == 'I' ||
				firstChar == 'o' ||
				firstChar == 'O' ||
				firstChar == 'u' ||
				firstChar == 'U')
			{
				word += "ma";
			}
			else
			{
				word.erase(0, 1);
				word = word + firstChar + "ma";
			}

			for (int i = 0; i < count; i++)
			{
				word += 'a';
			}
			output = output + word + " ";
			count++;
		}
		output.erase(output.size() - 1, 1);
		return output;
	}
};