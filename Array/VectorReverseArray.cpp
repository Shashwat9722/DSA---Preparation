#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>nums;
    nums.push_back(10);
    nums.push_back(20);
    nums.push_back(30);
    nums.push_back(40);
    nums.push_back(50);
    for(int i=0; i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    int low=0;
    int high=nums.size()-1;
    while(low<high){
        swap(nums[low],nums[high]);
        low++;
        high--;
    }
    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}