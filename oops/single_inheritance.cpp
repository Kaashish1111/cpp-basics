#include<iostream>>
using namespace std;

class Scotty{   // parent class
    public:
       int topspeed;
       float mileage;
    private:
       int bootspace;
};
class Bike:public Scotty{   //child class
    public:
       int gears;
};
int main(){
    Bike mybike;
    mybike.topspeed=120;
    mybike.mileage=30.0;
    mybike.gears=6;
    cout<<"Topspeed of mybike is "<<mybike.topspeed<<endl;
    cout<<"Mileage of mybike is "<<mybike.mileage<<endl;
    cout<<"Gears of mybike is "<<mybike.gears<<endl;
    return 0;
}