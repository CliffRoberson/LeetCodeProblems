#pragma once

#include "../std_lib_facilities.h"
#include <set>
#include <map>

class Solution {
public:
	vector<string> concatenatedWords;
	void permute(vector<string> words, int l, int r)
	{
		// Base case  
		if (l == r)
		{
			string tmp;
			for (string word : words)
			{
				tmp += word;
			}
			concatenatedWords.push_back(tmp);
		}
		else
		{
			// Permutations made  
			for (int i = l; i <= r; i++)
			{

				// Swapping done  
				swap(words[l], words[i]);

				// Recursion called  
				permute(words, l + 1, r);

				//backtrack  
				swap(words[l], words[i]);
			}
		}
	}

	vector<int> findSubstring(string s, vector<string>& words) {
		
		if (s.size() == 0 || words.size() == 0)
		{
			vector<int> tmp;
			return tmp;
		}
			 

		//fill map with index of word in wordList in string, the actual word in wordlist
		map<int, string> posOfWords;
		set<string> wordsSet;
		for (string word : words)
			wordsSet.insert(word);
		for (string word : wordsSet)
		{
			size_t pos = s.find(word, 0);
			while (pos != string::npos)
			{
				posOfWords[pos] = word;
				pos = s.find(word, pos + 1);
			}
		}
		
		//find potential candidate ranges
		int acceptableSize = words.size() * words[0].size();
		vector<int> startingIndexes;
		for (pair<int, string> positionWordPair : posOfWords)
		{
			int startingIndex = positionWordPair.first;
			int curIndex = startingIndex;
			bool searching = true;
			while (searching)
			{
				curIndex += words[0].size();
				if (curIndex - startingIndex == acceptableSize)
				{
					startingIndexes.push_back(startingIndex);
					searching = false;
				}
				else if (posOfWords.find(curIndex) == posOfWords.end())
				{
					searching = false;
				}				
			}
		}

		vector<int> output;
		for (int startingIndex : startingIndexes)
		{
			string startingWord = posOfWords[startingIndex];
			vector<string> tmpWords = words;
			string curSubString;

			auto it = std::find(tmpWords.begin(), tmpWords.end(), startingWord);
			if (it != tmpWords.end()) {
				tmpWords.erase(it);
			}

			bool goodWord = true;
			while (goodWord)
			{
				goodWord = false;
				for (string word : tmpWords)
				{
					string tmpWord = startingWord + word;
					string expectedSubstring = s.substr(startingIndex, tmpWord.size());
					if (tmpWord == expectedSubstring)
					{
						goodWord = true;
						auto it = std::find(tmpWords.begin(), tmpWords.end(), word);
						if (it != tmpWords.end()) {
							tmpWords.erase(it);
						}
						startingWord += word;
						break;
					}
				}			
			}

			if (tmpWords.size() == 0)
				output.push_back(startingIndex);
		}
	
		return output;
	}
};