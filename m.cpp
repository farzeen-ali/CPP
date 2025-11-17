#include<iostream>
#include<vector>
#include "Student.h"

using namespace std;

int main(){
    vector<Student> students;
    int n;

    cout<<"Enter no of students: "<<endl;
    cin>>n;

    for(int i = 0; i < n; i++){
        Student std;
        cout<<"Student "<<i+1<<" Details: "<<endl;
        std.inputData();
        students.push_back(std);
    }

    cout<<"----- Student Details ---------"<<endl;

    for(auto s: students){
        s.displayData();
    }

    return 0;
}
