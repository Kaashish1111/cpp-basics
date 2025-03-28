#include<iostream>
using namespace std;

int hexa_to_decimal(string hex){
    int decimal=0;
    int base=1;
    for(int i=hex.length()-1;i>=0;i--){
        if(hex[i]>='0' && hex[i]<='9'){
            decimal+= (hex[i]-'0')*base;
            base*=16;
        }
        else if(hex[i]>='A' && hex[i]<='F'){
            decimal+= (hex[i]-'A'+10)*base;
            base*=16;
        }
    }
    return decimal;
}
int main(){
    string hex;
    cout<<"Enter a hexadecimal number: ";
    cin>>hex;
    int ans= hexa_to_decimal(hex);
    cout<<"Decimal equivalent: "<<ans<<endl;
    return 0;
}