#pragma once
#include "pch.h"
#include <iostream>
#include "RomanToInteger.h"


int main()
{
	string romanNumeral = "III";
	if (Solution().romanToInt(romanNumeral) == 3)
		cout << romanNumeral << " OK" << endl;
	else
		cout << romanNumeral << " FAIL" << endl;

	romanNumeral = "IV";
	if (Solution().romanToInt(romanNumeral) == 4)
		cout << romanNumeral << " OK" << endl;
	else
		cout << romanNumeral << " FAIL" << endl;

	romanNumeral = "IX";
	if (Solution().romanToInt(romanNumeral) == 9)
		cout << romanNumeral << " OK" << endl;
	else
		cout << romanNumeral << " FAIL" << endl;

	romanNumeral = "LVIII";
	if (Solution().romanToInt(romanNumeral) == 58)
		cout << romanNumeral << " OK" << endl;
	else
		cout << romanNumeral << " FAIL" << endl;

	romanNumeral = "MCMXCIV";
	if (Solution().romanToInt(romanNumeral) == 1994)
		cout << romanNumeral << " OK" << endl;
	else
		cout << romanNumeral << " FAIL" << endl;

	return 0;
}

