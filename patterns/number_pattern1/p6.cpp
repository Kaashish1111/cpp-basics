// 10001
// 01010
// 00100
// 01010
// 10001

// Input rows and cols can only be odd for the pattern to be printed correctly.

#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;
    int bw = (cols + 1) / 2;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            if ((i == 1 || i == rows) && (j == 1 || j == cols))
            {
                cout << "1";
            }
            else if (i == 1 || i == rows)
            {
                cout << "0";
            }
            else if (i % 2 == 0)
            {
                if (j % 2 == 0)
                {
                    cout << "1";
                }
                else
                {
                    cout << "0";
                }
            }
            else if (i % 2 != 0)
            {
                if (j == bw)
                {
                    cout << "1";
                }
                else
                {
                    cout << "0";
                }
            }
        }
        cout << endl;
    }
    return 0;
}
