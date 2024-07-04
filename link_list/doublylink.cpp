#include<iostream>
#include<stdlib.h>
using namespace std;

class node{
    public:
    int data;
    node* prev;
    node* next;

    //constructor
    node(int d){
        int data = d;
        this->prev=NULL;
        this->next=NULL;
    }
};
 void display(node* head){
        node*temp=head;
        while(temp!=NULL){
         cout<<temp->data<<" ";
         temp=temp->next;
        }
        cout<<endl;
    }
    void insertAtHead(node* &head,int val){
       node * temp=new node(val);
       temp->next=head;
       head->prev=temp;
       head=temp;

    }

    
int main(){
    node* n=new node(6);
    node* head=n;
    insertAtHead(head,5);
    display(head);
    return 0;
}