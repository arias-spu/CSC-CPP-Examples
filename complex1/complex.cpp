#include "complex.h"

#include <string>
#include <iostream>
#include <sstream>
using std::string;
using std::istream;
using std::ostream;
using std::showpos;

Complex::Complex(double real, double imag){
	_real = real;
	_imag = imag;
}
string Complex::ToString()const{
	stringstream retVal;
	retVal << showpos << _real << '\t' << _imag << "i";
	return retVal.str();
}
Complex Complex::Minus()const{
	return Complex(-_real, -_imag);
}
Complex Complex::Sum(const Complex& rhs)const{
	Complex retVal(_real + rhs._real, _imag + rhs._imag);
	return retVal;
}
Complex Complex::Sub(const Complex& rhs)const{
	Complex retVal(_real - rhs._real, _imag - rhs._imag);
	return retVal;
}
Complex& Complex::Assign(const Complex& rhs){
	_real = rhs._real;
	_imag = rhs._imag;
	return *this;
}
void Complex::Print(ostream&)const{

}
void Complex::Read(istream&){

}
