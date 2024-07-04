#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
     int data;
     node* left;
     node* right;

     node (int val){
          this -> data = val;
          this -> left = NULL;
          this -> right = NULL;
     }
};


node* buildByUsingStack(node* root){
    
}



int main(){
    node* root=NULL;
    buildByUsingStack(root);
    return 0;
}