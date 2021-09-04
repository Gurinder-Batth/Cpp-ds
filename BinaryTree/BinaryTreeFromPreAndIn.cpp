#include<iostream>
using namespace std;
class Node 
{
     public:
     int data;
     Node *left;
     Node *right;
     Node(int data){
         this->left = NULL;
         this->right = NULL;
         this->data = data;
     }

};

int searchNode(int inorder[],int start,int end,int data){
          for(int i = start; i < end; i++){
               if(inorder[i] == data){
                    return i;
               }
          }
          return -1;
}

Node* createBinaryTree(int preorder[] , int inorder[] , int start , int end ){
      static int idx = 0;    
      Node *tmp = new Node(preorder[idx++]);
      if(start == end){ return tmp; }
      int search_idx = searchNode(inorder,start,end,tmp->data);
      tmp->left = createBinaryTree(preorder,inorder,start,search_idx-1);
      tmp->right = createBinaryTree(preorder,inorder,search_idx+1,end);
      return tmp;
}

void inOrder(Node *root){
     if(root == NULL){
         return;
     }
     inOrder(root->left);
     cout<<root->data<<" ";
     inOrder(root->right);
}

int main()
{
     int preorder[] =   { 1 , 2 , 4 , 5 , 3 , 6 , 7 };
     int inorder[] =   { 4 , 2 , 5 , 1 , 6 , 3 , 7 };
     Node *root = createBinaryTree(preorder,inorder,0,6);
     inOrder(root);
}

//        1
//     2      3
//   4  5   6   7


// Pre 1 , 2 , 4 , 5 , 3 , 6 , 7
// In 4 , 2 , 5 , 1 , 6 , 3 , 7
// Post 4 , 5 , 2 , 1 , 6 , 7 , 3