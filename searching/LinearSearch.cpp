#include<iostream>
using namespace std;
int lenear_search(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
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
    cout<<"element "<<lenear_search( arr, n, key)<<endl;

    return 0;
}