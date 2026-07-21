#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,3,5,6,23};
    int sum = 0;
    for(int i=0; i<5; i++){
        sum += arr[i];
    }
    cout<<"Sum of the elements of the given array is "<<sum<<endl;
    return 0;
}