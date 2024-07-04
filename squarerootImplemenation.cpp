#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"write size:";
    cin>>size;
    int integer;
    cout<<"type your num:";
    cin>>integer;
    int start=0;
    int end=size-1;
    int arr[size];
    for(int i=1;i<size;i++){
        cin>>arr[i];
    }
    
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==(mid*mid)){
            return mid+1;
        }
        else if(arr[mid]>(mid*mid)) {
           end=mid-1;
        }
        else if(arr[mid]<(mid*mid)){
            start=mid+1;
        }
           }

    return 0;
}