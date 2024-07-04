#include<iostream>
using namespace std;
int binary_search(int arr[],int n,int key){
int s=0;
int mid;
while(s<=n){
   mid =(s+n)/2;
    if(arr[mid]==key){
        return mid;
    } else if(arr[mid]>key){
        n=mid-1;
    }
    else{
        s=mid+1;
    }
}
return -1;
}
    
int main(){
    int n;
    cout<<"write no n:"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"write value of arr at :"<<i<<endl;
        cin>>arr[i];
    }
    int key;
    cout<<"key is :"<<endl;
    cin>>key;
    cout<<"element "<<binary_search( arr, n, key)<<endl;

    return 0;
}