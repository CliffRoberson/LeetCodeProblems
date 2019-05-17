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
	vector<double> averageOfLevels(TreeNode* root)
	{
		// Base case 
		if (root == NULL)
			return vector<double>(0);

		// Do Level order traversal keeping track of number 
		// of nodes at every level. 
		queue<TreeNode*> q;
		q.push(root);

		vector<double> output;
		while (!q.empty())
		{
			// Get the size of queue when the level order 
			// traversal for one level finishes 
			int count = q.size();
			int numOnLevel = count;

			// Iterate for all the nodes in the queue currently 
			double sum = 0;
			//while (count--)
			for (int i=count;count > 0;count--)
			{
				// Dequeue an node from queue 
				TreeNode *temp = q.front();
				q.pop();

				// Add this node's value to current sum. 
				sum = sum + temp->val;

				// Enqueue left and right children of 
				// dequeued node 
				if (temp->left != NULL)
					q.push(temp->left);
				if (temp->right != NULL)
					q.push(temp->right);
			}

			// Update the maximum node count value 
			output.push_back(sum / numOnLevel);
		}
		return output;
	}
};