#include<iostream>
#include<stdlib.h>
using namespace std;

struct node {
    int data;
    node* next;
};
void insertAtTail(node*&head,int val){
    node*n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp!=NULL){
       temp=temp->next; 
    }
    temp->next=n;
}
void display(node* temp){
        //node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
int main(){
    node* match=NULL;
    inserAtTail(head,3);
    inserAtTail(match,35);
    display(match);
    return 0;
}