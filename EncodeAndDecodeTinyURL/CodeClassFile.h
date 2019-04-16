#pragma once

#include "../std_lib_facilities.h"
#include <bitset>

class Solution {
public:

	// Encodes a URL to a shortened URL.
	string encode(string longUrl) 
	{
		string binary = asciiToBinary(longUrl);
		string shortURL = shortenBinary(binary);
		return shortURL;
	}

	string shortenBinary(string binary)
	{
		int count = 0;
		f
	}

	string asciiToBinary(string ascii)
	{
		string output;
		for (char symbol : ascii)
		{
			char buffer[33];
			_itoa_s(symbol, buffer, 2);
			output += buffer;
		}
	}

	string binaryToAscii(string binary)
	{
		std::stringstream sstream(binary);
		std::string output;
		while (sstream.good())
		{
			std::bitset<8> bits;
			sstream >> bits;
			char c = char(bits.to_ulong());
			output += c;
		}
		return output;
	}

	// Decodes a shortened URL to its original URL.
	string decode(string shortUrl) {

	}
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));