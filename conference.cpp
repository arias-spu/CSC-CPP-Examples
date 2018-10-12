#include <iostream>
#include <string>
#include <cctype>

using std::getline;
using std::cout;
using std::cin;
using std::endl;

string& ToUpper(string&);

int main(int argc, char* argv[]){
	string sentence;
	while (true){
		getline(cin, sentence);
		if (sentence.find("finish") == string::npos)
			break;
		cout << ToUpper(sentece) << endl;
	}
	return 0;
}

string& ToUpper(string& str){
	for (size_t i = 0; i < str.length(); i++)
		str[i] = toupper(str[i]);
	return str;
}
