#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	bool canConstruct(string ransomNote, string magazine) 
	{
		if (magazine.size() == 0 && ransomNote.size() != 0)
		{
			return false;
		}		
		else
		{
			for (int i = 0; i < magazine.size(); i++)
			{
				char magazineLetter = magazine[i];
				int indexFound = ransomNote.find_first_of(magazineLetter);
				if (indexFound != string::npos)
				{
					ransomNote.erase(indexFound, 1);
					magazine.erase(i, 1);
					i--;
				}
			}
		}

		return ransomNote.size() == 0;
		
	}
};