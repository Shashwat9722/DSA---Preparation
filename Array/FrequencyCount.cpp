#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    vector<int> nums = {2,4,5,3,2,5,3,2,1};
    unordered_map<int,int> freq;
    for(int x:nums){
        freq[x]++;
    }
    for(auto it:freq){
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}