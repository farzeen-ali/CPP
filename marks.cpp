#include<iostream>
#include<vector>

using namespace std;
// no of students
// marks vector
// marks display
// average 
int main(){
    vector<int> marks;
    int n, value;

    cout<<"Enter no of students: ";
    cin>>n;

    for(int i = 0; i < n; i++){
        cout<<"Enter marks of student "<<i+1<<endl;
        cin>>value;
        marks.push_back(value);
    }
    cout<<"Students Marks: "<<endl;
    for(int n: marks){
        cout<<n<<" ";
    }
    float sum = 0;
    for(int m : marks){
        sum += m;
    }
    // cout<<(sum / marks.size());
    float result = sum/marks.size();
    cout<<"Result: "<<result;

    return 0;
}