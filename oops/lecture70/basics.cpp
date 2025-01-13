#include<iostream>
using namespace std;

class student{
    private:
    int roll_no;
    string name;
    int age;
    public:
        void get_data(int r, string n, int a){
            roll_no = r;
            name = n;
            age = a;
        }
        void display_data(){
            cout<<"Roll Number: "<<roll_no<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
        }
        void calculate_grade(){
            //calculate and display grade based on age
            if(age>=18){
                cout<<"Grade: A"<<endl;
            }
            else{
                cout<<"Grade: B"<<endl;
            }
        }
};
int main(){
    student s1;
    s1.get_data(1, "John Doe", 18);
    s1.display_data();
    s1.calculate_grade();
    return 0;
}