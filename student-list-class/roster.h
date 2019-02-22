#pragma once

#include "student.h"

#include <iostream>
#include <string>
using std::istream;
using std::ostream;
using std::string;

const size_t MAX_STUDENTS = 5;

class Roster{
	Student _students[MAX_STUDENTS];
	size_t _count;
public:
	Roster();
	void Read(istream&);
	void Write(ostream&)const;
	int FindByName(const string&, size_t = 0)const;
};
