#include<bits/stdc++.h>
using namespace std ;

void getnum(int n){
    // base condition
    if( n<=0){
        return ;
    }

    // for decending order print before call
    // cout<<n<<endl;

    getnum(n-1);
    // for ascending order print before call
     cout<<n<<endl;
}

int main(){
    int Num;
    cout<<"write Num Value:"<<endl;
    cin>>Num;

    cout<<"counting->"<<endl;
    getnum(Num);

    return 0;
}