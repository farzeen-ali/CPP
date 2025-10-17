#include<iostream>
using namespace std;

class Employee{
    public:
        string name;
        float salary;

        void getData(){
            cout<<"Enter Your Name: ";
            cin.ignore();
            getline(cin, name);
            cout<<"Enter Salary: ";
            cin>>salary;
        }
       virtual void calculateBonus(){
            cout<<"Employee Bonus: "<<salary * 0.05<<endl;
        }
};

class Manager : public Employee{
    public:
        void calculateBonus() override{
            cout<<"Manager Bonus: "<<salary * 0.10<<endl;
        }
};

int main(){
    Employee e;
    Manager m;
    int choice;
    cout<<"Enter your choice: ";
    cin>>choice;
    if(choice == 1){
        e.getData();
        e.calculateBonus();
    }
    else if(choice == 2){
        m.getData();
        m.calculateBonus();
    }
    else {
        cout<<"Invalid Choice!";
    }
    return 0;
}
