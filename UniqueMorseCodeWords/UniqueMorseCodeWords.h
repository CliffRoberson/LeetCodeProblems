#pragma once

#include "../std_lib_facilities.h"
#include <map>
#include <set>

class Solution {
public:
	int uniqueMorseRepresentations(vector<string>& words) {
		set<string> outputSet;

		map<char, string> letterToMorseCode;
		letterToMorseCode['a'] = ".-";
		letterToMorseCode['b'] = "-...";
		letterToMorseCode['c'] = "-.-.";
		letterToMorseCode['d'] = "-..";
		letterToMorseCode['e'] = ".";
		letterToMorseCode['f'] = "..-.";
		letterToMorseCode['g'] = "--.";
		letterToMorseCode['h'] = "....";
		letterToMorseCode['i'] = "..";
		letterToMorseCode['j'] = ".---";
		letterToMorseCode['k'] = "-.-";
		letterToMorseCode['l'] = ".-..";
		letterToMorseCode['m'] = "--";
		letterToMorseCode['n'] = "-.";
		letterToMorseCode['o'] = "---";
		letterToMorseCode['p'] = ".--.";
		letterToMorseCode['q'] = "--.-";
		letterToMorseCode['r'] = ".-.";
		letterToMorseCode['s'] = "...";
		letterToMorseCode['t'] = "-";
		letterToMorseCode['u'] = "..-";
		letterToMorseCode['v'] = "...-";
		letterToMorseCode['w'] = ".--";
		letterToMorseCode['x'] = "-..-";
		letterToMorseCode['y'] = "-.--";
		letterToMorseCode['z'] = "--..";

		for (int i=0; i< words.size(); i++)
		{
			string morseCode = "";
			for (int j = 0; j < words[i].size(); j++)
			{			
				morseCode += letterToMorseCode[words[i][j]];
			}

			outputSet.insert(morseCode);

		}

		return outputSet.size();
	}
};