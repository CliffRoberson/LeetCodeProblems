#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	int maxProfit(vector<int>& prices) 
	{
		int maxProfit = 0;
		for (int i = 0; i < prices.size(); i++)
		{
			for (int k = i + 1; k < prices.size(); k++)
			{
				int profit = prices[k] - prices[i];
				if (profit > maxProfit)
				{
					maxProfit = profit;
				}
			}
		}
		return maxProfit;
	}
};