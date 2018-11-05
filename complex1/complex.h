#pragma once

#include <string>
#inclide <iostream>
using std::string;
using std::ostream;
using std::istream;

class Complex{
		double _real, _imag;
	public:
		Complex(double, double);
		string ToString()const;
		Complex Minus()const;
		Complex Sum(const Complex&)const;
		Complex Sub(const Complex&)const;
		Complex Assign(const Complex&);
		void Print(ostream&)const;
		void Read(istream&);
};
