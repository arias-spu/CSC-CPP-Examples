#include <iostream>
#include <fstream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::cerr;
using std::getline;
using std::ifstream;
using std::string; 

size_t CountWords(const string&);

int main(int argc, char* argv[]){
	if (argc != 2){
		cerr << "Incorrect usage" << endl;
		exit(1);
	}
	ifstream input(argv[1]);
	if (input.fail()){
		cerr << "Unable to open file " << argv[1] << endl;
		exit(1);
	}
	
	string line;
	while (getline(input, line)){
		cout << CountWords(line) << endl;
	}

	return 0;
}
size_t CountWords(const string& str){
	int count = 0;
	int pos = str.find(" ");
	while (pos != string::npos){
		count++;
		pos =str.find(" ", pos + 1);
	}
	return count + 1;
}
