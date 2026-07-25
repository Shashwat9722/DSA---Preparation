#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums={2,3,4,5,6,7};
    int k=3;
    int sum = 0;
    for(int i=0; i<k; i++){
        sum+=nums[i];
    }
    cout<<sum<<endl;
    for(int i=0; i<nums.size()-k; i++){
        sum = sum - nums[i]+nums[i+k];
        cout<<sum<<endl;
    }
    return 0;
}