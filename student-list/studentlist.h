#pragma once
#include "student.h"

#include <string>
#include <iostream>
using std::string;
using std::ostream;
using std::istream;


const int MAX_STUDENTS = 4;

struct StudentList{
	Student roster[MAX_STUDENTS];
	size_t size;
};

void Initialize(StudentList&);
bool AddStudent(StudentList&, const Student&);
void SortStudents(StudentList&);
void WriteStudentList(const StudentList&, ostream&);
size_t ReadStudentList(StudentList&, istream&);
size_t StudentsListSize(const StudentList&);
