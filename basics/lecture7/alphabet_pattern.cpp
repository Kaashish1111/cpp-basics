// a
// a b
// a b c
// a b c d
// a b c d e

#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter the number of rows: ";
    cin >> row;
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    for (int i = 1; i <= row; i++)
    {
        char ch2=ch;
        for (int j = 1; j <= i; j++)
        {
            cout << ch2 << " ";
            ch2++;
        }
        cout << endl;
    }
    return 0;
}