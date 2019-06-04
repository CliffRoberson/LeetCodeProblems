#include "pch.h"
#include <iostream>
#include "CodeClassFile.h"

//Prints out combinations of things in "chars" with repetition 
int main()
{
	int intToStoreAsBinary = 6;
	int n = 3;
	vector<int> myVector;

	for (int i = 0; i < n; i++) 
	{
		myVector.push_back( (intToStoreAsBinary >> i) & 1);
	}
	reverse(myVector.begin(),myVector.end());


}


