//         1
//       1 2 1
//     1 2 3 2 1
//   1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1

#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter the number of rows: ";
    cin >> row;
    int no_of_gaps = row - 1;
    for (int i = 1; i <= row; i++)
    {
        int num1 = 1;
        for (int k = 1; k <= no_of_gaps; k++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << num1 << " ";
            num1++;
        }
        int num2 = i - 1;
        for (int m = 1; m <= i - 1; m++)
        {
            cout << num2 << " ";
            num2--;
        }
        no_of_gaps--;
        cout << endl;
    }
    return 0;
}