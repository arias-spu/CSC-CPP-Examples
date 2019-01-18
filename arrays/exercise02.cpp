#include <iostream>
using std::cout;
using std::cin;
using std::endl;

double CalculateAverage(const double array[], size_t size);

int main(int argc, char* argv[])
{
	const int SIZE = 5;
	double data[SIZE];
	// Read values from keyboard and put them inside the array
	for (size_t i = 0; i < SIZE; i++){
		cout << "Give me the number " << (i + 1) << " : ";
		cin >> data[i];
	}
	// Calculate the average of the values inside the array
	double average = CalculateAverage(data, SIZE);
	// Output the array and its average
    	cout << "The average is: " << average << endl;
	cout << endl;
	for (size_t i = 0; i < SIZE; i++){
		cout << data[i] << endl;
	}

	return 0;
}
double CalculateAverage(const double array[], size_t size){
	double sum = 0;
	for (size_t i = 0; i < size; i++){
		sum += array[i];
		array[i] = 0;
	}
	return sum / size;
}
