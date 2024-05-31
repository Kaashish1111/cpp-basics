#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    for(int i=1;i<=num;i++){
        cout << "The square of "<< i << " is: "<< i*i<<endl;
    }
    return 0;
}