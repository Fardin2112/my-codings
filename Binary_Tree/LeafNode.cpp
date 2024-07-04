#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node (int val){
       this->data = val;
       this->left = NULL;
       this->right =NULL;
    }
};

node* buildTree(node* root){
      cout << "Enter root value :" << endl;
      int data;
      cin >> data;
      root = new node(data);

      if( data == -1){
        return NULL;
      }

      cout << "Enter the  data in left of the root : "<<data <<endl;
      root -> left = buildTree(root -> left);
      cout << "Enter the data in right of the root : "<<data<<endl;
      root-> right = buildTree( root ->right);

}

node * LevelOfTraversal(node* root){
    cout << " LevelOfTraversal of Tree :"<< endl;
    // base case
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout<<endl;

            if(!q.empty()){
                cout<<endl;
                q.push(NULL);
            }

        }else{
            cout<<temp ->data<<" ";

            if(temp ->left){
                q.push(temp ->left);
            }
            
            if(temp ->right){
                q.push(temp ->right);
            }
        }
    }

}

void LeafNode(node* root){
    vector<int>vec;
    queue<node*>q;
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp->left==NULL && temp->right==NULL){
            cout<<temp -> data <<" ";

        }else{

            if(temp ->left){
                q.push(temp ->left);
            }
            
            if(temp ->right){
                q.push(temp ->right);
            }
        }
    }

}

int main (){
    //5 3 2 -1 -1 4 -1 -1 7 6 -1 -1 8 -1 -1
    node* root=NULL;
    root=buildTree(root);
    LevelOfTraversal(root);
    cout<<"LeafNode of Tree is :";
    LeafNode(root);

    return 0;
}