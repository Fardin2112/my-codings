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

node* buildtree(node* root){
      
      cout<<"Enter the root data :"<<endl;
      int data;
      cin >> data;
      root = new node(data);

      if ( data == -1 ){
        return NULL;
      }

      cout<<"Enter the data in left of the root :"<<data<<endl;
      root -> left = buildtree(root -> left);
      cout<<"Enter the data in right of the root :"<<data<<endl;
      root -> right = buildtree(root -> right);

      return root;

}

void LevelOfTraversal(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp=q.front();
        q.pop();

        if(temp == NULL){
            cout << endl;
            if(!q.empty()){
                cout<<endl;
                q.push(NULL);
            }

        }else{
             cout<< temp -> data <<" ";
             if(temp -> left){
             q.push(temp -> left);
            }

             if(temp -> right){
             q.push(temp -> right);
            } 
        }

       
    }

}

void preorder(node* root){
    // baase case
    if(root == NULL){
        return ;
    }

    cout << root -> data<<" ";
    preorder(root -> left);
    preorder(root->right);
}

int main(){
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    node* root = NULL;
    //creating TREE
    root = buildtree(root);
   // LevelOfTraversal(root);

   // traversal in inorder
   cout<<"preorder Traversal of tree :";
   preorder(root);
    return 0;
}