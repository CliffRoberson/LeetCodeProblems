#pragma once

#include "../std_lib_facilities.h"


// Definition for a Node.
class Node {
public:
	int val;
	vector<Node*> children;

	Node() {}

	Node(int _val, vector<Node*> _children) {
		val = _val;
		children = _children;
	}
};

class Solution {
public:
	int MD(Node* node, int depth)
	{
		if (node == NULL)
		{
			return 0;
		}
		else if (node->children.size() == 0)
			return depth;
		else
		{
			int maxDepth = depth;
			for (Node* node : node->children)
			{
				int tmpDepth = MD(node, depth + 1);
				if (tmpDepth > maxDepth)
					maxDepth = tmpDepth;
			}
			return maxDepth;
		}
	}

	int maxDepth(Node* root) 
	{
		return MD(root, 1);
	}
};