#include<iostream>
using namespace std;
class Student{
    public:
        string name;
        int age;
        float marks;
        void inputData(){
            cout<<"Your Name: ";
            getline(cin, name);
            cout<<"Enter your age: ";
            cin>>age;
            cout<<"Enter your marks: ";
            cin>>marks;
        }
        void displayData(){
            cout<<"Your Name is: "<<name<<endl;
            cout<<"Your Age is: "<<age<<endl;
            cout<<"Your Marks is: "<<marks<<endl;
        }
    
    };

int main(){
    Student s1;
    s1.inputData();
    s1.displayData();
    return 0;
}
