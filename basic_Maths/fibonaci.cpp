#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int first = 0;
    int second = 1;
    int next;
    cout<<"Fibonacci series up to "<<n<<"th term:\n";
    cout<<first<<"\n"<<second<<"\n";
    for(int i=1; i<n; i++){
        next = first + second;
        cout<<next<<"\n";
        first = second;
        second = next;
    }
    return 0;
}