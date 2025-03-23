#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int lastThreeDigits = n % 1000;
    if(lastThreeDigits % 8 == 0){
        cout<<n<<" is divisible by 8."<<endl;
    }
    else{
        cout<<n<<" is not divisible by 8."<<endl;
    }
    return 0;
}