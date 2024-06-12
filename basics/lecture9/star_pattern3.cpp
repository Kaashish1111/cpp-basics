// * * * * * * * *
// * * *     * * *
// * *         * *
// *             *
// *             *
// * *         * *
// * * *     * * *
// * * * * * * * *

#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter the number of rows: ";
    cin >> row;
    int changing_rows = row;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= changing_rows; j++)
        {
            cout << "* ";
        }
        int no_of_spaces = row * 2 - (changing_rows * 2);
        for (int k = 1; k <= no_of_spaces; k++)
        {
            cout << "  ";
        }
        for (int l = 1; l <= changing_rows; l++)
        {
            cout << "* ";
        }
        changing_rows--;
        cout << endl;
    }
    if (row % 2 == 0)
    {
        int changing_rows1 = 1;
        for (int i = 1; i <= row; i++)
        {
            for (int j = 1; j <= changing_rows1; j++)
            {
                cout << "* ";
            }
            int no_of_spaces = row * 2 - (changing_rows1 * 2);
            for (int k = 1; k <= no_of_spaces; k++)
            {
                cout << "  ";
            }
            for (int l = 1; l <= changing_rows1; l++)
            {
                cout << "* ";
            }
            changing_rows1++;
            cout << endl;
        }
    }
    return 0;
}