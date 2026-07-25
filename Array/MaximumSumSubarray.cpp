#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums={2,3,4,5,9,6,7};
    int k=3;
    int sum=0;
    int Maxsum=0;
    int n=nums.size();
    for(int i=0; i<k; i++){
        sum+=nums[i];
    }
    Maxsum=sum;
    for(int i=0; i<n-k; i++){
        sum=sum-nums[i]+nums[i+k];
        if(sum>Maxsum){
            Maxsum=sum;
        }
    }
    cout<<"Maximum Sum Of a Subarray : "<<Maxsum<<endl;
    return 0;
}