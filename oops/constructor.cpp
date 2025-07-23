#include<iostream>
using namespace std;
class Student {
    public:
    string name;
    int rollno;
    float cgpa;

    // Default constructor
    Student(){

    }
    // constructor
    Student(string n, int r, float c) {
        name = n;
        rollno = r;
        cgpa = c;
    }
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

    Student s3("Raghav",45,7.9);
    // Student s4("Anuj",23);  This won't work as you need there as per constructor

    Student s5=s1; // Deep copy
    s5.rollno=55;

    Student s6(s2);  //copy constructor
    s6.rollno=66;

    cout<<"Student 1: "<<endl;
    cout<<"Name: "<<s1.name<<endl;
    cout<<"Roll No: "<<s1.rollno<<endl;
    cout<<"CGPA: "<<s1.cgpa<<endl<<endl;

    cout<<"Student 2: "<<endl;
    cout<<"Name: "<<s2.name<<endl;
    cout<<"Roll No: "<<s2.rollno<<endl;
    cout<<"CGPA: "<<s2.cgpa<<endl<<endl;

    cout<<"Student 3: "<<endl;
    cout<<"Name: "<<s3.name<<endl;
    cout<<"Roll No: "<<s3.rollno<<endl;
    cout<<"CGPA: "<<s3.cgpa<<endl<<endl;

    cout<<"Student 5: "<<endl;
    cout<<"Name: "<<s5.name<<endl;
    cout<<"Roll No: "<<s5.rollno<<endl;
    cout<<"CGPA: "<<s5.cgpa<<endl<<endl;

    cout<<"Student 6: "<<endl;
    cout<<"Name: "<<s6.name<<endl;
    cout<<"Roll No: "<<s6.rollno<<endl;
    cout<<"CGPA: "<<s6.cgpa<<endl<<endl;

    return 0;
}