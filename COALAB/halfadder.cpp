#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,borrow;
    cout<<"write the value of n and m";
    cin>>n>>m;
    int sum=0;
    
    if(n==0&&m==1||m==0 ){
        sum=n+m;
        cout<<sum;
    }
      else if(n==0||n==1&&m==0 ){
        sum=n+m;
        cout<<sum;
    }else if(n==1&&m==1){
        sum=0;
        borrow=1;
        sum+=borrow*10;
        cout<<sum;
    }

    return 0;
}