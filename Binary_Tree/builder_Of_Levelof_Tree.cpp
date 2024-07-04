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

void builder_of_levelofTree(node* root){
      cout<<"ENter the data of tree :"<<endl;
      int data;
      cin>>data;
      root = new node(data);

      queue<node*>q;
       q.push(root);
       

}
int main(){
    // 5 4 -1 -1 6 -1 -1
    node* root = NULL;
    builder_of_levelofTree( root);
    return 0;
}