#include "point.h"

#include <iostream>
using std::cout;
using std::endl;

int main(){
	Point a(2,3), b;
	cout << a.ToString() << endl << b.ToString() << endl;
	cout << a.Distance(b) << endl;
	
	//cout << a._x << endl;
	
	return 0;
}