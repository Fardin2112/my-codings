#include<iostream>
#include<stdlib.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    //constructor
    node(int data){
        this ->data=data;
        this->next =NULL;
    }
};
void insertATHead(node* &head, int d){
     node*temp=new node(d);
     temp->next=head;
     head=temp;
}
   
void print(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp =temp->next;
    }
    cout<<endl;
}

int main (){
   node* node1=new node(10);
//    cout<<node1->data<<endl;
//    cout<<node1->next<<endl;
   insertATHead(node1,12);
   insertATHead(node1,15);
   print(node1);
     return 0;
}