#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::setw;

int main(int argc, char* argv[]){
	long int t = 321;
	long int* ptr = nullptr;
	ptr = &t;
	cout << setw(20) << &t << setw(10) << t << endl;
	cout << setw(20) << ptr << setw(10) << *ptr << endl;

	*ptr = 123;
	cout << setw(20) << &t << setw(10) << t << endl;
	cout << setw(20) << ptr << setw(10) << *ptr << endl;	
	return 0;
}
