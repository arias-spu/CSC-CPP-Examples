#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void ReadValues(int[], size_t);
int FindMax(int[], size_t);

int main(){
	const int SIZE = 5;
	int data[5];
	ReadValues(data, SIZE);
	int maxValue = FindMax(data, SIZE);
	cout << "The maximum value is: " << maxValue << endl;
	return 0;
}
void ReadValues(int array[], size_t size){
	int count;
	int value;
	cout << "Number = ";
	cin >> value;
	while ( count < size ){
		array[count] = value;
		count++;
		cout << "Number = ";
		cin >> value;
	}
}
int FindMax(int array[], size_t size){
	int max = array[0];
	for (int i = 1; i < size; ++i)
	{
		if (max  < array[i])
			max = array[i];
	}
	return max;
}
