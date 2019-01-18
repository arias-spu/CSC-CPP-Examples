#include <cctype>
#include <cstring>
#include <iostream>
using std::cout;
using std::cin;
using std::cerr;
using std::endl;

bool CheckPassword(char*);

int main(int argv, char* argv[]){
	char userPassword[80], confirmPassword[80];
	do{
		cout << "Please Input Password: ";
		cin >> userPassword;
		while (! CheckPassword(userPassword)){
			cerr << "Your password is very weak" << endl;
			cout << "Plase Input Password: ";
			cin >> userPassword;
		}
		cout << "Confirm please: ";
		cin >> confirmPassword;
	}while (strcmp(userPassword, confirmPassword));
	cout << "Congratulations" << endl;
	return 0;
}

bool CheckPassword(char* password){


}
