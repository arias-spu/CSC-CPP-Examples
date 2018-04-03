#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using std::cout;
using std::cin;
using std::cerr;
using std::endl;
using std::string;
using std::ofstream;

int main(){
	// This program will read a string from the keyboard
	// It will output each character ascii code, the character 
	// and its type of character, alpha, digit or punctuation
	// It will open a file for output and write
	// that same string 10 times

	string aString;
	cout << "Please input a string: ";
	cin >> aString;
	for (int i=0; i<aString.length(); i++){
		if (isalpha(aString[i]))
			cout << static_cast<int>(aString[i]) << aString[i] << "\t" << "Is a letter" << endl;
		else if (isdigit(aString[i]))
			cout << static_cast<int>(aString[i]) << aString[i] << "\t" << "Is a number" << endl;
		else if (ispunct(aString[i]))
			cout << static_cast<int>(aString[i]) << aString[i] << "\t" << "Is a punctuation character" << endl;
		else
			cout << static_cast<int>(aString[i]) << aString[i] << "\t" << "Is something else" << endl;
	}
	ofstream myFile("string.txt");
	if (myFile.fail()){
		cerr << "Error when opening file" << endl;
		return 1;
	}

	for (int i=0; i<10; i++)
		myFile << aString << endl;
	

	return 0;
}
