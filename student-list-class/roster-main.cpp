#include "roster.h"

#include <sstream>
#include <iostream>

using std::stringstream;
using std::cout;
using std::endl;
using std::cin;

int main(int argc, char* argv[]){
	stringstream data;
	data.str(
		"James 20 20 20\n"
		"John 100 80 90\n"
		"Jill 20 40 50\n"
		"Jenny 30 40 10\n"
		"Julie 100 50 75\n"
		"Jon 20 11 11\n"		
	);
	
	Roster roster;
	roster.Read(data);
	roster.Write(cout);
	
	cout << endl << endl << endl;
	cout << roster.FindByName("John") << endl;

	return 0;
}
