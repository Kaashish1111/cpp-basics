#include <iostream>
using namespace std;

int sum_of_natural_numbers(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "The sum of " << num << "natural numbers is : "<< sum_of_natural_numbers(num) << endl;
    return 0;
}