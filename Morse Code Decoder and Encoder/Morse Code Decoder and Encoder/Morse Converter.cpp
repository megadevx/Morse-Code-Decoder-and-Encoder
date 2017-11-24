#include "Morse Converter.h"
#include <fstream>
#include <iostream>
#include <sstream>
using namespace std;

void Morse_Converter::parse() {
	//Reads in morse.txt, builds MorseTree and MorseHash
	ifstream morse;
	morse.open("morse.txt");
	string line = "";

	while (morse.good()) {
		//Read in the line, pass into the respective add_letter functions that will build the tree/hash
		morse >> line;
		string letter = line.substr(0, 1);
		string code = line.substr(1);
		BTNode *morse_root = morse_tree.get_root();
		morse_tree.add_letter(morse_root, code, letter);
	}
	morse.close();
}

string Morse_Converter::search(BTNode *node, string in) {
	//Takes in a string of morse code, converts to letters [delimeter = space]
	istringstream tokenizer(in);
	char token = 0;

	while (tokenizer >> token) {
		if (node->data != "" && in.size() == 0) {
			return node->data;
		}
		else if (token == '.') {
			search(node->left, in.substr(1));
		}
		else if (token == '_'){
			search(node->right, in.substr(1));
		}
		else {
			return "Invalid morse string";
		}
	}
}
string Morse_Converter::decode(string in) {
	//Calls the search function to decode the string
	string result = search(morse_tree.get_root(), in);
	return result;
}

string Morse_Converter::encode(string in) {
	//Takes in a string of letters, converts to morse code	[delimeter = space]
	return "";
}