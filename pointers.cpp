#include<iostream>

using namespace std;

//  call by value vs call by reference

// call by value
// void changeValue(int x){
//     x = x * 10;
//     cout<<"Changed Value: "<<x<<endl;
// }

void callByreference(int *x){
    *x = *x * 10;
    cout<<"Message: "<<x<<endl;
    cout<<"Message: "<<*x<<endl;
}
int main(){
    int a = 10;
    // changeValue(a);
    callByreference(&a);

    cout<<"Changed a Value: "<<a<<endl;
    return 0;
}