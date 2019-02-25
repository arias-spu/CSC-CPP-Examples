#include <iostream>
using namespace std;

int main()
{
    char rgch[2];
    float rgf[2];

    cout << "address of rgch = " << (int)rgch << "\tsizeof(rgch) = " << sizeof(rgch) << endl;
    cout << "address of rgch[0] = " << (int)&rgch[0] << "\tsizeof(rgch[0]) = " << sizeof(rgch[0]) << endl;
    cout << "address of rgch[1] = " << (int)&rgch[1] << "\tsizeof(rgch[1]) = " << sizeof(rgch[1]) << endl;
    cout << endl;
    cout << "address of rgf = " << (int)rgf << "\tsizeof(rgf) = " << sizeof(rgf) << endl;
    cout << "address of rgf[0] = " << (int)&rgf[0] << "\tsizeof(rgf[0]) = " << sizeof(rgf[0]) << endl;
    cout << "address of rgf[1] = " << (int)&rgf[1] << "\tsizeof(rgf[1]) = " << sizeof(rgf[1]) << endl;
}