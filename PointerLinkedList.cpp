#include<iostream>
using namespace  std;



class Node
{
    public:
    int data;
    Node *next = NULL;
};

void printList(Node *head)
{
    while( head != NULL )
    {
          cout<<head->data<<" ";
          head = head->next;
    }
    cout<<endl;
}

void insertNode(Node *head,int val){
    //  cout<<(*head)<<endl;
     Node *node = new Node();
     node->data = val;
     node->next = head;
     head = node;
    //  cout<<(*head)<<endl;
}

int main()
{
     Node node1;
     Node node2;
     Node node3;
     node1.data = 10;
     node2.data = 20;
     node3.data = 30;
     node1.next = &node2;
     node2.next = &node3;
     printList(&node1);
     Node *ptr = &node1;
     cout<<ptr<<endl;
     insertNode(ptr,62);
     printList(ptr);
}