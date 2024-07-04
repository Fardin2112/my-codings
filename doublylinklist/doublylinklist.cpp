#include<iostream>
#include<map>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node*prev;
    
    node(int val){
        this-> data=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
void insertAtHead(node* &head,int val){
     node* n=new node(val);
    if(head==NULL){
       head=n;
       return;
    }
    n->next=head;
    head->prev=n;
     head=n;
}
void insertAtTail(node* &head,int val){
     node* n=new node(val);
    if(head==NULL){
      head=n;
       return ;
        
    }
   
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->next=NULL;
    n->prev=temp;
}
void deletion(node* head,int position){
   
    if(position==0){
        node* todelete=head;
        head=head->next;
        head->prev=NULL;
        delete todelete;
    }
    node* temp=head;
    int cnt=1;
    while(temp!=NULL && cnt!=position){
        temp=temp->next;
        cnt++;
    }
    temp->prev->next=temp->next;
    if(temp->next!=NULL){
    temp->next->prev=temp->prev;    
    }
    
    delete temp; 
}
void getlength(node* &head){
    node* temp=head;
    int lenght=0;
    while(temp!=NULL){
        temp=temp->next;
        lenght++;
    }
    cout<<lenght;
}

void printAtAnyPosition(node* &head,int position,int d){
   //for inserting at position first or start
        if(position==1){
            node* n=new node(d);
            node* temp=head;
            n->next=temp;
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

node* merge(node* &head1,node* &head2){
      node* p1=head1;
      node* p2=head2;
      node* dummyNode=new node(-1);
      node* p3=dummyNode;

      while(p1!=NULL & p2!=NULL){
        if(p1->data<p2->data){
            p3->next=p1;
            p1=p1->next;
        }else{
            p3->next=p2;
            p2=p2->next;
        }
        p3=p3->next;
      }
      while(p1!=NULL){
        p3->next=p1;
        p1=p1->next;
        p3=p3->next;
      }

       while(p2!=NULL){
        p3->next=p2;
        p2=p2->next;
        p3=p3->next;
      }
      return dummyNode->next;
}


void display(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    node* head=NULL;
    node* head1=NULL;
    insertAtHead(head1,4);
     insertAtHead(head1,2);
    
    insertAtHead(head,1);
    insertAtTail(head,3); 
    display(head);
    display(head1);
    node* newhead=merge(head,head1);
    display(newhead);
   // insertAtHead(head,1);
   // printAtAnyPosition(head,1,3);
   // display(head);
    //insertAtTail(head,7); 
    //deletion(head,3);
   // display(head);
   // getlength(head);

    
    return 0;
}