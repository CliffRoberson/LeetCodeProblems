#pragma once

#include "../std_lib_facilities.h"
#include <map>
#include <functional>
#include <iostream>
#include <set>
#include <algorithm>
#include<mftransform.h>

class Solution {
public:


	multimap<int, char, greater<int>> flip_map(map<char, int> src)
	{
		multimap<int, char, greater<int>> dst;
		for (pair<char, int> element : src)
		{
			dst.insert(pair<int,char>(element.second,element.first));
		}
		return dst;
	}


	string frequencySort(string s)
	{
		map<char, int> charCount;

		for (char c : s)
		{
			charCount[c]++;
		}

		multimap<int, char,greater<int>> swappedMap = flip_map(charCount);

		string output;
		for (pair<int, char> elem : swappedMap)
		{
			for (int i = 0; i < elem.first; i++)
				output += elem.second;
		}

		
		return output;
	}
};