// Demonstrates a right a way to 
// output elements of an array
//
// Max Benson
// 2018-01-08 
#include <iostream>
#
using namespace std;

int main()
{
    int lockerCombo[] = {35, 24, 17};

     // Use a loop
    cout << "Result of using for loop\n";
    for (int i = 0; i < 3; i ++)
    {
        cout << lockerCombo[i] << " ";
    }
    cout << endl;
    return 0;
}