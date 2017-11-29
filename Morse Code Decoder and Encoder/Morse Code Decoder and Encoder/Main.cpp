#include "Morse Converter.h"
#include "MorseTree.h"

void main() {
	Morse_Converter MC = Morse_Converter();
	MC.parse();
	MC.decode("._. . _");
	system("PAUSE");
}