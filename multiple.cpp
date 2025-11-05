#include<iostream>
using namespace std;

class Teacher{
    public:
        void teach(){
            cout<<"I can teach"<<endl;
        }
};
class Researcher{
    public:
        void research(){
            cout<<"I can research"<<endl;
        }
};
class Mentor : public Teacher, public Researcher{
    public:
        void guide(){
            cout<<"I can guide"<<endl;
        }
};

int main(){
    Mentor m;
    m.teach();
    m.research();
    m.guide();
    return 0;
}