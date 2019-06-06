#include "pch.h"
#include <iostream>
#include "CodeClassFile.h"

int main()
{
	//int k = 1;
	//vector<int> nums;
	//KthLargest* obj = new KthLargest(k, nums);
	//
	//cout << obj->add(-3)<< endl;
	//cout << obj->add(-2) << endl;
	//cout << obj->add(-4) << endl;
	//cout << obj->add(0) << endl;
	//cout << obj->add(4) << endl;

	//int k = 2;
	//vector<int> nums = { 0 };
	//KthLargest* obj = new KthLargest(k, nums);

	//cout << obj->add(-1) << endl;
	//cout << obj->add(1) << endl;
	//cout << obj->add(-2) << endl;
	//cout << obj->add(-4) << endl;
	//cout << obj->add(3) << endl;

	int k = 1;
	vector<int> nums = { -2 };
	KthLargest* obj = new KthLargest(k, nums);

	cout << obj->add(-3) << endl;
	cout << obj->add(0) << endl;
	cout << obj->add(2) << endl;
	cout << obj->add(-1) << endl;
	cout << obj->add(4) << endl;
}


