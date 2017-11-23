#include "Morse Converter.h"
#include <fstream>
#include <iostream>
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
}

string Morse_Converter::decode(string in) {
	//Takes in a string of morse code, converts to letters	[delimeter = space]
	return "";
}

string Morse_Converter::encode(string in) {
	//Takes in a string of letters, converts to morse code	[delimeter = space]
	return "";
}