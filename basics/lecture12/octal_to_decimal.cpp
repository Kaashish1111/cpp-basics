#include<iostream>
using namespace std;

int main(){
    int octal;
    cout << "Enter an octal number: ";
    cin >> octal;
    int mul=1,ans=0;
    while(octal){
        int digit= octal%10;
        octal /= 10;
        ans += digit*mul;
        mul *= 8;
    }
    cout << "The decimal equivalent is: " << ans << endl;
    return 0;
}