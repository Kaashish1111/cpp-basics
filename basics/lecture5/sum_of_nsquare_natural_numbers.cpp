#include<iostream>
using namespace std;

int main(){
    int term;
    cout << "Enter the number of term: ";
    cin >> term;
    int sum=0,product=1;
    for(int i=1;i<=term;i++){
        product=i*i;
        sum+=product;
    }
    cout << "The sum of the square of " << term << " natural number is "<< sum << endl;
    return 0;
}