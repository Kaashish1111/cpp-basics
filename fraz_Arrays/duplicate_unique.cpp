// 9. Write a program that takes an array whose value lies from 1 to 100 as input and counts the number of unique and duplicate elements.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Number of unique elements: "<<" "<<endl;
    cout<<"Number of duplicate elements: "<<" "<<endl;
    return 0;
}