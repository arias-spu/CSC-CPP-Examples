#include "point.h"

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
using std::string;
using std::ostream;
using std::istream;
using std::stringstream;

Point::Point(){
	_x = _y = 0.0;
}
Point::Point(double x, double y){
	_x = x;
	_y = y;
}
string Point::ToString()const{
	stringstream retVal;
	retVal << "[" << _x << ", " << _y << "]";
	return retVal.str();
}
void Point::Write(ostream& out)const{
	out << _x << " " << _y;
}
void Point::Read(istream& in){
	in >> _x >> _y;
}
double Point::Distance(const Point& p)const{
	return sqrt(pow(_x - p._x, 2) + pow(_y - p._y, 2));
}
