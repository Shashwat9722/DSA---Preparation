#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> nums={1,2,3,4,5,6,7};
    int sum=0;
    int minsum;
    int k=3;
    for(int i=0; i<k; i++){
        sum+=nums[i];
    }
    minsum=sum;
    for(int i=0; i<nums.size()-k; i++){
        sum=sum-nums[i]+nums[i+k];
        minsum=min(minsum,sum);
    }
    cout<<"Minimum sum of subarray : "<<minsum<<endl;
    return 0;
}