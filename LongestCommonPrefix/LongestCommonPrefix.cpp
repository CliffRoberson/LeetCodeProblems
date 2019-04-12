#pragma once
#include "pch.h"
#include <iostream>
#include "LongestCommonPrefix.h"


int main()
{
	vector<string> input;
	input.push_back("flower");
	input.push_back("flow");
	input.push_back("flight");

	if (Solution().longestCommonPrefix(input) == "fl")
	{
		cout << "first OK";
	}

	input.clear();
	input.push_back("dog");
	input.push_back("racecar");
	input.push_back("car");

	if (Solution().longestCommonPrefix(input) == "")
	{
		cout << "second OK";
	}

	input.clear();
	input.push_back("dog");
	input.push_back("do");
	input.push_back("car");

	if (Solution().longestCommonPrefix(input) == "")
	{
		cout << "third OK";
	}
	return 0;
}

