#include<iostream>
#include<stdlib.h>
// i have again learn this
using namespace std;
struct node{
    int data;
   struct node* next;
};
void insertattail(node* head, int d){
       node* n= new node(d);
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
int getlenght(node* head){
    node* n=head;
    int cnt=1;
    while(n!=NULL){
        n=n->next;
        cnt++;
    }
    return cnt;
}
void display(node* head){
    node* temp;
    while(head!=NULL){
      cout<<head->data<<" ";
       head->next;
    }
}
int main(){
 struct node* head;
 head=new node();
 insertattail(head,6);
 display(head);


    return 0;
}