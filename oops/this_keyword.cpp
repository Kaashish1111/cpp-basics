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
};
int main(){
    Crickter c1("Virat", 100);
    Crickter c2("Rohit",89);
    cout<<c1.name<<" "<<c1.runs<<endl<<endl;
    cout<<c2.name<<" "<<c2.runs<<endl<<endl;
    return 0;
}