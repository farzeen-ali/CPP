#include<iostream>

using namespace std;
// Constructor ==> special method 
class Student{
    public:
        string name;
        int age;
        float marks;
    
        // Default Constructor
        Student(){
            cout<<"Default Constructor: "<<endl;
            name = "Guest";
            age = 0;
            marks = 0;
        }
        // Parametrized Constructor
        Student(string n, int a, float m){
            cout<<"Parameterized Constructor"<<endl;
            name = n;
            age = a;
            marks = m;
        }
        // Copy Constructor
        Student(const Student &obj){
            cout<<"Copy Constructor: "<<endl;
            name = obj.name;
            age = obj.age;
            marks = obj.marks;
        }

        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Marks: "<<marks<<endl;
        }

};


int main(){
    Student s;
    s.display();

    string name;
    int age;
    float marks;

    cout<<"Enter Name: "<<endl;
    getline(cin, name);

    cout<<"Enter Age: "<<endl;
    cin>>age;

    cout<<"Enter Marks: "<<endl;
    cin>>marks;

    Student s2(name, age, marks);
    s2.display();

    Student s3 = s2;
    s3.display();


    return 0;
}