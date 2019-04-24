#include "pch.h"
#include <iostream>
#include "CodeClassFile.h"

int main()
{
	vector<int> times = { 642,1849,4921,5936,5957 };

	RecentCounter* obj = new RecentCounter();
	for (int i = 0; i < times.size(); i++)
	{
		cout << obj->ping(times[i]);
	}
}


