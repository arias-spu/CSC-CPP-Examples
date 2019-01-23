// Class example showing how to use a struct
// to build a multi-file application

#include <iostream>
#include <string>

using namespace std;

#include "student.h"

// Main Program
int main()
{
	STUDENT student;

	ReadStudent(cin, student, true);
	WriteStudent(cout, student);
	
	return 0;
}

