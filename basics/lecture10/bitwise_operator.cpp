#include<iostream>
using namespace std;

int main(){
    int ans=2 & 3;
    cout << "The answer of bitwise and is: " <<ans << endl;
    int ans1= 2 | 3;
    cout << "The answer of bitwise or is: " <<ans1 << endl;
    int ans2= 2^3;
    cout << "The answer of bitwise xor is: " <<ans2 << endl;
    int ans3= 6 << 1;
    cout << "The answer of left shift is: " <<ans3 << endl;
    int ans4= 6 >> 1;
    cout << "The answer of right shift is: " <<ans4 << endl;
    int ans5= ~5;
    cout << "The answer of bitwise not is: " <<ans5 << endl;
    return 0;
}