#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,3,42,3,2};
    int min=arr[0];
    for(int i=0; i<5; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"Minimum Element is "<<min<<endl;
    return 0;
}