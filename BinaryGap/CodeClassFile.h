#pragma once

#include "../std_lib_facilities.h"
#include <stack>
class Solution {
public:
	string toBinary(int num)
	{
		stack<int> s;
		while (num > 0)
		{
			int rem = num % 2;
			s.push(abs(rem));
			num = num / 2;
		}

		string binString = "";
		while (!s.empty())
		{
			binString += to_string(s.top());
			s.pop();
		}
		return binString;

	}

	int binaryGap(int N) 
	{
		string bin = toBinary(N);
		int dist = 0;
		bool count = false;
		int maxDist = 0;

		for (int i = 0; i < bin.size(); i++)
		{
			char curChar = bin[i];
			if (count == false && curChar == '0')
			{

			}
			else if (count == false && curChar == '1')
			{
				count = true;
			}
			else if (count == true && curChar == '0')
			{
				dist++;
			}
			else
			{
				dist++;
				if (dist > maxDist)
					maxDist = dist;
				dist = 0;
			}
		}
		return maxDist;
	}
};