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
    nums.push_back(70);
    nums.push_back(80);
    nums.push_back(90);
    for( int num : nums){
        cout<<num<<" ";
    }
    cout<<endl;
    int left=0;
    int right=nums.size()-1;
    while(left<right){
        swap(nums[left],nums[right]);
        left++;
        right--;
    }
    for(int num : nums){
        cout<<num<<" ";
    }
    return 0;
}