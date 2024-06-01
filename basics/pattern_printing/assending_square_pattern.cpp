#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter the number of rows: ";
    cin >> row;
    for (int i = 1; i <= row; i++)
    {
        int num = 1;
        for (int j = 1; j <= 5; j++)
        {
            cout << num * num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}