#include "student.h"
#include "studentlist.h"

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::cerr;
using std::endl;
using std::string;

int menu();

int main(){
	cout << "Welcome to the Student List Program" << endl << endl;
	StudentList roster;
	Initialize(roster);
	int menuChoice;
	while ( (menuChoice = menu()) != 4 ){
		if (menuChoice == 1){
			Student student;
			cout << "Please input the information for the student" << endl;
			cout << "id name ";
			for (size_t i=0; i < MAX_GRADES; i++)
				cout << "grade" << (i + 1) << " ";
			cout << endl;
			ReadStudent(student, cin);
			if (AddStudent(roster, student))
				cout << "Student added successfully" << endl;
			else
				cout << "The roster is full, unable to add student" << endl;
		}else if (menuChoice == 2){
			cout << "Student Roster" << endl;
			WriteStudentList(roster, cout);
		}else if (menuChoice == 3){
			SortStudents(roster);
		}else if (menuChoice == 4){
			cout << "Good bye" << endl;
		}else{
			cerr << "Something very strange is happening!" << endl;	
		}
	}
	

	return 0;
}

int menu(){
	int userOption;
	do{
		cout << "Roster Menu" << endl;
		cout << "=====================" << endl;
		cout << "1. Add Student" << endl;
		cout << "2. List Roster" << endl;
		cout << "3. Sort Roster" << endl; // What if we want to add an option Size of Roster?
		cout << "4. Exit" << endl;
		cin >> userOption;
		if (cin.fail()){
			cerr << "Invalid input, please try again, remember to input a number" << endl;
			cin.clear();
			cin.ignore(255, '\n');
			continue;
		}
		if (userOption > 0 && userOption <= 4)
			break;
		else
			cerr << "You made an incorrect choice, please input a valid option 1, 2, 3 or 4" << endl;
	}while (true);
	return userOption;
}
