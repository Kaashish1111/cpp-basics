#include <iostream>
using namespace std;

int fact(int num)
{
    int factorial = 1;
    for (int i = 1; i <= num; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int factorial = fact(n);
    int rem,count =0;
    cout << "Factorail of "<<n << " is " <<factorial<< endl;
    while(factorial !=0){
        rem = factorial % 10;
        factorial /= 10;
        if(rem == 0){
            count++;
        }
        if (rem !=0){
            break;
        }
    }
    cout << "Number of trailing zeros in " << n << "! is " << count << endl;
    return 0;
}