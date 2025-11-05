#include<iostream>

using namespace std;

class Employee{
    public:
        string name;
        float salary;

        void getData(){
            cout<<"Enter Employee Name: "<<endl;
            getline(cin, name);
            cout<<"Enter Salary: "<<endl;
            cin>>salary;
        }
       virtual void calculateBonus(){
            cout<<"Bonus: "<< salary * 0.05<<endl;
        }
};

class Manager : public Employee{
    public:
          void calculateBonus() override{
            cout<<"Bonus: "<< salary * 0.10<<endl;
        }
};

int main(){
      Employee e;
      Manager m;

      m.getData();
      m.calculateBonus();
    return 0;
}