#pragma once

#include "../std_lib_facilities.h"

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
	vector<int> nums;
public:

	void UpdateBST(TreeNode* root)
	{
		if (root == NULL)
		{
			return;
		}
		else
		{
			UpdateBST(root->left);
			root->val = nums.front();
			nums.erase(nums.begin());
			UpdateBST(root->right);
		}
	}

	void GetNumsIntoVectorInOrderTraversal(TreeNode* root)
	{
		if (root == NULL)
		{
			return;
		}
		else
		{
			GetNumsIntoVectorInOrderTraversal(root->left);
			nums.push_back(root->val);
			GetNumsIntoVectorInOrderTraversal(root->right);
		}
	}

	TreeNode* convertBST(TreeNode* root) 
	{
		if (root == NULL)
			return NULL;

		GetNumsIntoVectorInOrderTraversal(root);
		
		reverse(nums.begin(), nums.end());
		for (int i = 0; i < nums.size()-1; i++)
		{
			nums[i + 1] += nums[i];
		}
		reverse(nums.begin(), nums.end());

		UpdateBST(root);

		return root;
	}
};