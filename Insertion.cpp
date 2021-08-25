#include<iostream>
using namespace  std;



class Node
{
    public:
    int data;
    Node *next ;
};

Node *head = new Node();

void printList()
{
    cout<<"Head"<<head<<endl;
    Node *tmp_ptr = head;
    cout<<"TMP PTR"<<tmp_ptr<<endl;
    while( tmp_ptr != NULL )
    {
          cout<<tmp_ptr->data<<" ";
          tmp_ptr = tmp_ptr->next;
    }
    cout<<endl;
}

void insertNode(int val){
     Node *node = new Node();
     node->data = val;
     node->next = head;
     head = node;
}

int main()
{
     Node node2;
     Node node3;
     head->data = 10;
     node2.data = 20;
     node3.data = 30;
     head->next = &node2;
     node2.next = &node3;
     printList();
    //  Node *ptr = &node1;
    //  cout<<ptr<<endl;
     insertNode(62);
     printList();
     printList();
}