#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::setw;

int main(int argc, char* argv[]){
	int x;
	long double y;
	char z;

	cout << setw(20) << (long)&x << setw(16) << &x << setw(4) << sizeof(x) << endl;
	cout << setw(20) << (long)&y << setw(16) << &y << setw(4) << sizeof(y) << endl;
	cout << setw(20) << (long)&z << setw(16) << &z << setw(4) << sizeof(z) << endl;
	
	
	return 0;
}
