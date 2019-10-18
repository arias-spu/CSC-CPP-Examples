#include <iostream>
#include <cstdlib>
using std::cout;
using std::cin;
using std::endl;


void magic(int, int);
void mystic(int&, int&);
int readInt(bool&);

int main(int argc, char* argv[]){
	int x = 3, y = 5;
	magic(x, y);
	cout << x << endl << y << endl;
	mystic(x, y);
	cout << x << endl << y << endl;

	cout << "Input a number: ";
	bool itFailed;
	x = readInt(itFailed);
	if (itFailed)
		cerr << "That was not a number!" << endl;
	else
		cout << "The number is: " << x << endl;

	return 0;
}


void magic(int a, int b){
	int c = a;
	a = b;
	b = c;
}
void mystic(int& a, int& b){
	int c = a;
	a = b;
	b = c;
}
int readInt(bool& error){
	char input[20];
	cin >> input;
	int retVal = atoi(input);
	if (retVal == 0 && input[0] != '0'){
		error = true;
		return 0;
	}
	error = false;
	return retVal;
}
