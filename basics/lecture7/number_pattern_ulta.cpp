// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1

#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter the number of rows: ";
    cin >> row;
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int no_of_times = row;
    for (int i = 1; i <= row; i++)
    {
        int num2 = num;
        for (int j = no_of_times; j >= 1; j--)
        {
            cout << num2 << " ";
            num2++;
        }
        no_of_times--;
        cout << endl;
    }
    return 0;
}
