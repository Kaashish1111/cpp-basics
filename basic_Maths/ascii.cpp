#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    char ch;
    if(num>=65 && num<=91){
        ch=(char)num;
        cout<<"The ASCII value of "<<ch<<" is "<<(int)num<<endl;
    }
    return 0;

}