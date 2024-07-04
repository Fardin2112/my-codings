#include<bits/stdc++.h>
using namespace std;

int fib(int n){
if(n==1||n==0){
    return n;
}else
   return (fib(n-1))+(fib(n-2)); 
}


int main (){
    int num,i=0;
    cout<<"write the val of num:"<<endl;
    cin>>num;
    cout<<"fib series as follow"<<endl;
   while(i<num){
   cout<<""<<fib(i)<<" ";
   i++;
   }


    return 0;
}