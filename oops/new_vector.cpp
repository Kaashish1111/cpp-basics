#include<iostream>
using namespace std;
class Apna_vector{
    public:
          int size;
          int capacity;
          int *arr;
    Apna_vector(){
        size = 0;
        capacity = 1;
        arr = new int[capacity];
    }
    void add(int ele){
        if(size == capacity){
            int *temp = new int[2*capacity];
            for(int i = 0; i < size; i++){
                temp[i] = arr[i];
            }
            arr=temp;
        }
        arr[size++]=ele;
    }
};
int main(){
    Apna_vector v1;
    v1.add(10);
    v1.add(20);
    v1.add(30);
    for(int i = 0; i < v1.size; i++){
        cout << v1.arr[i] << " ";
    }
    return 0;
}