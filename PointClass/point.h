#pragma once
#include <iostream>
#include <string>
using std::string;
using std::ostream;
using std::istream;

class Point{
  private:
	double _x,_y;
  public:
	Point();
	Point(double, double);
	string ToString()const;
	void Write(ostream&)const;
	void Read(istream&);
	double Distance(const Point&)const;
};