#include<iostream>
#include<stdlib.h>
using namespace std;

   class node{
    public:
    int data;
    node* next;
    //constructor;
    node(int val){
        data=val;
        next=NULL;
    }
    //destructor
    ~node(){
        int value=this->data;
        //memory free
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for node with data"<<value<<endl;
    }
    
   }; 
   void insertAtTail (node*&head,int val){
        node* n =new node(val);

        if(head==NULL){
            head=n;
            return;
        }

        node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=n;
    }
    void insertAtPosition(node* head,int position,int d){
        //for inserting at position first or start
        if(position==1){
            node* n=new node(d);
            n->next=head;
            head=n;
            return;
        }
        node* temp=head;
        int count=1;
        while(count>position-1){
            temp=temp->next;
            count++;
        }
        //creating a node for d
        node * nodeToinsert=new node(d);
        nodeToinsert -> next =temp -> next;
        temp->next = nodeToinsert;
    }
    void deletenode(int position,node* head){
        //deleting first or start node
        
        if(position==1){
            node* temp=head;
            head=head->next;
            temp->next=NULL;// i did so it can't point next node
            delete temp;
        }
        else{
            //deleting node from middle or anywere
            node*curr=head;
            node*prev=NULL;

            int cnt=0;
            while(cnt<position){
                prev=curr;
                curr=curr->next;
                cnt++;
            }
            prev->next=curr->next;
            curr->next=NULL;// i did so it can't point next node
            delete curr;

        }
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
    node* head=NULL;
    insertAtTail (head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);
    insertAtPosition(head,2,4);
    insertAtPosition(head,1,5);
    display(head);
   deletenode(3,head);
   display(head);
    return 0;
   }