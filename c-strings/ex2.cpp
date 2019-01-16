// Class example to demonstrate reading characters into
// a "C" string and then printing diagonally

#include <iostream>
using namespace std;

// Forward decl
void PrintDiagonally(const char line[]);

// Main program
int main()
{
    const int MAXSIZE = 10;
    char line[MAXSIZE];

    cout << "Enter your string: ";
    cin.getline(line, MAXSIZE);
    PrintDiagonally(line);
    return 0;
}

/// Print a C string diagonally to cout
// Param: “text” a char[] storing a “C” string
// Returns: nothing
void PrintDiagonally(const char line[])
{
    int len = strlen(line);
     
    for (int i = 0; i < len; i ++)
    {
        for (int j = 0; j < i; j ++)
        {
            cout << ' ';
        }
        
        cout << line[i] << endl;
    }
}