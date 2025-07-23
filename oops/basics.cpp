#include<iostream>
using namespace std;
class Student {
    public:
    string name;
    int rollno;
    float cgpa;
};
int main(){
    Student s1;
    s1.name="Kashish";
    s1.rollno=10;
    s1.cgpa=8.00;

    Student s2;
    s2.name="Ashish";
    s2.rollno=11;
    s2.cgpa=8.01;
}