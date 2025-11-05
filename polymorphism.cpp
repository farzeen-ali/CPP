// Method Overloading
#include<iostream>

using namespace std;

class Calculator{
    public:
        int add(int a, int b){
            return a+b;
        }
        int add(int a, int b, int c){
            return a+b+c;
        }
        float add(float a, float b){
            return a+b;
        }
};

int main(){
    Calculator c;
    int choice;

    cout<<"Enter your choice: "<<endl;
    cin>>choice;

    if(choice == 1){
        int x,y;
        cout<<"Enter two values: "<<endl;
        cin>>x>>y;
        cout<<"Result: "<<c.add(x,y);
    }
    else if(choice == 2){
        int x,y,z;
        cout<<"Enter three values: "<<endl;
        cin>>x>>y>>z;
        cout<<"Result: "<<c.add(x,y,z);
    }
    else if(choice == 3){
        float x,y;
        cout<<"Enter two values: "<<endl;
        cin>>x>>y;
        cout<<"Result: "<<c.add(x,y);
    }
    else {
        cout<<"Invalid Choice"<<endl;
    }

    return 0;
}