#include<iostream>
using namespace std;
int main(){
    int arr[100]={10,20,30,40,50};
    int n=5;
    int pos=1;
    for(int i=pos; i<=n-1; i++){
        arr[i]=arr[i+1];
    }
    n--;
    for(int i=0; i<=n-1; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}