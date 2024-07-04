#include<iostream>
#include<map>
using namespace std;

class node{
    public:
    int data;
    node* next;

     node(int value){
        this->data=value;
        this->next=NULL;
     }
};

bool detectLoop(node*head){
    if(head==NULL){
        return false;
    }
    map<node*,bool>visited;
    node* temp=head;
    while(temp!=NULL){
        //cycle is present
        if(visited[temp]==true){
            return true;
        }
    visited[temp]=true;
    temp=temp->next;
    }
    return false;
}

void insertATHead(node* &head, int d){
     node*temp=new node(d);
     temp->next=head;
     head=temp;
}


void print(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp =temp->next;
    }
    cout<<endl;
}

int main(){
  node* head=new node(3);
   insertATHead(head,6);
   insertATHead(head,7);
    return 0;
}