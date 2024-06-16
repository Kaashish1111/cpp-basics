#include <iostream>
using namespace std;

bool prime_or_not(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        return true;
    }
    return false;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (prime_or_not(num))
    {
        cout << num << " is a prime number.";
    }
    else
    {
        cout << num << " is not a prime number.";
    }
    return 0;
}