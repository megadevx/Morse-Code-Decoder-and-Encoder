#pragma once
#include "MorseTree.h"
#include "Morse Hash Table.h"

class Morse_Converter {
private:
	MorseTree morse_tree;	//MorseTree for decoding
	MorseHash morse_hash;//MorseHash for encoding
public:
	//Default constructor
	Morse_Converter() {
		morse_tree = MorseTree();
	}

	//Member Functions
	void parse();
	string search(BTNode *&node, string in);
	string decode(string in);
	string encode(string in);
};
