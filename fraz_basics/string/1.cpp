// Print ASCII value of each character in a string.

#include<iostream>
using namespace std;
int main(){
     string str="HELLO WORLD";
    for (int i = 0; i < str.length(); i++) {
        printf("ASCII value of %c is %d\n", str[i], str[i]);
    }
}