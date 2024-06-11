#include<iostream>
using namespace std;

int main(){
    int a=5;
    bool c= (a==5);
    int b= (a==5);
    cout <<b << "\t" << c;
    cout << endl;
    int result = (3>4>5!=1);
    cout << "The result is : "<< result << "\n";
    int result2= (5>4<3==2);
    cout << "The result2 is : " << result2 << "\n";
    return 0;
}