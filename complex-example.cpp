#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::ostream;
using std::istream;
using std::showpos;

struct Complex{
	double real;
	double imaginary;
};


void ReadComplex(Complex&, istream&);
void PrintComplex(const Complex&, ostream&);
void Initialize(Complex&);
Complex sum(const Complex&, const Complex&);

Complex sub(const Complex&, const Complex&);


int main(){

	cout << sizeof(Complex) << endl;

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
	if (complex.real == 0){
		if (complex.imaginary == 0)
			out << 0;
		else if (complex.imaginary == 1)
			out << "i";
		else if (complex.imaginary == -1)
			out << "-i";
		else
			out << complex.imaginary << "i";
	}else { // the real part is not zero
		if (complex.imaginary == 0)
			out << complex.real;
		else if (complex.imaginary == 1)
			out << complex.real << " + i";
		else if (complex.imaginary == -1) 
			out << complex.real << " - i";
		else
			out << complex.real << showpos << complex.imaginary << "i";
	}
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

Complex sub(const Complex& lhs, const Complex& rhs){
	Complex retVal;
	retVal.real = lhs.real - rhs.real;
	retVal.imaginary = lhs.imaginary - rhs.imaginary;
	return retVal;	
}
