#pragma once
#include "Binary Tree.h"
#include <string>
using namespace std;

class Decoder {
private:
	BTNode<string> *root = nullptr;

public:
	Decoder();
	Binary_Tree<string> build_tree();
	string decode(string in);
};