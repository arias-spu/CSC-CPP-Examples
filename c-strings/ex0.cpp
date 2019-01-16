// Class example showing two things not to do with C strings
// (or any array for that matter).  
// 1) You can only bulk assign array values with an initializer
//	 -- the code assigning "alpha" to A doesn't compile.
// 2) Don't try to compare two compare character arrays with
//    the relational operators, what you end up doing is
//    is comparing memory addresses, and in the example below
//    they are different even though they store the same thing
//
// Max Benson
// 2018-01-12
//
#include <iostream>

using namespace std;

int main()
{
	
	char A[6];

	A = "alpha";

	char B[] = "beta";

	if (B == "beta")
		cout << "B == beta\n";
	else
		cout << "B != beta\n";
}