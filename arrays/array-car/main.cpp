#include "car.h"

#include <string>
#include <iostream>
#include <sstream>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::stringstream;

int LinearSearch(Car[], size_t, unsigned int);
void SwapCars(Car&, Car&);
void SelectionSort(Car[], size_t);
int main(int argc, char* argv[]){
	stringstream data;
	data.str(
			"Lamborghini Diablo Red 1211\n"
			"Toyota Camry Blue 3382\n"
			"VW Polo Space-Grey 1101\n"
			"Honda Civic Black 9911\n"
			"Chrysler PT-Cruiser Red 6511"
	);
	Car myCars[5];
	for (size_t i = 0; i < 5; i++) {
		ReadCar(myCars[i], data);
	}

	SelectionSort(myCars, 5);
	for (size_t i = 0; i < 5; i++) {
		PrintCar(myCars[i], cout);
		cout << endl;
	}

	unsigned int vin;
	int position;
	while (true){
		cout << "Please input the vin (0 to finish): ";
		cin >> vin;
		if (!vin){
			break;
		}
		position = LinearSearch(myCars, 5, vin);
		if (position == -1){
			cout << vin << " not found" << endl;
		}else{
			PrintCar(myCars[position], cout);
			cout << endl;
		}
	}
	cout  << "Good Bye" << endl;
	return 0;
}
int LinearSearch(Car cars[], size_t size, unsigned int key){
	for (size_t i = 0; i < size; i++) {
		if (cars[i].vin == key)
			return i;
	}
	return -1;
}
void SelectionSort(Car cars[], size_t size){
	size_t minPosition;
	for (size_t i = 0; i < size - 1; i++) {
		minPosition = i;
		for (size_t p = i + 1; p < size; p++) {
			if (cars[p].vin < cars[minPosition].vin)
				minPosition = p;
		}
		SwapCars(cars[i], cars[minPosition]);
	}
}
void SwapCars(Car& a, Car& b){
	Car c = a;
	a = b;
	b = c;
}
