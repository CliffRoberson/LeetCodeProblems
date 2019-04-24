#pragma once

#include "../std_lib_facilities.h"

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
	vector<int> result;
	vector<int> preorder(Node* root)
	{
		result.push_back(root->val);
		for (Node* node : root->children)
		{
			preorder(node);
		}

		return result;
	}
};