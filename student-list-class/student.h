#pragma once

#include <iostream>
#include <string>
using std::string;
using std::istream;
using std::ostream;

const size_t MAX_GRADES = 3;

class Student{
	string _name;
	double _grades[MAX_GRADES];
	friend class Roster;
public:
	Student();
	Student(const string&);
	bool SetGrade(double, size_t);
	double GetGrade(size_t)const;
	string ToString()const;
	void Write(ostream&)const;
	void Read(istream&);
	double GetAverage()const;
};
