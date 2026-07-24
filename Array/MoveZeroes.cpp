#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums;
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(3);
    nums.push_back(12);
    for(int num : nums){
        cout<<num<<" ";
    }
    cout<<endl;
    int i=0;
    for(int j=1; j<nums.size(); j++){
        if(nums[i]==0 && nums[j]!=0){
            swap(nums[i],nums[j]);
            i++;
        }else if(nums[i]!=0){
            i++;
        }else if(nums[i]==0&&nums[j]==0){
            i++;
        }
    }
    for(int num : nums){
        cout<<num<<" ";
    }
    return 0;
}