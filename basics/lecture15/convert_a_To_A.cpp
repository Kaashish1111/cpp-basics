#include<iostream>
using namespace std;

char convert(char ch){
    char ans = ch - 'a' + 'A';
    return ans;
}

int main(){
    char name ;
    cout << "Enter a character: ";
    cin >> name;
    char upperCase = convert(name);
    cout << "Upper case of " << name << " is " << upperCase << endl;
    return 0;
}