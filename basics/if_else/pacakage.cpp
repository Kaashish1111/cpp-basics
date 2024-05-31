#include<iostream>
using namespace std;

int main(){
    cout<<"Enter your expected package in lpa: ";
    int package;
    cin>>package;
    if(package>15){
        cout<<"Accept the deal";
    }
    else{
        cout<<"Decline the deal";
    }
    return 0;
}