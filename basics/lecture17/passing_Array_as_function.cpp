// passing array into function

#include <iostream>
using namespace std;

void fun(int arr[], int n)
{
    cout << "Size of function array: " << sizeof(arr);
    cout << endl;
    cout << "Printing the array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr);
    cout << "Size of main array: " << n << endl;
    fun(arr, 5);
    return 0;
}