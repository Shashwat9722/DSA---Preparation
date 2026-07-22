#include<iostream>
using namespace std;
int main(){
    int arr[100]={12,23,22,12,25};
    int n=5;
    int pos = 3;
    int key = 21;
    for(int i=n-1; i>=pos; i-- ){
        arr[i+1]=arr[i];
    }
    arr[pos]=key;
    n++;
    for(int i=0; i<=n-1; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}