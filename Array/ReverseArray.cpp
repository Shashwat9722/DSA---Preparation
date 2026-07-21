#include<iostream>
using namespace std; 
int main(){
    int arr[5]={2,32,33,2,1};
    cout<<"Normal Array : "<<endl;
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Reversed Array : "<<endl;
    for(int i=4; i>=0; i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}