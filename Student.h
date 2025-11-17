#ifndef STUDENT_H
#define STUDENT_H

#include<iostream>
#include<string>

using namespace std;

class Student {
    private:
        string name;
        int marks;
    public:
        Student(); // default 
        Student(string n, int m); // parameterized

        void inputData();
        void displayData();
};

#endif