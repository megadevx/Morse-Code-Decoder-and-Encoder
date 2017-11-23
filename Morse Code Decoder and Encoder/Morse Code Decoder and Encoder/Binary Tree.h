#pragma once
#pragma once
#include <string>
using namespace std;

struct BTNode {
	//Data fields
	string data;
	BTNode *left;
	BTNode *right;

	//Default constructor
	BTNode(string data_val = "BTNode constructor", BTNode *left_val = NULL, BTNode *right_val = NULL) {
		data = data_val;
		left = left_val;
		right = right_val;
	}

	//Destructor
	~BTNode() {}
};

class Binary_Tree {
protected:
	BTNode *root;

public:
	//Default constructor
	Binary_Tree() {
		root = new BTNode();
	}

	//Non-default constructors
	Binary_Tree(BTNode *newroot) {
		root = newroot;
	}

	Binary_Tree(const string & the_data, const Binary_Tree & left = Binary_Tree(), const Binary_Tree & right = Binary_Tree()) {
		root = new BTNode(the_data, left.root, right.root);
	}

	//Member Functions
	BTNode* get_root() {
		return root;
	}

	void set_root(BTNode *data) {
		root = data;
	}

	Binary_Tree get_left_subtree() {
		return Binary_Tree(root->left);
	}

	Binary_Tree get_right_subtree() {
		return Binary_Tree(root->right);
	}
};