#pragma once

#include "../std_lib_facilities.h"
#include <queue>


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	TreeNode* invertTree(TreeNode* root) 
	{
		if (root == NULL)
			return root;

		queue<TreeNode*> q;
		q.push(root);

		while (!q.empty())
		{
			int count = q.size();

			for (int i = count; count > 0; count--)
			{
				TreeNode* cur = q.front();
				q.pop();
				TreeNode* tmp = cur->left;
				cur->left = cur->right;
				cur->right = tmp;

				if (cur->left != NULL)
					q.push(cur->left);
				if (cur->right != NULL)
					q.push(cur->right);
			}
		}

		return root;

	}
};