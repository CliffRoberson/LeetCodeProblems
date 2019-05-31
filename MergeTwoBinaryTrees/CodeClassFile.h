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
	 vector<int> nums1;
	 vector<int> nums2;
	 
	 
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

	 void GetNumsIntoVectorInOrderTraversal1(TreeNode* root)
	 {
		 if (root == NULL)
		 {
			 return;
		 }
		 else
		 {
			 GetNumsIntoVectorInOrderTraversal1(root->left);
			 nums1.push_back(root->val);
			 GetNumsIntoVectorInOrderTraversal1(root->right);
		 }
	 }

	 void GetNumsIntoVectorInOrderTraversal2(TreeNode* root)
	 {
		 if (root == NULL)
		 {
			 return;
		 }
		 else
		 {
			 GetNumsIntoVectorInOrderTraversal2(root->left);
			 nums2.push_back(root->val);
			 GetNumsIntoVectorInOrderTraversal2(root->right);
		 }
	 }
	 TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) 
	 {
		 if (t1 == NULL && t2 == NULL)
			 return NULL;
		 else if (t1 == NULL)
			 return t2;
		 else if (t2 == NULL)
			 return t1;
		 else
		 {
			 GetNumsIntoVectorInOrderTraversal1(t1);
			 GetNumsIntoVectorInOrderTraversal2(t2);

			 if (nums1.size() > nums2.size())
			 {
				 for (int i = 0; i < nums2.size(); i++)
				 {
					 nums1[i] += nums2[i];
				 }
			 }
			 else
			 {
				 for (int i = 0; i < nums1.size(); i++)
				 {
					 nums2[i] += nums1[i];
				 }
			 }

			 UpdateBST(root);

			 return root;
		 }

		 
	 }
 };