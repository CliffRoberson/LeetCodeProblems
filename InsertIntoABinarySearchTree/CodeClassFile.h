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
	TreeNode* insertIntoBST(TreeNode* root, int val) {
		TreeNode * currentNode = root;
		bool inserted = false;
		while (!inserted)
		{
			if (val > currentNode->val)
			{
				if (currentNode->right == NULL)
				{
					currentNode-> right = new TreeNode(val);
					inserted = true;
				}
				else
				{
					currentNode = currentNode->right;
				}
				
			}
			else
			{
				if (currentNode->left == NULL)
				{
					currentNode->left = new TreeNode(val);
					inserted = true;
				}
				else
				{
					currentNode = currentNode->left;
				}
				
			}
		}
		return root;
	}
};