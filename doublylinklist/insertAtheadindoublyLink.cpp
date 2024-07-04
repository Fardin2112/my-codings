#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;

    node (int value){
        this-> data=value;
        this->next=NULL;
        this->prev=NULL;

    }
};

void insertAtHead(node* &head,int val){
    node* temp=new node(val);
    node* curr=head;
     if(head==NULL){
        head=temp;
        return;
     }
     temp->next=curr;
     curr->prev=temp;
     head=temp;

}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    node* head=new node(10);
    insertAtHead(head,3);
    insertAtHead(head,4);
     display(head);
    return 0;
}