#pragma once

#include "../std_lib_facilities.h"
#include <stack>

class Solution {
public:
	int countNumberOfSetBits(int num)
	{
		int count = 0;
		while (num > 0)
		{
			int rem = num % 2;
			if (rem == 1)
				count++;
			num = num / 2;
		}

		return count;
	}

	bool isPrime(int number) 
	{
		if (number < 2) return false;
		if (number == 2) return true;
		if (number % 2 == 0) return false;
		for (int i = 3; (i*i) <= number; i += 2) {
			if (number % i == 0) return false;
		}
		return true;

	}

	int countPrimeSetBits(int L, int R) 
	{
		int totalNumbersWithPrimeBinaryRepresentations = 0;
		for (int num = L; num <= R; num++)
		{
			int numberOfSetBits = countNumberOfSetBits(num);

			if (isPrime(numberOfSetBits))
				totalNumbersWithPrimeBinaryRepresentations++;
		}

		return totalNumbersWithPrimeBinaryRepresentations;
	}
};