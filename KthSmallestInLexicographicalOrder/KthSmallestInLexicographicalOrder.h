#pragma once

#include "..//std_lib_facilities.h"

class Solution {
public:	
	// returns true is i1 < i2 according to lexical order
	static bool lexicalLess(int i1, int i2)
	{
		int base1 = 1;
		int base2 = 1;
		for (int c = i1 / 10; c > 0; c /= 10) base1 *= 10;
		for (int c = i2 / 10; c > 0; c /= 10) base2 *= 10;
		while (base1 > 0 && base2 > 0) {
			int d1 = i1 / base1;
			int d2 = i2 / base2;
			if (d1 != d2) return (d1 < d2);
			i1 %= base1;
			i2 %= base2;
			base1 /= 10;
			base2 /= 10;
		}
		return (base1 < base2);
	}

	vector<int> lexicalOrder(int n) {
		vector<int> result;
		for (int i = 1; i <= n; ++i) result.push_back(i);
		sort(result.begin(), result.end(), lexicalLess);
		return result;
	}

	int findKthNumber(int n, int k) {
		vector<int> nums = lexicalOrder(n);
		return nums[k - 1];
	}
};