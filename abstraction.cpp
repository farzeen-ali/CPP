#include<iostream>

using namespace std;

// Abstraction => un necessary details hide
// pure virtual functions

class Shape {
    public:
        virtual void area() = 0; // abstract
};

class Circle : public Shape{
    public:
        int radius;

        Circle(int r){
            radius = r;
        }

        void area() override{
            cout<<"Area of Circle is: "<<3.14*radius*radius<<endl;
        }

};

int main(){
    Circle c(5);
    c.area();
    return 0;
}