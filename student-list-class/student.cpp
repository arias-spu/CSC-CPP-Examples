#include "student.h"

#include <iostream>
#include <string>
#include <sstream>
using std::string;
using std::stringstream;
using std::istream;
using std::ostream;

Student::Student(){
	for (size_t i = 0; i < MAX_GRADES; i++) {
		_grades[i] = 0.0;
	}
}
Student::Student(const string& name): _name(name){
	for (size_t i = 0; i < MAX_GRADES; i++) {
		_grades[i] = 0.0;
	}
}
bool Student::SetGrade(double grade, size_t index){
	if (index >= MAX_GRADES)
		return false;
	_grades[index] = grade;
	return true;
}
double Student::GetGrade(size_t index)const{
	if (index >= MAX_GRADES)
		return -1;
	return _grades[index];
}
string Student::ToString()const{
	stringstream ss;
	ss << _name << ": {";
	for (size_t i = 0; i < MAX_GRADES; i++) {
		ss <<  _grades[i] << '\t';
	}
	ss << "}";
	return ss.str();
}
void Student::Write(ostream& output)const{
	output <<  _name << '\t';
	for (size_t i = 0; i < MAX_GRADES; i++) {
		output <<  _grades[i] << '\t';
	}
}
void Student::Read(istream& input){
	input >> _name;
	for (size_t i = 0; i < MAX_GRADES; i++) {
		input >> _grades[i];
	}
}
double Student::GetAverage()const{
	double average = 0;
	for (size_t i = 0; i < MAX_GRADES; i++) {
		average += _grades[i];
	}
	return average / MAX_GRADES;
}
