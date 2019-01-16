// Class example to demonstrate processing a "C" string
// with a loop using strlen() to obtain the string length

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char sentence[] = "The rain in Spain falls mainly on the plains.";
    int len = strlen(sentence);

    for (int i = 0; i < len; i ++)
    {
        if (isalpha(sentence[i]))
        {
            cout.put( toupper(sentence[i]) );                       
        }
    }
    cout << endl;
    return 0;
}