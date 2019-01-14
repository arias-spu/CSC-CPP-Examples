#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
	int marysArray[10];
	cout << "sizeof(int) = "  << sizeof(int) << endl;
	cout << "sizeof(marysArray) = " << sizeof(marysArray) << endl;
	cout << "sizeof(marysArray) / sizeof(marysArray[0]) = " 
		<< sizeof(marysArray) / sizeof(marysArray[0]) << endl;
	return 0;
}
