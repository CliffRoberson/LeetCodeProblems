#pragma once

#include "../std_lib_facilities.h"

struct TreeNode {
    int val;
   TreeNode *left;
   TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
 
class Solution {
public:
	TreeNode* constructMaximumBinaryTree(vector<int>& nums) 
	{
		pair<int, int> indexAndValOfMax;
		int max = 0;

		for (int i = 0; i < nums.size(); i++)
		{
			if (nums[i] > max)
			{
				indexAndValOfMax.first = i;
				indexAndValOfMax.second = nums[i];
			}
		}

		vector<int> left(*nums.begin(), indexAndValOfMax.first);
		vector<int> right(nums.begin() + indexAndValOfMax.first, nums.end());

		TreeNode result(indexAndValOfMax.second);
		result.left = constructMaximumBinaryTree(left);
		result.right = constructMaximumBinaryTree(right);

		return &result;
	}
};