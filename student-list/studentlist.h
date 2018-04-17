#pragma once
#include "student.h"

#include <string>
#include <iostream>
using std::string;
using std::ostream;

const int MAX_STUDENTS = 10;

struct StudentList{
	Student roster[MAX_STUDENTS];
	size_t size;
};

void Initialize(StudentList&);
bool AddStudent(StudentList&, const Student&);
void SortStudents(StudentList&);
void WriteStudentList(const StudentList&, ostream&);
