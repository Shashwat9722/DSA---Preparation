#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int main(){
    vector<int> nums={2,3,2,3,4,3,4,5,6};
    unordered_map<int,int> freq;
    for(int x:nums){
        freq[x]++;
    }
    for(int i=0; i<nums.size(); i++){
        if(freq[nums[i]]==1){
            cout<<nums[i];
            return 0;
        }
    }
    cout<<"There is no element which is not repeating";
    return 0;
}