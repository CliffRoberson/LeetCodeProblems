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
	vector<int> nodeVals;
	vector<int> sums;
	int sumsIndex = 0;
	void InOrderTraverseTree(TreeNode* node)
	{
		if (node != NULL)
		{
			InOrderTraverseTree(node->left);
			nodeVals.push_back(node->val);			
			InOrderTraverseTree(node->right);
		}
	}

	void InOrderModifyTraverseTree(TreeNode* node)
	{
		if (node != NULL)
		{
			InOrderModifyTraverseTree(node->left);
			node->val = sums[sumsIndex];
			sumsIndex++;
			InOrderModifyTraverseTree(node->right);
		}
	}

	TreeNode* bstToGst(TreeNode* root) {
		InOrderTraverseTree(root);
				
		for (int i = 0; i < nodeVals.size(); i++)
		{		
			int sum = 0;
			for (int j = i; j < nodeVals.size(); j++)
			{
				sum += nodeVals[j];
			}
			sums.push_back(sum);
		}

		InOrderModifyTraverseTree(root);
		
		return root;
	}
};