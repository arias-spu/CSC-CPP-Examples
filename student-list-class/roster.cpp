#include "student.h"
#include "roster.h"

#include <iostream>
#include <string>
using std::istream;
using std::ostream;
using std::endl;
using std::string;

Roster::Roster():_count(0){
}
void Roster::Read(istream& input){
	do{
		if (_count < MAX_STUDENTS){
			input >> _students[_count]._name;
			for (size_t i=0; i < MAX_GRADES; i++)
				input >> _students[_count]._grades[i];
			_count++;
		}else{
			break;
		}
	}while (input);

}
void Roster::Write(ostream& output)const{
	for (size_t i = 0; i < _count; i++) {
		_students[i].Write(output);
		output << endl;
	}
}
int Roster::FindByName(const string& name, size_t start)const{
	for (size_t i = start; i < _count; i++) {
		if (_students[i]._name == name)
			return i;
	}
	return -1;
}
