#include<iostream>
using namespace  std;



class Node
{
    public:
    int data;
    Node *next;
};

void printList(Node *head)
{
    while( head != NULL )
    {
       cout<<head->data;
       head = head->next;
    }

    // *head = 1072
    // Loop 
    //  1) 
    //  * print data -> 1
    //  head =   1073
    // 2) head != 
}

int main()
{
     Node node1;
     node1.data = 1;
     Node node2;
     node2.data = 2;
     Node node3;
     node3.data = 3;
     node1.next = &node2;
     node2.next = &node3;
     printList(&node1);
}