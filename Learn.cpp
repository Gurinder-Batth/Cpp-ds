#include<iostream>
using namespace std;
class Node {
      public:
      int data;
      Node *next;
};


void print_list(Node *n) {
    while (n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
    cout<<endl;
}

void addNode(Node *node,int data)
{
    // Here we create a new Node
    Node new_node = Node();
    new_node.data = data;
    new_node.next = node;
    node = &new_node;
}



int main()
{
    Node *n1 = NULL;
    Node *n2 = NULL;
    Node *n3 = NULL;
    Node node;
    n1 = &node;
    n2 = new Node();
    n3 = new Node();
    n1->data = 20;
    n1->next = n2;
    n2->data = 42;
    n2->next = n3;
    n3->data = 24;
    cout<<"Before"<<n1<<endl;
    print_list(n1);
    cout<<"After"<<n1<<endl;
    addNode(n1,50);
    print_list(n1);
    // cout<<n1<<endl;
}

// Create Pointer Var in C++ using *
// If You Create the object of class Then Access it with -> Arrow Operator
// If You want receive the pointer as argument then you need to craete pointer
// var in funciton body
// 