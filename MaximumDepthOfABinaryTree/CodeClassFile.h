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
	int MD(TreeNode * root, int depth)
	{
		if (root == NULL)
			return depth;
		else if (root->left == NULL && root->right == NULL)
			return depth;
		else if (root->left == NULL)
			return MD(root->right, depth + 1);
		else if (root->right == NULL)
			return MD(root->left, depth + 1);
		else
			return max( MD(root->left, depth + 1) , MD(root->right, depth + 1));
	}

	int maxDepth(TreeNode* root) {
		return MD(root, 1);
	}
};