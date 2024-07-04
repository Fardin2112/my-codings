#include<iostream>
#include<stack>
using namespace std;

int main(){

stack<int>list;
list.push(5);
list.push(3);
list.push(2);

while(!list.empty()){
    cout<<list.top()<<",";
    list.pop();
}


    return 0;
    }