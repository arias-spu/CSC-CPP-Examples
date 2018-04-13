#include "point.h"
#include <cmath>
#include <iostream>
#include <iomanip>
using std::ostream;
using std::istream;
using std::setw;
using std::setprecision;
using std::fixed;

double Distance(const Point& a, const Point& b){
	return sqrt(pow(a.x - b.x, 2.0) + pow(a.y - b.y, 2.0));
}
void WritePoint(const Point& point, ostream& out){
	out << "[" << setprecision(2) << fixed << setw(6) << point.x << ","
		<< setprecision(2) << fixed << setw(6) << point.y << "]";
}
void ReadPoint(Point& point, istream& in){
	in >> point.x >> point.y;
}