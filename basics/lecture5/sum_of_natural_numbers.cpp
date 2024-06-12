#include<iostream>
using namespace std;

int main(){
    int term;
    cout <<  "Enter a term till which you want to add numbers: ";
    cin >> term;
    int sum=0;
    for(int i=1;i<=term;i++){
        sum=sum+i;
    }
    cout << "The sum of natural numbers till " <<term << " is " <<sum;
}