#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <cctype>
#include <cstring>
using std::cout;
using std::endl;
using std::string;
using std::stringstream;
using std::setw;


class Elbonia{
		char* _name;
	public:
		Elbonia(const char*);
		Elbonia(const Elbonia&);
		~Elbonia();
		const Elbonia& operator=(const Elbonia&);
		string ToString()const;
		void ToUpper();
};

void ByValue(Elbonia);

int main(int argc, char* argv[]){
	Elbonia e("Alexander Great");
	Elbonia j("Josh");
	Elbonia d("Dilbert");

	cout << "j = " << j.ToString() << endl;
	cout << "d = " << d.ToString() << endl;
	cout << "e = " << e.ToString() << endl;

	e = d;
	cout << "After e = d" << endl;
	cout << "e = " << e.ToString() << endl << endl;

	cout << "Before calling ByValue" << endl;
	ByValue(e);
	cout << "After calling ByValue" << endl << endl;
	cout << "e = " << e.ToString() << endl;


	return 0;
}





Elbonia::Elbonia(const char* name){
	_name = new char[strlen(name) + 1];
	strcpy(_name, name);
}
Elbonia::Elbonia(const Elbonia& elbonia){
	_name = new char[strlen(elbonia._name) + 1];
	strcpy(_name, elbonia._name);
}
Elbonia::~Elbonia(){
	if (_name){
		delete[] _name;
	}
}
const Elbonia& Elbonia::operator=(const Elbonia& rhs){
	if (strlen(rhs._name) != strlen(_name)){
		delete[] _name;
		_name = new char[strlen(rhs._name) + 1];
	}
	strcpy(_name, rhs._name);
	return *this;
}
string Elbonia::ToString()const{
	stringstream ss;
	ss << "name: " << setw(15) << _name << setw(25) << (void*)_name;
	return ss.str();
}
void Elbonia::ToUpper(){
	for (size_t i = 0; i < strlen(_name); i++) {
		_name[i] = toupper(_name[i]);
	}
}

void ByValue(Elbonia elbonia){
	cout << "p = " << elbonia.ToString() << endl;
	elbonia.ToUpper();
}
