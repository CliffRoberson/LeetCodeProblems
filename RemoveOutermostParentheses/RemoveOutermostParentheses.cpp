#include "pch.h"
#include <iostream>
#include "RemoveOutermostParentheses.h"

int main()
{
	string inputString = "(()())(())";
	if (Solution().removeOuterParentheses(inputString) == "()()()" )
	{
		cout << "Test 1 OK" << endl;
	}
	else
	{
		cout << "Test 1 FAIL" << endl;
	}

	inputString = "(()())(())(()(()))";
	if (Solution().removeOuterParentheses(inputString) == "()()()()(())")
	{
		cout << "Test 2 OK" << endl;
	}
	else
	{
		cout << "Test 2 FAIL" << endl;
	}

	inputString = "()()";
	if (Solution().removeOuterParentheses(inputString) == "")
	{
		cout << "Test 3 OK" << endl;
	}
	else
	{
		cout << "Test 3 FAIL" << endl;
	}

	
}


