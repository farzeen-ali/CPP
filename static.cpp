#include<iostream>

using namespace std;
// Static Variable
void counter(){
    // int count = 0;
    static int count = 0;
    count++;
    cout<<"Function Called "<<count<<" times"<<endl;
}

// Static Memeber Function

class Company{
    public:
        static int employeeCount;

        static void showCount(){
            cout<<"Total Count: "<<employeeCount<<endl;
        }
};

int Company::employeeCount = 10;

int main(){
    counter();
    counter();
    counter();

    Company::showCount();

    Company::employeeCount += 5;

    Company::showCount();
    return 0;
}