#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter Size of array : ";
    cin>>a;
    int arr[a];
    cout<<"Enter elements of array : "<<endl;
    for(int i=0; i<a; i++){
        cin>>arr[i];
    }
    int b;
    cout<<"Enter the number to search : ";
    cin>>b;
    int c = -1 ;
    for(int i=0; i<a; i++){
        if(arr[i]==b){
            c=i;
            break;
        }
    }
    if(c>=0){
        cout<<"Element found at index "<<c<<endl;
    }else{
        cout<<"Element not found in the array "<<endl;
    }
}