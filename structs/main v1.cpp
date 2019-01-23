// Class example showing how to use a struct
// to build a multi-file application

#include <iostream>
#include <string>

using namespace std;

struct STUDENT 
{
	string firstName;
	string lastName;
	long ID;
	float GPA;
};

int main()
{
	STUDENT student;

	cout << "First Name: ";
	cin >> student.firstName;
	cout << "Last Name: ";
	cin >> student.lastName;
	cout << "ID: ";
	cin >> student.ID;
	cout << "GPA: ";
	cin >> student.GPA;

	cout << "First Name: " << student.firstName << endl;
	cout << "Last Name: " << student.lastName << endl;
	cout << "ID: " << student.ID << endl;
	cout << "GPA: " << student.GPA << endl;

	return 0;
}