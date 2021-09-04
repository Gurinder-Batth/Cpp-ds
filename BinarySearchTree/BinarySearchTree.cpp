#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->left = NULL;
        this->right = NULL;
        this->data = data;
    }
};

void preOrder(Node *root)
{

    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}
void inOrder(Node *root)
{

    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void postOrder(Node *root)
{

    if (root == NULL)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

Node* search(Node* root,int val){
     if(root == NULL){
         return NULL;
     }
      if(root->data == val){
          return root;
      }
      if(root->data > val){
        return search(root->left,val);
      }
      return search(root->right,val);
}

Node *search2(Node* root,int val){
      bool find = false;
      Node *tmp_node = root;
      while(find == false)
      {
          if(tmp_node == NULL){
              return NULL;
          }
         else if(tmp_node->data == val){
            return tmp_node;
        }
        if(tmp_node->data > val){
            tmp_node = tmp_node->left;
        }
        else{
            // go right 
            tmp_node = tmp_node->right;
        }
      }
      return NULL;
}


void insert(Node* root,int val){
      bool find = false;
      while(find == false)
      {
 
        if(root->data > val){
            if(root->left  == NULL){
                root->left = new Node(val);
                break;
            }
            root = root->left;
        }
        else{
            if(root->right == NULL){
                root->right = new Node(val);
                break;
            }
            root = root->right;
        }
      }
}

Node* insertByRecursion(Node* root,int val){
     if(root == NULL){
         return new Node(val);
     }
      if(root->data > val){
        root->left = insertByRecursion(root->left,val);
      }
      else
      {
        root->right = insertByRecursion(root->right,val);
      }

      return root;
}


int main()
{
    Node *root = new Node(8);
    root->left = new Node(6);
    root->right = new Node(10);
    root->left->left = new Node(4);
    root->left->right = new Node(7);
    root->right->left = new Node(9);
    root->right->right = new Node(11);
    // Node* node = search(root,4);
    // if(node != NULL){
    //    cout<<node->data;
    // }
    // Node* node = search2(root,4);
    // if(node != NULL){
    //    cout<<node->data;
    // }
    preOrder(root);
    // insert(root,1);
    
    insertByRecursion(root,1);
    cout<<endl;
    preOrder(root);
}