#include<iostream>
using namespace std;

int main(){
    int binary;
    cout << "Enter a binary number: ";
    cin >> binary;
    int mul=1;
    int ans=0;
    while(binary>0){
        int digit = binary % 10;
        binary /= 10;
        ans = ans + digit * mul;
        mul = mul * 2;
    }
    cout << "The decimal equivalent is: " << ans << endl;
    return 0;
}