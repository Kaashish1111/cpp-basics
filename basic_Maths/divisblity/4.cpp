// A number is divisible by 4 if the number formed by its last two digits is divisible by 4.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int lastTwoDigits = n % 100;
    if(lastTwoDigits % 4 == 0){
        cout<<n<<" is divisible by 4."<<endl;
    }
    else{
        cout<<n<<" is not divisible by 4."<<endl;
    }
    return 0;
}