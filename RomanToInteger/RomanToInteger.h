#pragma once
#include "std_lib_facilities.h"
class Solution
{
public:
	int romanToInt(string s) 
	{ 
		int sum = 0;
		for (int i = 0; i < s.size(); i++)
		{
			char currentChar = s[i];
			if (currentChar == 'I' && (i + 1) < s.size())
			{
				if (s[i + 1] == 'V')
				{
					sum += 4;
					i++;
				}
				else if (s[i + 1] == 'X')
				{
					sum += 9;
					i++;
				}
				else
				{
					sum += 1;
				}
			}
			else if (currentChar == 'X' && (i + 1) < s.size())
			{
				if (s[i + 1] == 'L')
				{
					sum += 40;
					i++;
				}
				else if (s[i + 1] == 'C')
				{
					sum += 90;
					i++;
				}
				else
				{
					sum += 10;
				}
			}
			else if (currentChar == 'C' && (i + 1) < s.size())
			{
				if (s[i + 1] == 'D')
				{
					sum += 400;
					i++;
				}
				else if (s[i + 1] == 'M')
				{
					sum += 900;
					i++;
				}
				else
				{
					sum += 100;
				}
			}
			else
			{
				if (currentChar == 'I')
				{
					sum += 1;
				}
				else if (currentChar == 'V')
				{
					sum += 5;
				}
				else if (currentChar == 'X')
				{
					sum += 10;
				}
				else if (currentChar == 'L')
				{
					sum += 50;
				}
				else if (currentChar == 'C')
				{
					sum += 100;
				}
				else if (currentChar == 'D')
				{
					sum += 500;
				}
				else
				{
					sum += 1000;
				}
			}
		}

		return sum;
	}
};

