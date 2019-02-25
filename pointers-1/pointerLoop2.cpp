#include <iostream>
using namespace std;

int strlen(char *sz)
{
    int len = 0;
    while(*sz++)
	len ++;
    return len;
}

int main()
{
    cout << strlen("Hello") << endl;
}    