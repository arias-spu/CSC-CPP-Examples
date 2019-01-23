// Implementation of the Student ADT

#include <iostream>
#include <string>

using namespace std;

#include "student.h"

// Read in fields of a Student struct 
// istrm - input stream
// student - a Student record to initialize
// Side effect: write prompts to cout
// Returns: true
bool ReadStudent(istream& istrm, Student& student)
{
	cout << "First Name: ";
	istrm >> student.firstName;
	cout << "Last Name: ";
	istrm >> student.lastName;
	cout << "ID: ";
	istrm >> student.ID;
	cout << "GPA: ";
	istrm >> student.GPA;
	return true;
}

// Write the fields of Student struct on separate lines to an output stream object
// ostrm - an ostream object
// student - a Student records
// Returns: nothing
void WriteStudent(ostream& ostrm, const Student& student)
{
	ostrm << "First Name: " << student.firstName << endl;
	ostrm << "Last Name: " << student.lastName << endl;
	ostrm << "ID: " << student.ID << endl;
	ostrm << "GPA: " << student.GPA << endl;
}

