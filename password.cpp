#include <iostream>
#include <string>
#include <fstream>
#include <cctype>

using std::cin;
using std::cerr;
using std::cout;
using std::endl;
using std::string;
using std::ofstream;

bool passwordcheck(const string&);

int main(int argc, char* argv[]){
	string password;
	cout << "Welcome to the password verification program" << endl;
	cout << "Please input a password, the program will tell you if it is good or weak" << endl;
	cout << "A good password has at least one capital letter, " << endl
		<< "one lowercase letter, a number and a special symbol" << endl
		<< "a length of at most 8 characters" << endl;
	ofstream passwordFile("passwords.txt");
	do{
		cout << "Password: ";
		cin >> password;
		if (password == "finish")
			break;
		passwordFile << password << endl;
		if (passwordcheck(password))
			cout << password << " is a good password" << endl;
		else
			cerr << password << " is too week" << endl;
	}while(true);
	cout << "Goodbye..." << endl;

	return 0;
}
bool passwordcheck(const string& password){
	bool upperCaseLetter, lowerCaseLetter, number, symbol;
	upperCaseLetter = lowerCaseLetter = number = symbol = false;
	if (password.length() < 8)
		return false;
	for (int i=0; i<password.length(); i++){
		if (isalpha(password[i]) && isupper(password[i]))
			upperCaseLetter = true;
		if (isalpha(password[i]) && islower(password[i]))
			lowerCaseLetter = true;
		if (isdigit(password[i]))
			number = true;
		if (!isdigit(password[i]) && !isalpha(password[i]) && !isspace(password[i]))
			symbol = true;
		if (isspace(password[i]))
			return false;
	}
	return upperCaseLetter && lowerCaseLetter && number && symbol;
}
