#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(int argc, char* argv[])
{
	const int SIZE = 5;
	double data[SIZE];
	double sum = 0;
	// Read values from keyboard and put them inside the array
	for (size_t i = 0; i < SIZE; i++){
		cout << "Give me the number " << (i + 1) << " : ";
		cin >> data[i];
		sum += data[i];
	}
	// Calculate the average of the values inside the array
	double average = sum / SIZE;
	// Output the array and its average
    	cout << "The average is: " << average << endl;
	cout << endl;
	return 0;
}
