#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;

int main(){
	unsigned char n = 0xFF;
	cout << static_cast<short>(n) << endl;
	signed char m = 0xFF;
	cout << static_cast<short>(m) << endl;

	signed char p = 0x100;
	cout << static_cast<short>(p) << endl;

	return 0;
}
