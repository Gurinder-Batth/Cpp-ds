#include<iostream>
#include <queue>

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

void preOrder(Node *root){
     
     if(root == NULL){
         return;
     }
     cout<<root->data<<" ";
     preOrder(root->left);
     preOrder(root->right);
}
void inOrder(Node *root){
     
     if(root == NULL){
         return;
     }
     inOrder(root->left);
     cout<<root->data<<" ";
     inOrder(root->right);
}


void postOrder(Node *root){
     
     if(root == NULL){
         return;
     }
     postOrder(root->left);
     postOrder(root->right);
     cout<<root->data<<" ";
}

void insertInTree(Node *current_node,int val)
{
     queue<Node*> q;
     Node *new_node = new Node(val);
     q.push(current_node);
     while(q.empty() == false)
     {
        Node *front = q.front();
        q.pop();
        
        if(front->left != NULL){
            q.push(front->left);
        }
        else
        {
            front->left = new_node;
            break; 
        }

        if(front->right != NULL){
            q.push(front->right);
        }
        else
        {
            front->right = new_node;
            break; 
        }
    }
}


int main()
{
     Node *root = new Node(1);  
     root->left = new Node(2);
     root->right = new Node(3);
     root->left->left = new Node(4);
     root->left->right = new Node(5);
     root->right->left = new Node(6);
     root->right->right = new Node(7);
     preOrder(root);
     cout<<endl;
     insertInTree(root,8);
     preOrder(root);
     cout<<endl;
}