#include "Morse Converter.h"
#include <iostream>
using namespace std;
void main() {
	Morse_Converter MC;
	MC.parse();
	MC.decode("._. . _");
	string result1 = MC.decode("._.");
	string result2 = MC.encode("cat");
	cout << result1 << " " << result2 << endl;
	system("PAUSE");
}