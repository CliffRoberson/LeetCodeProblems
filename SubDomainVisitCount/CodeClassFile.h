#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	vector<string> subdomainVisits(vector<string>& cpdomains) 
	{
		vector<pair<string, int>> domainAndCount;
		for (string domain : cpdomains)
		{
			string firstWord = domain.substr(0, domain.find(" "));
			int count = stoi(firstWord);

			domain = domain.substr(domain.find_first_of(" \t") + 1);

			stringstream test(domain);
			string segment;
			vector<string> seglist;

			while (getline(test, segment, '.'))
			{
				seglist.push_back(segment);
			}
			
			vector<string> tmp;
			if (seglist.size() == 3)
				tmp = { seglist[0] + "." + seglist[1] + "." + seglist[2], seglist[1] + "." + seglist[2], seglist[2] };
			else if (seglist.size() == 2)
				tmp = { seglist[0] + "." + seglist[1] , seglist[1] };
			else
				tmp = { seglist[0] };

			for (string d : tmp)
			{
				auto pos = std::find_if(domainAndCount.begin(), domainAndCount.end(),[d](std::pair<string, int> const &b) {return b.first == d;});
				if (pos == domainAndCount.end())
				{
					pair<string, int> tmpPair = { d, count };
					domainAndCount.push_back(tmpPair);
				}
				else
				{
					pos->second += count;
				}				
			}
		}

		vector<string> output;
		for (pair<string, int> dNc : domainAndCount)
		{
			output.push_back(to_string(dNc.second) +" " + dNc.first);
		}
		return output;
	}
};