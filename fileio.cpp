#include <iostream>
#include <fstream>
#include <string>
using std::ifstream;
using std::getline;
using std::string;

int main(){
	ifstream fin;
	string str, line;
	fin.open("afile.txt");
	getline(fin, line);
	fin >> str;
	cout << "line = " << line << endl;
	cout << "str  = " << str << endl;
	fin.close();

	fin.open("afile.txt");
	fin >> str;
	getline(fin, line);
	cout << "line = " << line << endl;
	cout << "str  = " << str << endl;
	fin.close();

	return 0;
}

