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
		if (nums.size() > 0)
		{
			pair<int, int> indexAndValOfMax;
			int max = 0;

			for (int i = 0; i < nums.size(); i++)
			{
				if (nums[i] > max)
				{
					indexAndValOfMax.first = i;
					indexAndValOfMax.second = nums[i];
					max = nums[i];
				}
			}

			vector<int> left;
			for (int i = 0; i < indexAndValOfMax.first; i++)
			{
				left.push_back(nums[i]);
			}

			vector<int> right;
			for (int i = indexAndValOfMax.first + 1; i < nums.size(); i++)
			{
				right.push_back(nums[i]);
			}

			TreeNode* result = new TreeNode(indexAndValOfMax.second);
			result -> left = constructMaximumBinaryTree(left);
			result -> right = constructMaximumBinaryTree(right);

			return result;
		}
		else
		{
			return NULL;
		}		
	}
};