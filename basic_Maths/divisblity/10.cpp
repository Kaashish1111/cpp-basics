#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int digit = n%10;
    if(digit==0){
        cout<<n<<" is a divible by 10";
    }
    else{
        cout<<n<<" is not a divisible by 10.";
    }
    return 0;
}