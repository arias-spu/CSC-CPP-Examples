#include <iostream>


using std::cout;
using std::cin;
using std::endl;
using std::ostream;
using std::istream;

struct Complex{
	double real;
	double imaginary;
};

void ReadComplex(Complex&, istream&);
void PrintComplex(const Complex&, ostream&);
void Initialize(Complex&);
Complex sum(const Complex&, const Complex&);

int main(){
	Complex var1, var2;
	Initialize(var1);
	Initialize(var2);

	cout << "Please input a complex number (real imaginary): ";
	ReadComplex(var1, cin);
	cout << "Please input a complex number (real imaginary): ";
	ReadComplex(var2, cin);

	cout << "The complex numbers read are: " << endl;
	PrintComplex(var1, cout);
	cout << endl;
	PrintComplex(var2, cout);
	cout << endl;

	Complex var3;
	var3 = sum(var1, var2);
	cout << "The result of adding them together is: ";
	PrintComplex(var3, cout);
	cout << endl;

	return 0;
}

void ReadComplex(Complex& complex, istream& in){
	in >> complex.real >> complex.imaginary;
}
void PrintComplex(const Complex& complex, ostream& out){
	out << complex.real << " + " << complex.imaginary << "i";
}
void Initialize(Complex& complex){
	complex.real = complex.imaginary = 0.0;
}
Complex sum(const Complex& lhs, const Complex& rhs){
	Complex retVal;
	retVal.real = lhs.real + rhs.real;
	retVal.imaginary = lhs.imaginary + rhs.imaginary;
	return retVal;
}
