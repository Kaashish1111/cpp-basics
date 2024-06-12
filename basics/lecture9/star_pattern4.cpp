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
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        int no_of_stars = 2 * i;
        int no_of_gaps = (row * 2) - no_of_stars;
        for (int k = 1; k <= no_of_gaps; k++)
        {
            cout << "  ";
        }
        for (int m = 1; m <= i; m++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = row - 1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        int no_of_stars = 2 * i;
        int no_of_gaps = (row * 2) - no_of_stars;
        for (int k = 1; k <= no_of_gaps; k++)
        {
            cout << "  ";
        }
        for (int m = 1; m <= i; m++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}