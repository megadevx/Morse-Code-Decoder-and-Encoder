#pragma once
#include "Binary Tree.h"
#include <string>
#include <ifstream>
using namespace std;

template<typename Item_Type>
class MorseTree : public Binary_Tree<Item_Type> {		//Derived class MorseTree from Binary_Tree
private:
	BTNode *root;

public:
	//Default Constructor
	MorseTree() {
		root = NULL;
	}

	//Non-default constructor
	MorseTree(BTNode *r) {
		root = r;
	}

	//Member Functions
	Binary_Tree<Item_Type> parse(string in);

};