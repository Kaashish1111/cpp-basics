#include<iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if(ch =='A' || ch=='a' || ch=='E' || ch=='e' || ch=='I' || ch=='i' || ch=='o' ||ch=='O'|| ch=='U' || ch=='u'){
        cout << "The character is a vowel.";
    }
    else{
        cout << "The character is a consonant.";
    }
    return 0;
}