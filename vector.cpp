#include<iostream>
#include<vector>

using namespace std;

int main(){
    // arrays
    // fix size
    // int marks[5] = {1,2,3,4,5};
    // Vectors => Dynamic Arrays

    vector<int> nums; // vector declare

    nums.push_back(2); // 0
    nums.push_back(3); // 1
    nums.push_back(4); // 2

    cout<<"Vector Elements: "<<endl;

    // cout<<nums[1];
    for(int i = 0; i < nums.size(); i++){
        cout<<nums[i]<<endl;
    }

    nums.pop_back();
    
    // for(int i = 0; i < nums.size(); i++){
    //     cout<<nums[i]<<endl;
    // }

    // ForEach
    for(int n : nums){
        cout<<n<<endl;
    }

    return 0;
}