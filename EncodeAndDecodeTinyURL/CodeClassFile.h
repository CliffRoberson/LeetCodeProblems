#pragma once

#include "../std_lib_facilities.h"
#include <map>

class Solution {
public:
	map<int, string> urls;
	int numOfURLs = 0;

	string encode(string longUrl) 
	{
		urls[numOfURLs] = longUrl;
		string encodedURL = "http://tinyurl.com/" + to_string(numOfURLs);
		numOfURLs++;

		return encodedURL;
	}


	// Decodes a shortened URL to its original URL.
	string decode(string shortUrl) 
	{
		int found = shortUrl.find_last_of('/');
		string number = shortUrl.substr(found + 1);
		int urlNum = stoi(number);

		return urls[urlNum];
	}
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));