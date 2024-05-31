#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number whose factroial you wnat: ";
    cin >> num;
    int product=1;
    for(int i=1;i<=num;i++){
        product *= i;
    }
    cout << "Factroial of the "<< num << " is: " << product;
    return 0;
}