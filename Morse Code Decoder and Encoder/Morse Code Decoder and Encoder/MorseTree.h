#pragma once
#include "Binary Tree.h"
#include <string>
#include <fstream>
using namespace std;

template<typename Item_Type>
class MorseTree : public Binary_Tree<Item_Type> {		//Derived class MorseTree from Binary_Tree
private:
	BTNode<Item_Type> *root;

public:
	//Default Constructor
	MorseTree() {
		root = NULL;
	}

	//Non-default constructor
	MorseTree(BTNode<Item_Type> *r) {
		root = r;
	}

	//Member funtions
	void add_letter(string line) {
		//Takes in an input string, gets the letter (first character) and places into the tree
	}
};