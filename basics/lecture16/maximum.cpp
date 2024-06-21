#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int a[5];
    int max = INT_MIN;
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    cout << "Maximum value is: " << max << endl;
    return 0;
}