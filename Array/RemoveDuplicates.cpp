#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums;
    nums.push_back(10);
    nums.push_back(20);
    nums.push_back(30);
    nums.push_back(30);
    nums.push_back(40);
    nums.push_back(40);
    nums.push_back(50);
    for(int num:nums){
        cout<<num<<" ";
    }
    cout<<endl;
    int i=0;
    for(int j=1;j<nums.size(); j++){
        if(nums[i]!=nums[j]){
            i++;
            nums[i]=nums[j];
        }
    }
    for(int j=0; j<=i; j++){
        cout<<nums[j]<<" ";
    }
    cout<<endl;
    return 0;
}
