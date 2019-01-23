// Implementation of the STUDENT ADT

#include <iostream>
#include <string>

using namespace std;

#include "student.h"

// Read into fields of a STUDENT struct 
// istrm - input stream
// student - a STUDENT struct to fill
// prompt - controls whether prompt issued for each field
// Returns: nothing
void ReadStudent(istream& istrm, STUDENT& student, bool prompt)
{
	if (prompt)
		cout << "First Name: ";
	istrm >> student.firstName;
	if (prompt)
		cout << "Last Name: ";
	istrm >> student.lastName;
	if (prompt)
		cout << "ID: ";
	istrm >> student.ID;
	if (prompt)
		cout << "GPA: ";
	istrm >> student.GPA;
}


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

