#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    string b;
    string *ptr1 = &a;
    string *ptr2 = &b;

    cout << "ptr1 = " << (int)ptr1 << endl;
    cout << "ptr2 = " << (int)ptr2 << endl;
    cout << endl;
    cout << "ptr1 - ptr2 = " << ptr1-ptr2 << endl;
    cout << endl;
    cout << "ptr1 + 1 = " << (int)(ptr1+1) << endl;
    cout << "ptr1 + 2 = " << (int)(ptr1+2) << endl;
    cout << "ptr1 - 1 = " << (int)(ptr1-1) << endl;
}