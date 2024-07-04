#include<bits/stdc++.h>
using namespace std;

int getfactorial(int n){
     
     //base condition
     if(n==1){
        return 1;
     }
    int Ans=n*getfactorial(n-1);
    return Ans;

}
 int main(){
    int num;
    cout<<"write num val:"<<endl;
    cin>>num;

    cout<<"The value of "<<num<<" is: "<<getfactorial(num)<<endl;

    return 0;
 }