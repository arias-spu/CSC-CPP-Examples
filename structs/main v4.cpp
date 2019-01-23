// Class example showing how to use a struct
// to build a multi-file application

#include <iostream>
#include <string>

using namespace std;

#include "student.h"

// Main Program
int main()
{
	Student student;

	cout << "First Name: ";
	cin >> student.firstName;
	cout << "Last Name: ";
	cin >> student.lastName;
	cout << "ID: ";
	cin >> student.ID;
	cout << "GPA: ";
	cin >> student.GPA;


	WriteStudent(cout, student);
	
	return 0;
}

