#include<iostream>
#include<vector>

using namespace std;

class Student{
    public:
        string name;
        int marks;

        void inputDetails(){
            cout<<"Enter Name: ";
            getline(cin >> ws, name);
            cout<<"Enter Marks: ";
            cin>>marks;
        }
        void display(){
            cout<<"Name: "<<name<<" | Marks: "<<marks<<endl;
        }
};

int main(){
    vector<Student> std;
    int n;

    cout<<"Enter no of students: ";
    cin>>n;

    for(int i = 0; i < n; i++){
        Student s;
        cout<<"Student "<<i+1<<" details"<<endl;
        s.inputDetails();
        std.push_back(s);
    }

    cout<<"----- Student Details ------"<<endl;
    for(auto m : std){
        m.display();
    }

    return 0;
}