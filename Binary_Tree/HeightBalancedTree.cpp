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
    // you can use cnt for find height of tree
   // int cnt=-1;
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp=q.front();
        q.pop();

        if(temp == NULL){
            cout << endl;
            //cnt++;
            //cout<<"height"<<cnt<<endl;
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

int height(node* root){
    if(root==NULL){
        return 0;
    }

    int left=height(root->left);
    int right=height(root->right);

    int ans=max(left,right) + 1;
    return ans;

}

/*here we checking Tree is balanced of not in height
diff bet left and right Tree is not more than one */

bool balancedheightTree(node* root){
    if(root==NULL){
        return true;
    }
    bool left=balancedheightTree( root-> left );
    bool right=balancedheightTree( root-> right );

    bool diff=abs(height(root -> left)-height(root ->right))<=1;

    if(left && right && diff){
        return true;
    }
    else{
        return false;
    }

}

int main(){
    // 5 3 2 -1 -1 4 -1 -1 7 6 -1 -1 8 -1 -1
    node* root = NULL;
    //creating TREE
    root = buildtree(root);
    LevelOfTraversal(root);
    cout<<"tree in height :"<< balancedheightTree(root)<<endl;
    cout<<"height of Tree is :"<<height(root)<<endl;
    return 0;

}