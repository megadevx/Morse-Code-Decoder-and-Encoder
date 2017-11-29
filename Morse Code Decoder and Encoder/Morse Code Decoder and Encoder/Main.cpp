#include "Morse Converter.h"
#include <iostream>
using namespace std;
void main() {
	Morse_Converter MC;
	MC.parse();
<<<<<<< HEAD
	MC.decode("._. . _");
=======
	string result1 = MC.decode("._.");
	string result2 = MC.encode("cat");
	cout << result1 << " " << result2 << endl;
>>>>>>> 4c8ce38322e241293bb7aac3cd23145192575cd6
	system("PAUSE");
}