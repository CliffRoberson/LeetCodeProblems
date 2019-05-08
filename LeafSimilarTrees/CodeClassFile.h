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
	vector<int> leafSeq1;
	vector<int> leafSeq2;

	void getLeafSeq1(TreeNode* root)
	{
		if (root == NULL)
			return;
		else if (root->left == NULL && root->right == NULL)
		{
			leafSeq1.push_back(root->val);
		}
		else
		{
			getLeafSeq1(root->left);
			getLeafSeq1(root->right);
		}
	}

	void getLeafSeq2(TreeNode* root)
	{
		if (root == NULL)
			return;
		else if (root->left == NULL && root->right == NULL)
		{
			leafSeq2.push_back(root->val);
		}
		else
		{
			getLeafSeq2(root->left);
			getLeafSeq2(root->right);
		}
	}

	bool leafSimilar(TreeNode* root1, TreeNode* root2) 
	{
		getLeafSeq1(root1);
		getLeafSeq2(root2);
		return leafSeq1 == leafSeq2;
	}
};