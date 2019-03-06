#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using std::cout;
using std::endl;
using std::string;
using std::stringstream;
using std::setw;

class Wakanda{
		int _id;
	public:
		Wakanda(int = 0);
		Wakanda(const Wakanda&);
		~Wakanda();
		string ToString()const;
		void Increase();
};

void ByValue(Wakanda);
void ByReference(Wakanda&);
void ByReferencePointer(Wakanda*);


int main(int argc, char* argv[]){


	cout << "~~~~~ Declaring Wakanda a" << endl;
	Wakanda a;
	cout << "~~~~~ Declaring Wakanda b(2)" << endl;
	Wakanda b(2);
	cout << "~~~~~ Declaring Wakanda c(b)" << endl;
	Wakanda c(b);
	cout << "~~~~~ Declaring Wakanda* d" << endl;
	Wakanda* d = nullptr;

	cout << "Addresses of the Variables: " << endl;
	cout << setw(8) << "&a = " << &a << endl;
	cout << setw(8) << "&b = " << &b << endl;
	cout << setw(8) << "&c = " << &c << endl;
	cout << endl << endl;

	cout << "\\/\\/~~~~~ Before Calling ByValue(a)" << endl;
	ByValue(a);
	cout << "/\\/\\~~~~~ After Calling ByValue(a)" << endl;
	cout << endl;
	cout << "\\/\\/~~~~~ Before Calling ByReference(b)" << endl;
	ByReference(b);
	cout << "/\\/\\~~~~~ After Calling ByReference(b)" << endl;
	cout << endl;
	cout << "\\/\\/~~~~~ Before Calling ByReferencePointer(&b)" << endl;
	ByReferencePointer(&b);
	cout << "/\\/\\~~~~~ After Calling ByReferencePointer(&b)" << endl;
	cout << endl;

	cout << "a ==> " << a.ToString() << endl;
	cout << "b ==> " << b.ToString() << endl;
	cout << "c ==> " << c.ToString() << endl;

	cout << "-------------------------------- Finished main" << endl;
	cout << "--------------------------- T H E    E N D ---" << endl << endl;
	return 0;
}



Wakanda::Wakanda(int id): _id(id){
	cout << setw(55) << "Constructor: Wakanda::Wakanda(int id)" << setw(3) << _id << endl;
}
Wakanda::Wakanda(const Wakanda& wakanda): _id(wakanda._id){
	cout << setw(55) << "Constructor: Wakanda::Wakanda(const Wakanda& wakanda)" << setw(3) << _id << endl;
}
Wakanda::~Wakanda(){
	cout << setw(55) << "Destructor: Wakanda::~Wakanda()" << setw(3) << _id << endl;
}
string Wakanda::ToString()const{
	stringstream ss;
	ss << "Wakanda id( " << _id << " )";
	return ss.str();
}
void Wakanda::Increase(){
	_id++;
}
void ByValue(Wakanda wakanda){
	cout << "Address of parameter: " << &wakanda << endl;
	cout << wakanda.ToString() << endl;
	wakanda.Increase();
	cout << "-------------------------------- Finished ByValue" << endl;
}
void ByReference(Wakanda& wakanda){
	cout << "Address of parameter: " << &wakanda << endl;
	cout << wakanda.ToString() << endl;
	wakanda.Increase();
	cout << "-------------------------------- Finished ByReference" << endl;
}
void ByReferencePointer(Wakanda* wakanda){
	cout << "Address of parameter: " << wakanda << endl;
	cout << wakanda->ToString() << endl;
	wakanda->Increase();
	cout << "-------------------------------- Finished ByReferencePointer" << endl;
}
