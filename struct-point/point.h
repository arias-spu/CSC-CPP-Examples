#pragma once
#include <iostream>
using std::ostream;
using std::istream;

struct Point{
	double x;
	double y;
};

double Distance(const Point&, const Point&);
void WritePoint(const Point&, ostream&);
void ReadPoint(Point&, istream&);