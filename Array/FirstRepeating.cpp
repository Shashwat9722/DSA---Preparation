#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int main(){
    vector<int> nums={2,3,4,5,4,3,2,1};
    unordered_map<int,int> freq;
    for(int x: nums){
        freq[x]++;
    }
    for(int x: nums){
        if(freq[x]>1){
            cout<<x;
            return 0;
        }
    }
    cout<<"There is no repeating element.";
    return 0;
}