#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter the number of rows: ";
    cin >> row;
    int column;
    cout << "Enter the number of columns: ";
    cin >> column;
    for (int i = 1; i <= row; i++)
    {
        int num = column;
        for (int j = 1; j <= column; j++)
        {
            cout << num << " ";
            num--;
        }
        cout << endl;
    }
    return 0;
}