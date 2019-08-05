#pragma once
#include "..//std_lib_facilities.h"
#include <regex>

class Solution {
public:
	int myAtoi(string str) 
	{
		str = regex_replace(str, std::regex("^ +"), "");
		reverse(str.begin(), str.end());
		str = regex_replace(str, std::regex("^ +"), "");
		reverse(str.begin(), str.end());

		if (str.size() == 0 ||
			isalpha(str[0]) ||
			(!isdigit(str[0]) && str[0] != '+' && str[0] != '-') ||
			(str[0] == '+' && !isdigit(str[1])) ||
			(str[0] == '-' && !isdigit(str[1]))
			)
		{
			return 0;		
		}
		else	
		{
			bool isNeg = false;
			if (str[0] == '+')
			{
				str = str.substr(1);
			}
			else if (str[0] == '-')
			{
				isNeg = true;
			}

			int result;
			try
			{
				result = stoi(str);
			}
			catch (out_of_range& e)
			{
				if (isNeg)
					result = -2147483647 - 1;
				else
					result = 2147483647;
			}
			
			return result;
		}		
	}
};