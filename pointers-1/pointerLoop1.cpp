#include <iostream>
using namespace std;

int main()
{
    int A[] = { 3, 5, 2 };
    int len = sizeof(A)/sizeof(A[0]);

    for (int *ptr = &A[len-1]; ptr >= A; ptr--)
    {
        cout << *ptr << '\t';
    }
    cout << endl;
}