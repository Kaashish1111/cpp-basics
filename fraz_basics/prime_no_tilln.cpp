#include <iostream>
using namespace std;

bool isprime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int num;
    cin >> num;
    int count = 0; // Move declaration outside the loop
    for (int i = 2; i <= num; i++)
    {
        if (isprime(i))
        {
            cout << i << endl;
        }
    }
    return 0;
}