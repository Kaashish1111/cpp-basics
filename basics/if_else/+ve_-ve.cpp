#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if(num>0){
        cout << "Number is postive";
    }
    else if(num==0){
        cout << "you entred zero";
    }
    else{
        cout << "Number is negative";
    }
    return 0;
}