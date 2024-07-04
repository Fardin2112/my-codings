#include<iostream>
using namespace std;

void print(int n,string str[]){
      //base case
      if(n==0){
        return ;
      }
      print(n/10,str);
      int number=n%10;
      cout<<str[number]<<" ";
}


int main(){
    int num;
    cout<<"write digit"<<endl;
    cin>>num;
    string str[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    cout<<"Answer is : ";
    print(num,str);
    return 0;
}