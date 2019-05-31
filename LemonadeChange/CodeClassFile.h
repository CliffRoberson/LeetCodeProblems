#pragma once

#include "../std_lib_facilities.h"
#include <map>

class Solution {
public:
	bool lemonadeChange(vector<int>& bills) 
	{
		map<int, int> billsOnHand;
		for (int i = 0; i < bills.size(); i++)
		{
			if (bills[i] == 5)
			{
				billsOnHand[5]++;
			}
			else if (bills[i] == 10)
			{
				if (billsOnHand[5] > 0)
				{
					billsOnHand[5]--;
					billsOnHand[10]++;
				}
				else
					return false;
			}
			else
			{
				if (billsOnHand[5] > 0 && billsOnHand[10] > 0)
				{
					billsOnHand[5]--;
					billsOnHand[10]--;
					billsOnHand[20]++;
				}
				else if (billsOnHand[5] >= 3)
				{
					billsOnHand[5] -= 3;
					billsOnHand[20]++;
				}
				else
					return false;
			}
		}
		return true;
	}
};