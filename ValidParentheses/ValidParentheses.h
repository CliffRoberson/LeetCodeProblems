#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	bool isValid(string s) {

		vector<char> openSymbol;

		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == '(')
			{
				openSymbol.push_back('P');
				
			}
			else if (s[i] == ')')
			{
				if (openSymbol.size() == 0)
				{
					return false;
				}
				char lastSymbol = openSymbol.back();
				if (lastSymbol != 'P')
				{
					return false;
				}
				else
				{
					openSymbol.pop_back();
				}
			}
			else if (s[i] == '{')
			{
				openSymbol.push_back('C');
			}
			else if (s[i] == '}')
			{
				if (openSymbol.size() == 0)
				{
					return false;
				}
				char lastSymbol = openSymbol.back();
				if (lastSymbol != 'C')
				{
					return false;
				}
				else
				{
					openSymbol.pop_back();
				}
			}
			else if (s[i] == '[')
			{
				openSymbol.push_back('B');
			}
			else if (s[i] == ']')
			{
				if (openSymbol.size() == 0)
				{
					return false;
				}
				char lastSymbol = openSymbol.back();
				if (lastSymbol != 'B')
				{
					return false;
				}
				else
				{
					openSymbol.pop_back();
				}
			}

		}
		if (openSymbol.size() == 0)
			return true;
		else
			return false;
	}	
};