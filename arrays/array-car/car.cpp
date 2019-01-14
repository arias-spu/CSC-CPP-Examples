#include "car.h"

#include <string>
#include <iostream>

using std::string;
using std::istream;
using std::ostream;

void ReadCar(Car& car, istream& input){
	input >> car.make >> car.model >> car.color >> car.vin;
}
void PrintCar(const Car& car, ostream& output){
	output << car.make << " " << car.model << " " << car.color << " " << car.vin;
}
