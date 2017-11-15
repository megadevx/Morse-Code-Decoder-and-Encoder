#include "Morse Converter.h"
#include <fstream>
#include <iostream>
using namespace std;

string Morse_Converter::parse() {
	//Reads in morse.txt, builds MorseTree and MorseHash
	ifstream morse;
	morse.open("morse.txt");
	string line = "";
	morse >> line;
	cout << line;
	return line;
}

string Morse_Converter::decode(string in) {
	//Takes in a string of morse code, converts to letters	[delimeter = space]

}

string Morse_Converter::encode(string in) {
	//Takes in a string of letters, converts to morse code	[delimeter = space]
}