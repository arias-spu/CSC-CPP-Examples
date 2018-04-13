#include "point.h"
#include <iostream>
#include <fstream>
#include <iomanip>

using std::cout;
using std::cerr;
using std::cin;
using std::endl;
using std::setprecision;
using std::fixed;
using std::setw;
using std::istream;
using std::ifstream;

const int SIZE = 5;
int main(){
	
	Point points[SIZE];
	ifstream inputFile("points.txt");
	if (inputFile.fail()){
		cerr << "Error opening file!" << endl;
		exit(1);
	}
	for (int i = 0; i < SIZE; ++i)
	{
		cout << "Please input point " << i << ": ";
		ReadPoint(points[i], cin);
	}

	cout << endl << endl;
	double distance;
	for (int i = 0; i < SIZE; ++i)
	{
		for (int j = 0; j < SIZE; ++j)
		{
			distance = Distance(points[i], points[j]);
			cout << setprecision(2) << fixed << setw(6) << distance;
		}
		cout << endl;
	}

	return 0;
}