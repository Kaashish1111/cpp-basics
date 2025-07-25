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
    // function pass by refernce
    void change(Crickter *c){
        (*c).runs=200;
    }
};
int main(){
    Crickter c1("Virat", 100);
    Crickter c2("Rohit",89);
    Crickter *p1=&c1;
    cout<<(*p1).name<<endl;
    cout<<(*p1).runs<<endl;
    c1.change(&c1);
    cout<<c1.runs<<endl;
    return 0;
}