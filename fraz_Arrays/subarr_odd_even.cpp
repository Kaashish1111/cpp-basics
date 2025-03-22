// 5. Write a program that takes an array as input and creates two separate arrays: one containing all the odd elements and the other containing all the even elements.

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 12, 15, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int odd[n], even[n];
    int i = 0, j = 0;
    for (int k = 0; k < n; k++)
    {
        if (arr[k] % 2 == 0)
        {
            even[j++] = arr[k];
        }
        else
        {
            odd[i++] = arr[k];
        }
    }
    cout << "Odd elements: ";
    for (int k = 0; k < i; k++)
    {
        cout << odd[k] << " ";
    }
    cout << endl;
    cout << "Even elements: ";
    for (int k = 0; k < j; k++)
    {
        cout << even[k] << " ";
    }
    cout << endl;
    return 0;
}