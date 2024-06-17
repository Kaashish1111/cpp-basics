#include <iostream>
using namespace std;

int cube(int num)
{
    return num * num * num;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int orignal_num = num;
    int cube_num = 0, rem;
    while (num != 0)
    {
        rem = num % 10;
        num /= 10;
        cube_num += cube(rem);
    }
    if (cube_num == orignal_num)
    {
        cout << "Armstrong number";
    }
    else
    {
        cout << "Not Armstrong number";
    }
    return 0;
}