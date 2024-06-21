#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max_1 = -1;
    int second_max = -1;
    for (int i = 0; i < n; i++)
    {
        if (max_1 < arr[i])
        {
            max_1 = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (max_1 != arr[i])
        {
            second_max = max(second_max, arr[i]);
        }
    }
    cout << "Second largest element is: " << second_max << endl;
    return 0;
}