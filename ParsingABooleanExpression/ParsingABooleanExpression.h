#pragma once

#include "..//std_lib_facilities.h"

class Solution {
public:
	bool parse_not(string exp)
	{
		if (exp[0] == '!')
		{
			string substr = exp.substr(2, exp.size() - 1);
			return parse_not(substr);
		}
	}
	
	bool parse_and(string exp)
	{
		vector<string> expressions;

		std::string delimiter = "),";
		size_t pos = 0;
		std::string token;
		while ((pos = s.find(delimiter)) != std::string::npos) {
			token = s.substr(0, pos);
			std::cout << token << std::endl;
			s.erase(0, pos + delimiter.length());
		}
		std::cout << s << std::endl;
	}

	bool parseBoolExpr(string expression) 
	{
		if (expression == "t") return true;
		else if (expression == "f") return false;
		else if (expression[0] == '!')
		{
			string substr = expression.substr(2, expression.size() - 1);
			return !parseBoolExpr(substr);
		}
		else if (expression[0] == '&')
		{
			//send string inside parentheses as parameter to parse_and
		}
		else
		{
			//send string inside parentheses as parameter to parse_or
		}


	}
};