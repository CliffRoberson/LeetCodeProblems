#pragma once

#include "../std_lib_facilities.h"
#include <set>

class Solution {
public:
	int numUniqueEmails(vector<string>& emails) 
	{
		set<string> outputSet;
		for (string email : emails)
		{
			string outputString = "";
			bool ingest = true;
			bool firstHalf = true;
			
			for (char symbol : email)
			{
				if (symbol == '@')
				{
					firstHalf = false;
					ingest = true;
					outputString += symbol;					
				}
				else if (symbol == '.' && firstHalf || !ingest)
				{
					continue;
				}
				else if (symbol == '+' && ingest && firstHalf)
				{
					ingest = false;
				}
				else
				{
					outputString += symbol;
				}
			}
			outputSet.insert(outputString);
		}
		return outputSet.size();
	}
};