#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int num=n;
    int rev=0;
    while(n!=0){
        int rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    cout<<"Reversed number: "<<rev<<endl;
    if(num==rev)
        cout<<num<<" is a palindrome number."<<endl;
    else
        cout<<num<<" is not a palindrome number."<<endl;
    return 0;
}