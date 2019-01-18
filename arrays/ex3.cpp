// Demonstrates a wrong way to 
// output elements of an array
//
// Max Benson
// 2018-01-08 
#include <iostream>
using namespace std;

int main()
{
    int lockerCombo[] = {35, 24, 17};

    // Try to output the array at once
    cout << "Result of 'cout << lockerCombo << endl'\n";
    cout << lockerCombo << endl;
    cout << endl;
    return 0;
}
