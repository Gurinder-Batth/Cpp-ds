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

void preOrder(Node *root)
{
     if(root == NULL){
         return;
     }
     cout<<root->data<<" ";
     preOrder(root->left);
     preOrder(root->right);
}
void inOrder(Node *root)
{
     if(root == NULL){
         return;
     }
     inOrder(root->left);
     cout<<root->data<<" ";
     inOrder(root->right);
}
void postOrder(Node *root)
{
     if(root == NULL){
         return;
     }
     postOrder(root->left);
     postOrder(root->right);
     cout<<root->data<<" ";
}

int main()
{
     Node *root = new Node(1);  
     root->left = new Node(2);
     root->right = new Node(3);
     root->left->left = new Node(4);
     root->left->right = new Node(5);
     root->left->left->left = new Node(6);
     root->left->left->right = new Node(7);
     root->left->right->left = new Node(8);
     root->left->right->right = new Node(9);

     root->right->left = new Node(10);
     root->right->right = new Node(11);

     root->right->left->left = new Node(12);
     root->right->left->right = new Node(13);

     root->right->right->left = new Node(14);
     root->right->right->right = new Node(15);
    // root->left->left = new Node(4);
    // root->left->right  
    // root->left->left->left
    // root->left->left->right = new Node(5);
    // root->left->left->right->left = new Node(6);
    // root->left->left->right->right;
    // root->left->left->right->left->left 
    // root->left->left->right->left->right = new Node(7);
    // root->right = new Node(3);
    // root->right->left = new Node(8);
    // root->right->right = new Node(9);
    
    //  preOrder(root);
    //  inOrder(root);
    //  postOrder(root);
}