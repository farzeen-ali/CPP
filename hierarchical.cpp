#include<iostream>
using namespace std;

class Vehicle{
    public:
        void start(){
            cout<<"Vehicle Start..."<<endl;
        }
};

class Car : public Vehicle{
    public:
        void drive(){
            cout<<"I can drive"<<endl;
        }
};
class Bike : public Vehicle{
    public:
        void ride(){
            cout<<"I can ride"<<endl;
        }
};

int main(){
    Car c;
    Bike b;
    c.start();
    c.drive();
    b.start();
    b.ride();
    return 0;
}