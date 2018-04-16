#include "point.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>

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
//		cout << "Please input point " << i << ": ";
		ReadPoint(points[i], inputFile);
	}

	cout << endl << endl;
	double distance, maxDistance = -1;
	int maxI = 0, maxJ = 0;
	for (int i = 0; i < SIZE; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			distance = Distance(points[i], points[j]);
			if (distance > maxDistance){
				maxDistance = distance;
				maxI = i;
				maxJ = j;
			}
			cout << setprecision(2) << fixed << setw(6) << distance;
		}
		cout << endl;
	}
	cout << "The greatest distance is from point["<<maxI<<"]: ";
	WritePoint(points[maxI], cout);
	cout << " to point[" << maxJ << "]: ";
	WritePoint(points[maxJ], cout);
	cout << endl << "And the distance is: " << maxDistance << endl;
	return 0;
}
