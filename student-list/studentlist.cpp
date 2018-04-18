#include "student.h"
#include "studentlist.h"

#include <string>
#include <iostream>
using std::string;
using std::ostream;
using std::endl;


void Initialize(StudentList& list){
	list.size = 0;
}

bool AddStudent(StudentList& list, const Student& student){
	if (list.size == MAX_STUDENTS)
		return false;
	list.roster[list.size] = student;
	list.size++;
	return true;
}
void SortStudents(StudentList& list){
	if (list.size == 0)
		return;
	for (size_t i = 0; i < list.size; i++)
		for (size_t j = 0; j < list.size - i - 1; j++)
			if (list.roster[j].id > list.roster[j + 1].id){ // Swap
				Student temporal = list.roster[j];
				list.roster[j] = list.roster[j + 1];
				list.roster[j + 1] = temporal;
			}
		
}
void WriteStudentList(const StudentList& list, ostream& out){
	for (size_t i = 0; i < list.size; i++){
		WriteStudent(list.roster[i], out);
		out << endl;
	}
}
