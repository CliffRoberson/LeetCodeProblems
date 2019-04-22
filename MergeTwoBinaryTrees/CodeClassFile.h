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
	TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) 
	{
		// create the level order vectors from the two trees
		// sum the vectors
		//create a tree from the summed vector
	}
	
	vector<int> createVector(TreeNode* root )
	{
		if (root == NULL)  return;

		queue<TreeNode *> q;
		vector<int> output;

		q.push(root);

		while (q.empty() == false)
		{
			TreeNode *node = q.front();
			output.push_back(node->val);
			q.pop();

			if (!(node->left == NULL && node->right == NULL))
			{
				if (node->left != NULL)
					q.push(node->left);
				else
					q.push(new TreeNode(0));

				if (node->right != NULL)
					q.push(node->right);
				else
					q.push(new TreeNode(0));
			}			
		}
		return output;
	}
};