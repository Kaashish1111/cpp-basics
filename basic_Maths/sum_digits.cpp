#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter a number: ";
    cin>>n;
    while(n!=0){
        int rem=n%10;
        sum+=rem;
        n=n/10;
    }
    cout<<"Sum of digits: "<<sum;
    return 0;
}