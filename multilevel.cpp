#include<iostream>
using namespace std;

class Animal{
    public:
        void eat(){
            cout<<"I can eat";
        }
};

class Cat : public Animal {
    public:
        void say(){
            cout<<"I can say";
        }
};
class Tiger : public Cat {
    public:
        void run(){
            cout<<"I can run";
        }
};

int main(){
    Cat c;
    c.eat();
    c.say();
    return 0;
}