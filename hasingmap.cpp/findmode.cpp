#include<bits/stdc++.h>
using namespace std;


void Mode(int arr[],int n){
       
       unordered_map<int ,int>map;
    
       int maxFreq=0;
       int MaxAns=0;

       for(int i=0;i<n;i++){
        map[arr[i]]++;
        maxFreq=max(maxFreq,map[arr[i]]);
       }

       cout<<"How many times Any element present in Array : "<<maxFreq<<endl;

       for(int i=0;i<n;i++){
        // here i am comparing max mode with map elemenets if any element is equal time present in map then that is the ans
        if(maxFreq==map[arr[i]]){
            MaxAns=arr[i];
            break;
        }
       }
       cout<<"The Element which present "<<maxFreq<<" in array is :"<<MaxAns<<endl;
 }

int main (){
    int n;
    cout<<"size of Vector:"<<endl;
    cin>>n;

    int arr[n];

    for (int i = 0; i<n ; i++)
    {
      cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

   
    Mode(arr,n);

    return 0;
}