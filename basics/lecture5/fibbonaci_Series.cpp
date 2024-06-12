#include<iostream>
using namespace std;

int main(){
    int term;
    cout << "Enter term: ";
    cin >> term;
    int first=0;
    int second=1;
    int sum=0;
    for(int i=0;i<term;i++){
        cout << first << "\t";
        sum=first+second;
        first=second;
        second=sum;
    }
    return 0;
}