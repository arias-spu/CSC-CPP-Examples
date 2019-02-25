#include "point.h"

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

void AFunction(const Point&);

int main(){
	Point a(2,3), b;
	cout << a.ToString() << endl << b.ToString() << endl;
	cout << a.Distance(b) << endl;
	AFunction(b);
	cout << a.Distance(b) << endl;

//	cout << a._x << endl;
	
	return 0;
}
void AFunction(const Point& point){
//	point.Read(cin);
//	Cannot call a non-const method if parameter is const!
}
