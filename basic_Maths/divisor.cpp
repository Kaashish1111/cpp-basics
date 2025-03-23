// divisor of a number
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << "Divisors of " << num << " are: ";
    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << num << endl;
    return 0;
}