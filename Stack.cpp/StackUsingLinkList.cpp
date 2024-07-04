#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;

        node(int data)
        {
        this -> data=data;
        this ->next = NULL;
        }

};
class Stack{
    public:
    node* Head;
    int end;
       
       Stack(){
        Head=NULL;
        end=0;
       }

    void push(int data)
    {
     node*  newnode= new node(data);
     newnode->next=Head;
     Head = newnode;
     end++;
    } 

    int print(){
        while(Head!=NULL){
            cout<<Head->data<<" ";
            Head=Head->next;
        }
    }  
};


int main (){
   Stack s;
   s.push(4);
   s.push(5);
   s.print();


    return 0;
}