#include <iostream>
#include <string>
#include <cctype>

using std::getline;
using std::cout;
using std::cin;
using std::endl;
using std::string;


string& ToUpper(string&);

int main(int argc, char* argv[]){
	string sentence;
	size_t alpha = 0, digits = 0, spaces = 0;
	size_t thePos, theCount, ofPos, ofCount;
	while (true){
		alpha = digits = spaces = 0;
		getline(cin, sentence);
		if (sentence.find("finish") != string::npos)
			break;
		cout << ToUpper(sentence) << endl;
		for (size_t i = 0; i < sentence.length(); i++){
			if (isalpha(sentence[i]))
				alpha++;
			else if (isdigit(sentence[i]))
				digits++;
			else if (isspace(sentence[i]))
				spaces++;
		}
		cout << "Alphabetic characters found: " << alpha << endl;
		cout << "Digits found:                " << digits << endl;
		cout << "Spaces found:                " << spaces << endl;
		thePos = ofPos = string::npos;
		theCount = ofCount = 0;
		for (size_t p = 0; (p = sentence.find("THE", p)) != string::npos; p = sentence.find("THE", p + 1), theCount++ )
			cout << "THE found in position " << p << endl;
		cout << "Found " << theCount << " occurrences of THE in the sentence" << endl;

		for (size_t p = 0; (p = sentence.find("OF", p)) != string::npos; p = sentence.find("OF", p + 1), ofCount++ )
			cout << "OF found in position  " << p << endl;
		cout << "Found " << ofCount << " occurrences of OF in the sentence" << endl;

		for (size_t p = 0; ( p = sentence.find("DOG", p)) != string::npos; p = sentence.find("DOG", p + 1))
			sentence.replace(p, 3, "BIRD");
		cout << sentence << endl;
		cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl << endl;
	}
	cout << "Thank you" << endl << endl;
	return 0;
}

string& ToUpper(string& str){
	for (size_t i = 0; i < str.length(); i++)
		str[i] = toupper(str[i]);
	return str;
}
