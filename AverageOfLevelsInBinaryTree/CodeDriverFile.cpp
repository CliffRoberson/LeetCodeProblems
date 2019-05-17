#include "pch.h"
#include <iostream>
#include "CodeClassFile.h"

int main()
{
	
	TreeNode* a = new TreeNode(3);
	TreeNode* b = new TreeNode(9);
	TreeNode* c = new TreeNode(20);
	TreeNode* d = new TreeNode(15);
	TreeNode* e = new TreeNode(7);

	a->left = b;
	a->right = c;
	c->left = d;
	c->right = e;

	vector<double> ans = Solution().averageOfLevels(a);
}


