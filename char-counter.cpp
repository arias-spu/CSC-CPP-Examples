#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
	string aString;
	char aLetter;
	cout << "Please input a string: ";
	cin >> aString;
	cout << "Please input a single letter: ";
	cin >> aLetter;
	// counting the number of times that letter
	// is on the string
	int counter = 0;
	for (size_t i=0; i<aString.length(); i++)
		if (aString[i] == aLetter)
			counter++;

	cout << "The letter " << aLetter << " appears " << counter << " times in " << aString << endl;
	return 0;
}
