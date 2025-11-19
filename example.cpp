#include<iostream>

using namespace std;

class Payment{
    public:
        virtual void pay(int amount) = 0;
};

class JazzCash : public Payment{
    public:
        void pay(int amount) override{
            cout<<"Paid "<<amount<<" using JazzCash"<<endl;
        }
};

class EasyPaisa : public Payment{
    public:
        void pay(int amount) override{
            cout<<"Paid "<<amount<<" using EasyPaisa"<<endl;
        }
};

int main(){
    int choice, amount;

    cout<<"Enter Amount: "<<endl;
    cin>>amount;
    cin.ignore();
    
    cout<<"Press 1 for EasyPaisa and Press 2 for JazzCash"<<endl;
    cin>>choice;
    cin.ignore();

    if(choice == 1){
        EasyPaisa e;
        e.pay(amount);
    }
    else if(choice == 2){
        JazzCash j;
        j.pay(amount);
    }
    else {
        cout<<"Invalid Choice";
    }
    return 0;
}