#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3};
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int arr2[5] = {0};
    for (int i = 0; i < 5; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;
    int arr3[5] = {1};
    for (int i = 0; i < 5; i++)
    {
        cout << arr3[i] << " ";
    }
    return 0;
}