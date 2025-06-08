// Convert uppercase to lowercase and vice versa in a string.

#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);

    for(int i=0; i<str.length(); i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i] += 'A'-'a';
        }
        else if(str[i]>='A' && str[i]<='Z'){
            str[i] += 'a'-'A';
        }
    }

    cout<<"Result: "<<str<<endl;
    return 0;
}