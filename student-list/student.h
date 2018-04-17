#pragma once
#include <string>
#include <iostream>
using std::string;
using std::ostream;
using std::istream;

struct Student{
	string id;
	string name;
	int grade[3];
};

void Initialize(Student&);
void WriteStudent(const Student&, ostream&);
void ReadStudent(Student&, istream&);
int GetGrade(const Student&, size_t);
void SetGrade(Student&, size_t, int);
int GetAverage(const Student&);

