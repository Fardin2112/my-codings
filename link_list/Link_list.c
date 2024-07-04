
#include<stdlib.h>
#include<stdio.h>


struct node{
    int data;
    struct node* next;
};
void linklistTraversal(struct node* ptr){
    while(ptr!=NULL){
        printf("Element %d \n", ptr ->data);
        ptr=ptr->next;
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
   second->next=third;

   third->data=22;
   third->next=NULL;
   
   linklistTraversal(head);

    return 0;
}