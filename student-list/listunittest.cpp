#include "student.h"
#include "studentlist.h"

#include <iostream>
#include <cassert>
#include <sstream>

using std::cout;
using std::cin;
using std::endl;
using std::cerr;
using std::stringstream;


int main(int argc, char* argv[]){
	Student student;
	Initialize(student);
	for (size_t i=0; i<MAX_GRADES; i++)
		assert(GetGrade(student, i) == 0);
	assert(GetGrade(student, 3) == -1);
	assert(SetGrade(student, 3, 100) == false);

	assert(SetGrade(student, 0, 100));
	assert(SetGrade(student, 1, 80));
	assert(SetGrade(student, 2, 90));

	assert(GetGrade(student, 0) == 100);
	assert(GetGrade(student, 1) == 80);
	assert(GetGrade(student, 2) == 90);
	assert(GetAverage(student) == 90);

	stringstream studentBuffer;
	studentBuffer.str(
		"90015 John 80 90 85"
	);
	ReadStudent(student, studentBuffer);
	assert(student.name == "John");
	assert(student.id == "90015");
	assert(GetGrade(student, 0) == 80);
	assert(GetGrade(student, 1) == 90);
	assert(GetGrade(student, 2) == 85);
	assert(GetAverage(student) == 85);

	StudentList roster;
	Initialize(roster);
	assert(StudentsListSize(roster) == 0);
	stringstream listBuffer;
	listBuffer.str(
			"90036 Peter 70 71 72\n"
			"90017 Marie 100 100 100\n"
			"90011 Anita 50 75 80\n"
			"90019 Lore 80 70 60\n"
			"90010 Jean 90 95 100"
	);
	assert(ReadStudentList(roster, listBuffer) == MAX_STUDENTS);
	assert(roster.roster[0].name == "Peter");
	assert(roster.roster[1].name == "Marie");
	assert(roster.roster[2].name == "Anita");
	assert(roster.roster[3].name == "Lore");
	SortStudents(roster);
	assert(roster.roster[0].name == "Anita");
	assert(roster.roster[1].name == "Marie");
	assert(roster.roster[2].name == "Lore");
	assert(roster.roster[3].name == "Peter");
	assert(StudentsListSize(roster) == 4);


	return 0;
}
