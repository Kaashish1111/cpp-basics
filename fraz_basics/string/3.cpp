// Find the difference between the number of consonants and vowels.
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int n, count = 0, count1 = 0;
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);
    n = strlen(str);
    for(int i = 0; i < n; i++){
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')){
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
                count++;
            }
            else{
                count1++;
            }
        }
    }
    cout << "Difference between consonants and vowels: " << count1 - count << endl;
    return 0;
}