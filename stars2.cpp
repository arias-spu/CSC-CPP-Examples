#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(int argc, char* argv[]){
	int n;
	cout << "n: ";
	cin >> n;
	if (n % 2 == 0)
		return 1;

	for (int lines = 0; lines <= n / 2; lines++){
		for (int space = n / 2; space > lines; space--)
			cout << " ";
		for (int stars = 0; stars < 2 * lines + 1; stars++)
			if (stars % 2 == 0)
				cout << "*";
			else
				cout << " ";
		cout << endl;
	}
	for (int lines = 0; lines < n / 2; lines++){
		for (int space = 0; space < lines + 1; space++)
			cout << " ";
		for (int stars = 0; stars < n - 2 - 2 * lines; stars++)
			if (stars % 2 == 0)
				cout << "*";
			else
				cout << " ";
		cout << endl;
	}
	return 0;

}
