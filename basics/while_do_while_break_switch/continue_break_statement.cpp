#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i == 4)
        {
            continue;
        }
        cout << i << endl;
        if (i == 9)
        {
            break;
        }
    }
    return 0;
}