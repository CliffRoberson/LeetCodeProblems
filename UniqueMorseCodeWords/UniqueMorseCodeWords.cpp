#include "pch.h"
#include <iostream>
#include "UniqueMorseCodeWords.h"

int main()
{
	vector<string> words;
	words.push_back("gin");
	words.push_back("zen");
	words.push_back("gig");
	words.push_back("msg");

	if (Solution().uniqueMorseRepresentations(words) == 2)
	{
		cout << "Test 1 OK" << endl;
	}
	else
	{
		cout << "Test 1 FAIL" << endl;
	}
}


