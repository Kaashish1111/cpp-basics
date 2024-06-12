// * * * * *
// * * * *
// * * *
// * *
// *

#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter no of rows: ";
    cin >> row;
    int no_of_stars= row;
    for (int i = 1; i <= row; i++)
    {
        for (int j = no_of_stars; j >= 1; j--)
        {
            cout << "* ";
        }
        no_of_stars--;
        cout << endl;
    }
    return 0;
}