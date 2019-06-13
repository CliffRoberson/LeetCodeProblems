#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	vector<string> findOcurrences(string text, string first, string second) 
	{
		istringstream iss(text);
		string word;
		vector<string> output;
		
		bool firstStage = true;
		bool secondStage = false;
		bool thirdStage = false;

		while (iss >> word)
		{
			if (firstStage)
			{
				if (word == first)
				{
					 firstStage = false;
					 secondStage = true;
					 thirdStage = false;
				}
				else
				{
					 firstStage = true;
					 secondStage = false;
					 thirdStage = false;
				}
			}
			else if (secondStage)
			{
				if (word == first)
				{
					 firstStage = false;
					 secondStage = true;
					 thirdStage = false;
				}
				else if (word == second)
				{
					 firstStage = false;
					 secondStage = false;
					 thirdStage = true;
				}
				else
				{
					 firstStage = true;
					 secondStage = false;
					 thirdStage = false;
				}
			}
			else if (thirdStage)
			{
				output.push_back(word);
				if (word == first)
				{
					 firstStage = false;
					 secondStage = true;
					 thirdStage = false;
				}
				else
				{
					 firstStage = true;
					 secondStage = false;
					 thirdStage = false;
				}	
			}
		}
		
		return output;
	}
};