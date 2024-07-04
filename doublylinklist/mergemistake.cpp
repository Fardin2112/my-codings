/*this code is not working i will debug when i get more knowledge in merge sort*/


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
 
  // for insert in head
 
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
 
// for get length of link list;
 
  int getlength(node* &head){
 
    node* temp=head;
    int length=0;
 
    while(temp!=NULL){
        temp=temp->next;
        length++;
    }
 
    return length;
 }
 
 
// after dividing linklist know where to start from mid position;
  node* position(node* head,int j){
 
      node* temp=head;
      int count=0;
 
           while(count!=j){
 
            temp=temp->next;
            count++;
 
           }
 
      return temp;
  }
 
// merging divided linklist;
 node* mergesort(node* &head,int start,int end,int mid){
 
    node * Ans=new node(-1);
 
	    int i=start,j=mid+1, k=0;
 
       node* p2=position(head,j);
       node* p1=head;
       node* p3=Ans;
 
         while(i<=mid && j<=end ){
 
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
 
 
  }
 
// merge sort using 
 
  void sort(node* &head,int start,int end)

  {
 
	if(start == end){
		return;
	}
 
	int mid = (start+end)/2;
	sort(head,start,mid);
	sort(head,mid+1,end);
	mergesort(head,start, end, mid);
 
 
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
 
 
    node* head=new node(6);
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,1);
 
 
    cout<<"linklist1 ->";
    display(head);
 
   int start=0;
 
   int end = getlength(head);
   cout<<"size of linklist->"<<end<<endl;
 
   sort(head,start, end);
   cout<<"After sorting linklist->";
   display(head);
 
    return 0;
}