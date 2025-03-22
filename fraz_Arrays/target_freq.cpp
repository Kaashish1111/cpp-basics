// 7. Write a program that takes an array and a target number as input and counts the number of times the target number appears in the array.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    int target;
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the target number: ";
    cin>>target;
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == target){
            count++;
        }
    }
    cout<<"The target number "<<target<<" appears "<<count<<" times in the array.";
    return 0;
}