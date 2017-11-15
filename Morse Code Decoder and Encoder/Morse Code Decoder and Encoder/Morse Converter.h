#pragma once
#include "MorseTree.h"

class Morse_Converter {
private:
	MorseTree<string> tree = MorseTree<string>();	//MorseTree for decoding
													//MorseHash for encoding
public:
	//Default constructor
	Morse_Converter() {}

	//Member Functions
	void parse();
	string decode(string in);
	string encode(string in);
};
