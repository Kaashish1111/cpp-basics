// 8. Write a program that takes an array as input and checks if it is sorted in forward order, backward order, or not sorted at all.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    bool forward = true, backward = true;
    for(int i=0; i<n-1; i++)
    {
        if(arr[i] > arr[i+1])
            forward = false;
        if(arr[i] < arr[i+1])
            backward = false;
    }
    if(forward){
        cout<<"The array is sorted in forward order.\n";
    }
    else if(backward){
        cout<<"The array is sorted in backward order.\n";
    }
    else{
        cout<<"The array is not sorted at all.\n";
    }
    return 0;
}