#include<bits/stdc++.h>
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

  void insertAtHead(node* &head,int data){
    node* temp=new node(data);
    node* curr=head;
    if(head==NULL){
        head=temp;
        return;
    }
    temp->next=curr;
    curr->prev=temp;
    head=temp;
  }

   node* mergesort(node* &head,node* &head2){
    node* dummynode=new node(-1);
    node* p1=head;
    node* p2=head2;
    node* p3=dummynode;

         while(p1->next!=NULL && p2->next!=NULL ){
          
          if(p1->data < p2->data){
            p3->next=p1;
            p1=p1->next;
          }

          else{
            p3->next = p2;
            p2 = p2->next;
          }
          p3=p3->next;
         }

         while(p1->next!=NULL){
          p3->next=p1;
          p1=p1->next;
          p3=p3->next;
         }

          while(p2->next!=NULL){
          p3->next=p2;
          p2=p2->next;
          p3=p3->next;
         }

         return dummynode->next;
  }

  void display(node* &head){
    node* temp=head;
    while(temp!=NULL){
       cout<<temp->data<<" ";
       temp=temp->next;
    }
    cout<<endl;
  }
int main (){

  //making first node
    node* head=new node(6);
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,1);
    cout<<"linklist1 ->";
    display(head);

  // making second node
    node* head2=new node(5);
    insertAtHead(head2,4);
    insertAtHead(head2,3);
    insertAtHead(head2,3);
    cout<<"linklist2 ->";
    display(head2);

  // merginf first and second node
    node* newnode= mergesort(head,head2);
    cout<<"merge first and second node-> ->";
    display(newnode);

    return 0;
}