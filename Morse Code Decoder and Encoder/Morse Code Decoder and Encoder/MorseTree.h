#pragma once
#include "Binary Tree.h"
#include <string>
#include <fstream>
using namespace std;

class MorseTree : public Binary_Tree {		//Derived class MorseTree from Binary_Tree

public:

	//Member funtions
	void add_letter(string line) {
		BTNode *insert = new BTNode(line);

		//Takes in an input string, gets the letter (first character) and places into the tree
		if (this->get_root() == NULL) {
			this->set_root(insert);
		}
	}
};