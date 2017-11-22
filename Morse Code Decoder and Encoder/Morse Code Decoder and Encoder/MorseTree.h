#pragma once
#include "Binary Tree.h"
#include <string>
#include <fstream>
using namespace std;

class MorseTree : public Binary_Tree {		//Derived class MorseTree from Binary_Tree
<<<<<<< HEAD
private:

public:
	//Default constructor
	MorseTree(){
		Binary_Tree();
	}
=======

public:
>>>>>>> 01ae419330b8b56f63fdc6a34310be1e3cfcb559

	//Member funtions
	BTNode *get_root() {
		return root;
	}

<<<<<<< HEAD
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
=======
		//Takes in an input string, gets the letter (first character) and places into the tree
		if (this->get_root() == NULL) {
			this->set_root(insert);
>>>>>>> 01ae419330b8b56f63fdc6a34310be1e3cfcb559
		}
	}
};