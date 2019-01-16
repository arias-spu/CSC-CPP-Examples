// Class example to demonstrate buffer overruns
// with strcpy and strcat

#include <iostream>
#include <iomanip>
using namespace std;

#include <cstring>

// Forward decl
void DumpCharArray(char array[], int size);

// Main program
int main()
{
    char A[8];
    char B[8];
    char C[] = "012345678";
 
    cout << "Starting Memory Address of B (in decimal): " << (int)B << endl;
    cout << "Starting Memory Address of A (in decimal): " << (int)A << endl;
    cout << "Starting Memory Address of C (in decimal): " << (int)C << endl;

    while (true)
    {
        char ch;

        cout << "B: ";
        DumpCharArray(B, sizeof(B));
        cout << "A: ";
        DumpCharArray(A, sizeof(A));
        cout << "C: ";
        DumpCharArray(C, sizeof(C));

        cout << "Enter command: 0 = strcpy(A,C), 1 = strcpy(B,C), 2 = strcat(A,C), 3 = strcat(B,C), q = quit: ";
        cin >> ch;
        if (ch == 'q')
        {
            break;
        }
        else if (ch == '0')
        {
            strcpy(A,C);
        }
        else if (ch == '1')
        {
            strcpy(B,C);
        }
        else if (ch == '2')
        {
            strcat(A,C);
        }
        else if (ch == '3')
        {
            strcat(B,C);
        }
    }
   return 0;
}

void DumpCharArray(char array[], int size)
{
    cout << "strlen returns " << setw(4) << strlen(array) << ", array = ";
    for (int i = 0; i < size; i ++)
    {
        if (array[i] == '\0')
        {
            cout << setw(4) << "\\0"; 
        }
        else if (!isprint(static_cast<char>(array[i])))
        {
            cout << setw(4) << (int)((unsigned char)array[i]);
        }
        else
        {
            cout << setw(4) << array[i];
        }
    }
    cout << endl;
}
