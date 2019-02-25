#include <iostream>
using namespace std;

int main()
{
    struct S
    {
        int w;
        char ch;
    } aStruct;

    cout << "address of aStruct = " << (int)&aStruct << "\tsizeof(aStruct) = " << sizeof(aStruct) << endl;
    cout << "address of aStruct.ch = " << (int)&aStruct.ch << "\tsizeof(aStruct.ch) = " << sizeof(aStruct.ch) << endl;
    cout << "address of aStruct.w = " << (int)&aStruct.w << "\tsizeof(aStruct.w) = " << sizeof(aStruct.w) << endl;
    cout << endl;
}