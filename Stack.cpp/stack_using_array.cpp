#include<iostream>
using namespace std;

class stack{
int *arr;
int front;
int back;
int size;

public:
      stack(){
      size=10;
      arr=new int(size);
      front=0;
      back=0;
      }

 void push(int data){
    if(back==size){
         cout<<"size is full"<<endl;
            return;
    }
    else{
            arr[back]=data;
            back++;
        }
 }     

};
int main(){
    return 0;
}