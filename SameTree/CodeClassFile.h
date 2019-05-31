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
	bool isSameTree(TreeNode* p, TreeNode* q) 
	{
		if (p == NULL && q == NULL)
			return true;
		else if (p == NULL || q == NULL)
			return false;
		else
		{
			queue<TreeNode*> pQueue;
			queue<TreeNode*> qQueue;
			pQueue.push(p);
			qQueue.push(q);

			while (!pQueue.empty() && !qQueue.empty())
			{
				TreeNode* pTmp = pQueue.front();
				TreeNode* qTmp = qQueue.front();
				pQueue.pop();
				qQueue.pop();

				if (pTmp->val != qTmp->val )
					return false;

				if (pTmp->left != NULL)
					pQueue.push(pTmp->left);
				if (qTmp->left != NULL)
					qQueue.push(qTmp->left);
				if (pQueue.size() != qQueue.size())
					return false;

				if (pTmp->right != NULL)
					pQueue.push(pTmp->right);				
				if (qTmp->right != NULL)
					qQueue.push(qTmp->right);
				if (pQueue.size() != qQueue.size())
					return false;
			}
			return true;
		}
	}
};