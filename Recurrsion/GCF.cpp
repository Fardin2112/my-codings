#include<bits/stdc++.h>
using namespace std;

int gcf(int n1,int n2){ 

    if(n2==0){
        return n1;
    }
   gcf(n2,n1%n2);
}

int main (){
    int num1,num2;
    cout<<"write num val of 1 & 2 : ";
    cin>>num1>>num2;

    cout<<"gcf of "<<num1<<" and  "<<num2<<" is :"<<gcf(num1,num2)<<endl;

    return 0;
}
