#include<iostream>
using namespace std;

int fact(int n){
    int factorial = 1;
    for(int i=1;i<=n;i++){
        factorial *= i;
    }
    return factorial;
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Factorial of " << num << " is " << fact(num);
    return 0;
}