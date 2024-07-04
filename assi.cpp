#include <iostream>
using namespace std;


//you can also use class
struct Node{
	int data;
	Node *next;
};

/**
 * newNode function will return a node with data as val
 * */
Node *newNode(int val){
	Node *temp = new Node;
	temp->data = val;
	temp->next = NULL;
	return temp;
}

/**
 * createLinkedList will read the `n` inputs from user and will create a linked list of size `n`
 * */
 Node *createLinkedList(int n){
 	int a;
 	Node *head = NULL;
 	Node *tail = NULL; 
 	
 	for(int i=0;i<n;i++){
 		cin>>a;
 		Node *temp = newNode(a);
 		
 		if(head==NULL){
 			head = temp;
 			tail = temp;
 		}
 		else{
 			tail->next = temp; 
 			tail = temp;
 		}
 	}
 	
 	return head;
 }
 
 /**
  * printLinkedList will print all the elemets of linked list
  * */
void printLinkedList(Node *head){
	while(head!=NULL){
		cout<<head->data<<"-> "; 	//print the data of head
		head = head->next; //move the head to next node
	}
	cout<<"null\n";
}

/**
 * getSizeOfLinkedList will take head of linkedList in input and will return it's size
 * */
int getSizeOfLinkedList(Node *head){
 Node* temp=head;
    int length=0;

    while(temp!=NULL){
        temp=temp->next;
        length++;
    }

    return length;
	
}

/**
 * getKthNodeOfLinkedList will take head  of linkedList and an positive interger k in input and 
 * it's will return kth node (1 based counting)
 * */

Node* getKthNodeOfLinkedList(Node *head, int k){
      Node* temp=head;
     for(int i=0;i==k+1;i++){
        temp=temp->next;
     }

    return temp;
}


Node *mergeTwoSortedLinkedList(Node *head1, Node* head2){
	Node *newHead=NULL; //head of the newly created linked list will be return
	Node *newTail=NULL; //tail because new node will be attached to tail
 
	while(head1!=NULL && head2!=NULL){
		Node *temp;
		if(head1->data < head2->data){
			temp = head1;
			head1 = head1->next;
		}
		else{
			temp=head2;
			head2 = head2->next;
		}
 
		//temp node is to be inserted at tail of new LinkedList
		if(newHead==NULL){
			//if linked is empty then headofAns Linkedlist will be temp
			newHead= temp;
		}
		else{
			newTail->next = temp;
		}
		newTail = temp;
	}
 
	/*now one list will remain and no need to traverse as all the remaining nodes are attached to head1 or head2
		3-> 5-> 8->10->11->15->NULL 
		1-> 2-> 4-> 5-> 6->NULL
		after the loop ends the 
			new LinkedLsit => 1->2->3->4->5->5->6->nULL
		=>	head1 will point to 8->10->11->15->NULL;
			head2 will be NULL
			newTail will be pointing to node with val 6
			newHead will be point to node with val 1
			so all we need to do is newTail->next = remainingHead
	*/
 
	//it is also possible that newHead is NULL
	if(newHead==NULL){
		if(head1!=NULL){
			newHead = head1;
		}
		else{
			newHead = head2;
		}
	}
	else{
		if(head1!=NULL){
			newTail->next = head1;
		}
		else{
			newTail->next = head2;
		}
	}
 
	return newHead;
}
 

int main() {
	int n,k;
	cin>>n>>k;
	Node* head =createLinkedList(n);
	cout<<"linkedList: "; 
	printLinkedList(head);
	cout<<"size: "<<getSizeOfLinkedList(head)<<"\n";
	cout<<"val of Kth Node "<<getKthNodeOfLinkedList(head,k)->data<<"\n";

    //node* Ans= mergeTwoSortedLinkedList(head ,)


    return 0;
}