#include<iostream>
using namespace std;
 bool div_2(int n){
    if(n%2==0){
        return true;
    }
    return false;
 }
 bool div_3(int n){
    int sum=0;
    while(n!=0){
        int rem=n%10;
        sum+=rem;
        n=n/10;
    }
    if(sum%3==0){
        return true;
    }
    return false;
 }
 int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(div_2(n) && div_3(n)){
        cout<<n<<" is divisible by 6."<<endl;
    }
    else{
        cout<<n<<" is not divisible by 6."<<endl;
    }
    return 0;
 }