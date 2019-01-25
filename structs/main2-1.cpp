// Class example showing how to use a struct
// to build a multi-file application

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Student 
{
	string firstName;
	string lastName;
	long ID;
	float GPA;
};

// Functions that act on STUDENT structs
void WriteStudent(ostream& ostrm, const Student& student);
void ReadStudent(istream& istrm, Student& student, bool prompt=false);

// Main Program
int main()
{
	Student student;
//	ReadStudent(cin, student, true);
//	ofstream outputFile("somefile.txt");
//	WriteStudent(outputFile, student);
//	WriteStudent(cout, student);

	ifstream myPrettyFile("someone.txt");
	ReadStudent(myPrettyFile, student, true);
	student.GPA += 1;
	ofstream myPrettierFile("someother.txt");
	WriteStudent(myPrettierFile, student);

	
	return 0;
}

// Write the fields of a STUDENT struct on separate lines to an output stream object
// ostrm - an ostream object
// student - a STUDENT record
// Returns: nothing
void WriteStudent(ostream& ostrm, const Student& student)
{
	ostrm << "First Name: " << student.firstName << endl;
	ostrm << "Last Name: " << student.lastName << endl;
	ostrm << "ID: " << student.ID << endl;
	ostrm << "GPA: " << student.GPA << endl;
}
void ReadStudent(istream& istrm, Student& student, bool prompt){
	if (prompt){
		cout << "First Name: ";
		istrm >> student.firstName;
		cout << "Last Name: ";
		istrm >> student.lastName;
		cout << "ID: ";
		istrm >> student.ID;
		cout << "GPA: ";
		istrm >> student.GPA;
	}else{
		istrm >> student.firstName;
		istrm >> student.lastName;
		istrm >> student.ID;
		istrm >> student.GPA;
	}
}
