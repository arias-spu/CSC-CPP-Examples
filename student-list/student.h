#pragma once
#include <string>
#include <iostream>
using std::string;
using std::ostream;
using std::istream;

const int MAX_GRADES = 3;

struct Student{
	string id;
	string name;
	int grades[MAX_GRADES];
};

void Initialize(Student&);
void WriteStudent(const Student&, ostream&);
void ReadStudent(Student&, istream&);
int GetGrade(const Student&, size_t);
bool SetGrade(Student&, size_t, int);
int GetAverage(const Student&);

