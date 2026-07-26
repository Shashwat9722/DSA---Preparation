#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int main(){
    vector<int> nums1={1,1,2,3,2,3};
    vector<int> nums2={1,1,2,2,3,3};
    unordered_map<int,int> freq1;
    if(nums1.size()!=nums2.size()){
        cout<<"Array do not contain same elements. ";
        return 0;
    }
    for(int x: nums1){
        freq1[x]++;
    }
    for(int x: nums2){
        freq1[x]--;
    }
    for(auto it : freq1){
        if(it.second != 0){
            cout << "Arrays do not contain the same elements.";
            return 0;
        }
    }
    cout<<"Array contain the same element. ";
    return 0;
}