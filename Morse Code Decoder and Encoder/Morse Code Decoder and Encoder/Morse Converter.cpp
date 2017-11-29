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
		morse_hash.add_letter(letter, code);
	}
	morse.close();
}

string Morse_Converter::search(BTNode *node, string in) {
	//Takes in a string of morse code, converts to letters [delimeter = space]
	if (node->data != "" && in.size() == 0) {
		return node->data;
	}
	else if (in[0] == '.') {
		search(node->left, in.substr(1));
	}
	else if (in[0] == '_'){
		search(node->right, in.substr(1));
	}
	else if (in[0] == ' ') {
		;
	}
	else {
		return "Invalid morse string";
	}
}

string Morse_Converter::decode(string in) {
	//Calls the search function to decode the string
	istringstream tokenizer(in);
	string token = "";
	while (tokenizer >> token) {
		string result = search(morse_tree.get_root(), token);
		return result;
	}
}

string Morse_Converter::encode(string in) {
	//Takes in a string of letters, converts to morse code	[delimeter = space]
	string result = "";
	string letter;
	for (string::iterator iter = in.begin(); iter != in.end(); iter++) {
		letter = *iter;
		result.append(morse_hash.get_morse_version(letter));
		result.append(" ");
	}
	return result;
}