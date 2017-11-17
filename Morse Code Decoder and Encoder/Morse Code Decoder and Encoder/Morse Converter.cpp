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
		tree.add_letter(line);
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