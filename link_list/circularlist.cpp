#include<iostream>
#include<stdlib.h>
using namespace std;
class node{
    public:
    int data;
    node* next;

    //constructor
    node(int d){
        int data=d;
        this->next=NULL;
    }
  
};


void insertAtNode(node* Tail,int element,int d){
    //assuming that list is empty
    if(Tail==NULL){
        node* newnode=new node(d);
         Tail=newnode;
        newnode->next=newnode;
       
    }

    else{
        //assuming that list have tail
        node* temp=Tail;
        while(temp->data!= element){
         temp=temp->next;
        }
        node* newnode=new node(d);
        temp->next=newnode->next;
        newnode->next=Tail;
    }
}
  void display(node* Tail){
    node* temp=Tail;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(Tail!=temp);
  }
int main(){
    node* Tail=NULL;
    insertAtNode(Tail,5,2);
    display(Tail);
    return 0;
}