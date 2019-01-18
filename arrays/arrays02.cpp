#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

void PrintArray(string[10], size_t);

int main(){
	int marysArray[10];
	cout << "sizeof(int) = "  << sizeof(int) << endl;
	cout << "sizeof(marysArray) = " << sizeof(marysArray) << endl;
	cout << "sizeof(marysArray) / sizeof(marysArray[0]) = " 
		<< sizeof(marysArray) / sizeof(marysArray[0]) << endl;
	string names[] = {"Ann Taylor", "Elizabeth Masterantonio the Second Most Horrible Sister"};
	cout << sizeof(string) << endl;
	cout << sizeof(names[0]) << endl;
	cout << sizeof(names) << endl;
	cout << sizeof(names) / sizeof(names[0]) << endl;
	cout << endl << endl;
	PrintArray(names, 2);
	return 0;
}
void PrintArray(string data[10], size_t size){
	cout << "sizeof(data) = " << sizeof(data) << endl;
	cout << "sizeof(data[0]) = " << sizeof(data[0]) << endl;
	cout << "sizeof(data) / sizeof(data[0]) = " << sizeof(data) / sizeof(data[0]) << endl;
	cout << size << endl;
}
