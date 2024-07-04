#include<iostream>
using namespace std;
int main (){
    int num=0,sum=0;
    cout<<"write modulo num"<<endl;
    cin>>num;
    for(int i=0;i<=num;i++){
        for(int j=0;j<=num;j++){
            sum= (i*j)%num;
           cout<<sum<<"\t";
        }
        cout<<endl;
    }
    return 0;
}