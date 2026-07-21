#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,3,42,3,2};
    int max=arr[0];
    for(int i=0; i<5; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"Maximum Element is "<<max<<endl;
    return 0;
}