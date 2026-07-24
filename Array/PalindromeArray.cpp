#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(1);
    int low=0;
    int high=nums.size()-1;
    while(low<high){
        if(nums[low]!=nums[high]){
            cout<<"Array is not palindrome"<<endl;
            return 0;
        }else{
            low++;
            high--;
        }
    }
    cout<<"Array is palindrome"<<endl;
    return 0;
}