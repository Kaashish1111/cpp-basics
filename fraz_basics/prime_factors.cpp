#include<iostream>
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

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    for(int i = 2; i <num;i++){
        if(num%i == 0 && isprime(i)){
            cout << i << " ";
        }
    }
    return 0;
}