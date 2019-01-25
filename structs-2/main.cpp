// Class example showing how to use a struct
// to build a multi-file application

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

#include "class.h"

// Main Program
int main()
{
	CLASS roster;
	ifstream inFile;
	string fileName;
	string answer;
	
	// Get file name
	cout << "Enter File Name: ";
	getline(cin, fileName);

	// Open file
	inFile.open(fileName);
	if (inFile.fail())
	{
		cerr << "Cannot open file \"" << fileName << "\".\n";
		exit(1);
	}

	// Read in class
	if (!ReadClass(inFile, roster))
	{
		cerr << "File contains more students than ADT capacity.\n";
		exit(1);
	}

	// Close file
	inFile.close();

	// Now allow user to search by prefix of first name
	do
	{
		string prefix;
		int startIndex;

		// Get prefix to search on
		cout << "Enter prefix to search on: ";
		getline(cin, prefix);
		if (cin.fail())
		{
			cerr << "Error reading cin" << endl;
			break;
		}

		// Loop searching for matches and output students
		// as they are found
		startIndex = FindByFirstName(roster, 0, prefix);
		if (startIndex < 0)
		{
			cout << "No matching students" << endl;
		}
		else
		{
			do
			{
				WriteClassMember(roster, startIndex, cout);
				startIndex = FindByFirstName(roster, startIndex+1, prefix);
			} while (startIndex > 0 );
		}

		// Ask uwer whether she wants to continue
		cout << "Do you want to search again? (y/n) ";
		getline(cin, answer);
	} while (answer.length() > 0 && answer[0] == 'y');
	
	return 0;
}

