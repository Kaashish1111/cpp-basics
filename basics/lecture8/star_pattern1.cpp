//     *
//    **
//   ***
//  ****
// *****

#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter number of rows: ";
    cin >> row;
    int no_of_gaps = row - 1;
    int no_of_stars = row - no_of_gaps;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= no_of_gaps; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= no_of_stars; k++)
        {
            cout << "*";
        }
        no_of_gaps--;
        no_of_stars++;
        cout << endl;
    }
    return 0;
}