#include<iostream>
using namespace std;
struct listnode{
    int data;
    listnode* next;
};
 void display(listnode* head){
        listnode* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
 
int main(){
    listnode* head=NULL;
    listnode* second=NULL;
    listnode* third=NULL;
    head=new listnode();
    second=new listnode();
    third=new listnode();
    head-> data=1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=NULL;
    display(head);
    return 0;
}