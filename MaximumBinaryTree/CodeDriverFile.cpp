#include "pch.h"
#include <iostream>
#include "CodeClassFile.h"

int main()
{
	TreeNode expected(6);
	expected.left = new TreeNode(3);
	expected.right = new TreeNode(5);

	expected.left->right = new TreeNode(2);
	expected.right->left = new TreeNode(0);

	expected.left->right->right = new TreeNode(1);

	vector<int> input = { 3, 2, 1, 6, 0, 5 };

	TreeNode* answer = Solution().constructMaximumBinaryTree(input);
	
}


