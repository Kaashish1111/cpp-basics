#include<iostream>
using namespace std;
class Crickter{
    public:
    string name;
    int runs;
    // Constructor
    Crickter(string name, int runs){
        this->name = name;
        this->runs = runs;
    }
    // function
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Runs: "<<runs<<endl;
        cout<<endl;
    }
};
// void print(Crickter c){
//     cout << "Player Name: " << c.name << endl<<"Runs: " << c.runs << endl;
// }
int main(){
    Crickter c1("Virat", 100);
    Crickter c2("Rohit",89);
    // cout<<c1.name<<" "<<c1.runs<<endl<<endl;
    // cout<<c2.name<<" "<<c2.runs<<endl<<endl;
    // print(c1);
    // print(c2);
    c1.display();
    c2.display();
    return 0;
}