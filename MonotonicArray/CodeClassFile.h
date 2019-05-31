#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	bool isMonotonic(vector<int>& A) 
	{
		if (A.size() == 1)
			return true;
		else
		{
			string direction;
			string ultimateDirection;
			if (A[0] == A[1])
			{
				direction = "same";
				ultimateDirection = "notSet";
			}			
			else if (A[0] > A[1])
			{
				direction = "decrease";
				ultimateDirection = "dec";
			}
			else
			{
				direction = "increase";
				ultimateDirection = "inc";
			}
				
			for (int i = 0; i < A.size() - 1; i++)
			{
				if (ultimateDirection == "dec" && A[i] < A[i + 1])
					return false;
				else if (ultimateDirection == "inc" && A[i] > A[i + 1])
					return false;

				if (A[i] > A[i + 1])
				{
					direction = "decrease";
					ultimateDirection = "dec";
				}
				else if (A[i] < A[i + 1])
				{
					direction = "increase";
					ultimateDirection = "inc";
				}
				else
					direction = "same";
			}
			return true;
		}
	}
};