#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int rem,mul=1,ans=0;
    while(num>0){
        rem = num%8;
        num /= 8;
        ans += rem*mul;
        mul *= 10;
    }
    cout << "Octal representation is: " << ans << endl;
    return 0;
}