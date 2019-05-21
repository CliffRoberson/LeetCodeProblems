#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	string addBinary(string a, string b) 
	{
		string output;
		int sizeDiff = a.size() - b.size();
		if (sizeDiff < 0)
			sizeDiff *= -1;
		if (a.size() < b.size())
			a = string(sizeDiff, '0').append(a);
		else
			b = string(sizeDiff, '0').append(b);

		reverse(a.begin(), a.end());
		reverse(b.begin(), b.end());

		bool carry = false;
		for (int i = 0; i < a.size(); i++)
		{
			if (!carry)
			{
				if (a[i] == '0' && b[i] == '0')
					output += '0';
				else if (a[i] != b[i])
					output += '1';
				else
				{
					output += '0';
					carry = true;
				}
			}
			else
			{
				if (a[i] == '0' && b[i] == '0')
				{
					output += '1';
					carry = false;
				}
				else if (a[i] != b[i])
					output += '0';
				else
					output += '1';
			}
		}

		if (carry)
			output += '1';

		reverse(output.begin(), output.end());
		return output;
	}
};