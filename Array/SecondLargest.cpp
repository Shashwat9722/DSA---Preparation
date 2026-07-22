#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[6]={10,20,30,40,50,60};
    int lar= INT_MIN;
    int secLar=0;
    for(int i=0; i<=5;i++){
        if(arr[i]>lar){
            secLar=lar;
            lar=arr[i];
        }else if(arr[i]>secLar && arr[i]!=lar){
            secLar=arr[i];
        }
    }
    cout<<"Second largest element in the array is : "<<secLar<<" ."<<endl;
    return 0;
}