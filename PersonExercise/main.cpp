#include "person.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(int argc, char* argv[]){
	Person a("",0), b("",0);
	cout << "Input two persons (name, age): " << endl;
	a.Read(cin);
	b.Read(cin);
	cout << "The persons you input: " << endl;
	a.Print(cout);
	cout << endl;
	b.Print(cout);
	cout << endl;
	a.Birthday();
	cout << "After a\'s birthday: " ;
	a.Print(cout);
	cout << endl;
	return 0;
}
