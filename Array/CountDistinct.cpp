#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
int main(){
    vector<int> nums={1,2,1,2,4,32,2,3,3};
    unordered_set<int> s;
    for(int x:nums){
        s.insert(x);
    }
    cout<<s.size();
    return 0;
}