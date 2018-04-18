#include "student.h"

#include <string>
#include <iostream>
#include <iomanip>
using std::string;
using std::ostream;
using std::istream;
using std::setw;


void Initialize(Student& student){
	for (size_t i = 0; i < MAX_GRADES; i++)
		student.grades[i] = 0;
}
void WriteStudent(const Student& student, ostream& out){
	out << setw(8) << student.id << setw(15) << student.name;
	for (size_t i=0; i < MAX_GRADES; i++)
		out << setw(5) << student.grades[i];
}
void ReadStudent(Student& student, istream& in){
	in >> student.id >> student.name;
	for (size_t i=0; i < MAX_GRADES; i++)
		in >> student.grades[i];
}
int GetGrade(const Student& student, size_t index){
	if (index >= MAX_GRADES)
		return -1;
	return student.grades[index];
}
bool SetGrade(Student& student, size_t index, int grade){
	if (index >= MAX_GRADES)
		return false;
	student.grades[index] = grade;
	return true;
}
int GetAverage(const Student& student){
	int average = 0;
	for (size_t i=0; i < MAX_GRADES; i++)
		average += student.grades[i];
	return average / MAX_GRADES;
}

