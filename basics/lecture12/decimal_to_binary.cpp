#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int rem,mul=1,ans=0;
    while(num>0){
        rem = num%2;
        num /= 2;
        ans += rem*mul;
        mul *= 10;
    }
    cout << "Binary representation: " << ans << endl;
    return 0;
}