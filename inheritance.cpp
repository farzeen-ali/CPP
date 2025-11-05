// Inheritance -> Parent Class Child Class
// Types: Single, Multiple, Multilevel, Hierchical, Hybrid

#include<iostream>
using namespace std;

class Person{
    public:
        string name;
        int age;

        void getPersonInfo(){
            cout<<"Enter name: ";
            getline(cin, name);
            cout<<"Enter your age: ";
            cin>>age;
        }
};

class Student : public Person{
    public:
        int rollNo;
        void getStudentData(){
            cout<<"Enter Student Roll No: ";
            cin>>rollNo;
        }
        void display(){
            cout<<"Name: "<< name << " Age: "<< age << " Roll No: "<<rollNo;
        }
};

int main(){
    Student s;
    cout<<"Student Details: ";
    // cin.ignore();
    s.getPersonInfo();
    s.getStudentData();
    s.display();
    return 0;
}