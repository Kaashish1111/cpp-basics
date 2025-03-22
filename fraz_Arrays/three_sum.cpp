// 11. Given an array of integers, we need to check if there exist three distinct elements in the array such that their sum equals a given target value. If such a triplet exists, the function should print true; otherwise, it should print false.

#include <iostream>
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
    int target;
    cout<<"Enter the target value: ";
    cin>>target;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==target){
                    cout<<"True";
                    return 0;
                }
            }
        }
    }
    cout<<"False";
    return 0;
}