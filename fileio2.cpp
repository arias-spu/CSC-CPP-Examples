#include <iostream>
#include <fstream>
#include <string>
using std::ifstream;
using std::ostream;
using std::getline;
using std::string;
using std::cout;
using std::cerr;
using std::endl;

size_t CountLetter(char, ifstream&);

int main(int argc, char* argv[]){
	if (argc != 2){
		cerr << "Not enough parameters" << endl;
		exit(1);
	}
	ifstream inputFile(argv[1]);
	if (inputFile.fail()){
		cerr << "Unable to open file " << argv[1] << endl;
		exit(1);
	}
	
	cout << "There are " << CountLetter('a', inputFile) << " in file " << argv[1] << endl;

	return 0;
}

size_t CountLetter(char letter, ifstream& input){
	size_t count = 0;
	string word;
	while (input >> word){
		for (size_t i = 0; i < word.length(); i++){
			if (word[i] == letter)
				count ++;
		}
	}
	return count;
}
