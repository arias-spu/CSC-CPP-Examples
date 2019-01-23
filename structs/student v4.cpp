// Implementation of the STUDENT ADT

#include <iostream>
#include <string>

using namespace std;

#include "student.h"

// Write the fields of a STUDENT struct on separate lines to an output stream object
// ostrm - an ostream object
// student - a STUDENT struct
// Returns: nothing
void WriteStudent(ostream& ostrm, const STUDENT& student)
{
	ostrm << "First Name: " << student.firstName << endl;
	ostrm << "Last Name: " << student.lastName << endl;
	ostrm << "ID: " << student.ID << endl;
	ostrm << "GPA: " << student.GPA << endl;
}
