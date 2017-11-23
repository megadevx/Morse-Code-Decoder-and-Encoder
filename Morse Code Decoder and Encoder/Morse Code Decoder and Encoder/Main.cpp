#include "Morse Converter.h"
#include "MorseTree.h"

void main() {
	//Morse_Converter MC = Morse_Converter();
	//MC.parse();
	MorseTree test_tree = MorseTree();
	BTNode *test_root = test_tree.get_root();
	test_tree.add_letter(test_root, ".", "e");
	system("PAUSE");
}