#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	vector<int> addToArrayForm(vector<int>& A, int K)
	{
		vector<int> Kvec;
		while (K > 0)
		{
			int digit = K % 10;
			Kvec.push_back(digit);
			K /= 10;
		}
		reverse(Kvec.begin(), Kvec.end());

		int sizeDiff = Kvec.size() - A.size();
		if (sizeDiff > 0)
		{
			for (int i = 0; i < sizeDiff; i++)
			{
				A.emplace(A.begin(), 0);
			}
		}
		else if (sizeDiff < 0)
		{
			for (int i = sizeDiff; i < 0; i++)
			{
				Kvec.emplace(Kvec.begin(), 0);
			}
		}


		vector<int> output;
		reverse(Kvec.begin(), Kvec.end());
		reverse(A.begin(), A.end());
		bool carry = false;
		for (int i = 0; i < A.size(); i++)
		{
			int tmpSum = A[i] + Kvec[i];
			if (carry)
			{
				tmpSum++;
				carry = false;
			}
				

			int digit = tmpSum % 10;
			
			if (tmpSum > 9)
				carry = true;

			output.push_back(digit);
		}
		if (carry)
			output.push_back(1);

		reverse(output.begin(), output.end());
		return output;

	}
};