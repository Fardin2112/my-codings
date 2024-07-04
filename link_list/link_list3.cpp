#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

struct node{
    int data;
    struct node* next;
};
void display(node *head){
    while(head!=NULL){
        cout<<head->data<<endl;
         head=head->next;
    }

}
int main (){
   struct node * head;
   struct node * second;
   struct node * third;
   //allocate memeory for nodes in the linkedlist in heap
   head=(struct node *)malloc(sizeof(struct node));
   second=(struct node*)malloc(sizeof(struct node));
   third=(struct node*)malloc(sizeof(struct node));

   //link first and second nodes
   head ->  data=7;
   head -> next=second;

   //link seconf and third nodes
   second->data=12;
   second->next=NULL;
   
  display(head);
    return 0;
}