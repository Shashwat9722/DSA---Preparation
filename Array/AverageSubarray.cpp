#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums={1,2,3,4,5,6,7,8};
    int sum=0;
    int k=3;
    for(int i=0; i<k; i++){
        sum+=nums[i];
    }
    cout<< static_cast<double>(sum) / k << endl;;
    for(int i=0; i<nums.size()-k; i++){
        sum = sum-nums[i]+nums[i+k];
        cout<< static_cast<double>(sum) / k << endl;;
    }
    return 0;
}