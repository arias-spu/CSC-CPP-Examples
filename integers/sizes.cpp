#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::hex;
using std::cin;

int main()
{
	char n;
	cout << "n = ";
	cin >> hex >> n;
	cout << n << endl;
	cout << hex << "Hello " << n << endl;
	
	cout << "         sizeof(char) = " << sizeof(char) << endl;
	cout << "    sizeof(short int) = " << sizeof(short int) << endl;
	cout << "          sizeof(int) = " << sizeof(int) << endl;
	cout << "     sizeof(long int) = " << sizeof(long int) << endl;
	cout << "sizeof(long long int) = " << sizeof(long long int) << endl;
	return 0;
}
