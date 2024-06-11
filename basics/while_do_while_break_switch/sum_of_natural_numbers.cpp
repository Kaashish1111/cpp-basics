#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int sum=0;
    int i=1;
    while (i<=num)
    {
        /* code */
        sum += i;
        i++;
    }
    cout << "Sum of numbers from 1 to " << num << " is: " << sum ;
    return 0;
}