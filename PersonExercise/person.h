#pragma once
#include <iostream>
#include <string>
using std::ostream;
using std::istream;
using std::string;

class Person{
	string _name;
	size_t _age;
public:
	Person(const string&, size_t);
	void Print(ostream&)const;
	void Read(istream&);
	void Birthday();
};
