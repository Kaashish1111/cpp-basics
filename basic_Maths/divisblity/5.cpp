#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int digit = n%10;
    if((digit==0)||(digit==5)){
        cout<<n<<" is a divible by 5";
    }
    else{
        cout<<n<<" is not a divisible by 5.";
    }
    return 0;

}