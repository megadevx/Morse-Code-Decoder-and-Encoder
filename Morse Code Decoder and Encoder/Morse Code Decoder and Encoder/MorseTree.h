#pragma once
#include "Binary Tree.h"
#include <string>
#include <fstream>
using namespace std;

class MorseTree : public Binary_Tree {		//Derived class MorseTree from Binary_Tree
private:

public:
	//Default constructor
	MorseTree(){
		Binary_Tree();
	}

	//Member funtions
	BTNode *get_root() {
		return root;
	}

	void add_letter(BTNode *node, string code, string letter) {
		//Get the first character, create node with that data
		if (node == NULL) {
			node = new BTNode();
		}
		if (code.size() == 0) {
			node->data = letter;
		}
		else if (code[0] == '.') {
			add_letter(node->left, code.substr(1), letter);
		}
		else if (code[0] == '_') {
			add_letter(node->right, code.substr(1), letter);
		}
	}
};