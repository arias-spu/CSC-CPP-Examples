#include "person.h"
#include <iostream>
#include <string>
#include <sstream>
using std::istream;
using std::ostream;
using std::string;
using std::stringstream;
	
Person::Person(const string& name, size_t age){
	_name = name;
	_age = age;
}
void Person::Print(ostream& output)const{
	output << _name << " " << _age;
}
void Person::Read(istream& input){
	input >> _name >> _age;
}
void Person::Birthday(){
	_age++;
}
