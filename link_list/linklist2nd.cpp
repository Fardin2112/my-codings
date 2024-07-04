#include<iostream>
using namespace std;


class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int val){
        this->data=val;
        this->next=NULL;
        this->prev=NULL;
    }
};

void insertAtHead(node* &head,int d){
    node* new_node=new node(d);
    //node* temp=head;
    if(head==NULL){
        head=new_node;
        return;
    }
    new_node->next=head;
    head=new_node;
}

void insertAtTail(node* head,int d){
    node* new_node=new node(d);
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new_node;
}

  void insertAtposition(node* head,int position,int d){
    node* new_node=new node(d);
    node* temp=head;
    int cnt=1;
    while(cnt>position){
        temp=temp->next;
        cnt++;
    }
    new_node->next=temp->next;
    temp->next=new_node;
   
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
    node* head=NULL;
    // head=new node(10);
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,1);
    display(head);
    insertAtTail(head,4);
    display(head);
    insertAtposition(head,2,7);
    display(head);
    return 0;
}