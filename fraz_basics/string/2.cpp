// Count letters, numbers, and special characters in a string.
#include<iostream>
using namespace std;
int main(){
    string str;
    int letters = 0, numbers = 0, special = 0;
    cout << "Enter a string: ";
    getline(cin, str);
    for(int i = 0; i < str.length(); i++){
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')){
            letters++;
        }
        else if(str[i] >= '0' && str[i] <= '9'){
            numbers++;
        }
        else{
            special++;
        }
    }
    cout << "Number of letters: " << letters << endl;
    cout << "Number of numbers: " << numbers << endl;
    cout << "Number of special characters: " << special << endl;
    return 0;
}