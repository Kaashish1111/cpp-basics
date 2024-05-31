#include<iostream>
using namespace std;

int main(){
    int term;
    cout << "Enter the vlaue till which you want to print the AP: ";
    cin >> term;
    int first_num=1;
    int common_diif=3;
    for(int i=1;i<=term;i++){
        cout << first_num << endl;
        first_num += common_diif;
    }
    return 0;
}