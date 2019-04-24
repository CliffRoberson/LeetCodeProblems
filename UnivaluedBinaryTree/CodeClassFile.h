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
	 bool firstNode = true;
	 int mainVal = 0;
	 bool isUnivalTree(TreeNode* root)
	 {
		 if (root == NULL)
			 return false;

		 if (firstNode)
		 {
			 mainVal = root->val;
			 firstNode = false;
		 }

		 if (root->val != mainVal)
			 return false;
		 else if (root->left != NULL && root->right != NULL)
			 return isUnivalTree(root->left) && isUnivalTree(root->right);
		 else if (root->left != NULL)
			 return isUnivalTree(root->left);
		 else if (root->right != NULL)
			 return isUnivalTree(root->right);
		 else
			 return true;
	 }
 };