#include <bits/stdc++.h>
#include<iostream>

using namespace std;


int main(){
    int n;
    cout<<"write n";
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
       
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j];
        }
       
    }
    int sum1=0,sum2=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum1+=arr[i][j];
            }
        if(i+j==n-1&&arr[i][i]){
            sum2+=arr[i][j];
        }
        }
    }
    cout<<sum1<<" "<<sum2<<endl;
     int diff=abs(sum1-sum2);
     cout<<diff<<endl;
    return 0;
}