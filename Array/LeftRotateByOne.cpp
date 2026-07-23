#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums;
    nums.push_back(10);
    nums.push_back(20);
    nums.push_back(30);
    nums.push_back(40);
    nums.push_back(50);
    nums.push_back(60);
    int a = nums[0];
    for(int i=0; i<nums.size()-1;i++){
        nums[i]=nums[i+1];
    }
    nums[nums.size()-1]=a;
    for(int num : nums){
        cout<<num<<" ";
    }
    return 0;
}