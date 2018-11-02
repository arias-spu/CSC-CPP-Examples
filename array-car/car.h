#pragma once

#include <string>
#include <iostream>
using std::string;
using std::istream;
using std::ostream;

struct Car{
		string make;
		string model;
		string color;
		unsigned int vin;
};

void ReadCar(Car&, istream&);
void PrintCar(const Car&, ostream&);
