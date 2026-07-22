#include<iostream>
using namespace std;
int main(){
    int arr[100]={10,20,30,40,50,60,70,80};
    int n=8;
    int key=6;
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==key){
            cout<<"Element found in the array.";
            return 0;
        }else if(key>arr[mid]){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    cout<<"Element not found.";
    return 0;
}