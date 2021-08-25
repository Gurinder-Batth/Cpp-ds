#include<iostream>
using namespace  std;



class Node
{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

Node *head = NULL;
// Node *head = new Node(5);

void printList(){
     Node *tmp_head = head;
    //  cout<<tmp_head<<endl;
    //  cout<<head->next<<endl;
    while(tmp_head != NULL){
        cout<<tmp_head->data<<" ";
        tmp_head = tmp_head->next;
    }
    cout<<endl;
}

void insertAtHead(int val)
{
        Node *new_head = new Node(val);
        new_head->next = head;
        head = new_head;
}



void insertAtPos(int pos,int val)
{
        int i = 0;
        Node *new_node = new Node(val);
        Node *tmp_head = head;
        while(tmp_head != NULL)
        {
            if(pos == i){
                  Node *old_node = tmp_head->next;
                  tmp_head->next = new_node;
                  new_node->next= old_node;
                  break;
            }
            tmp_head = tmp_head->next;
            i++;
        }
}

void deleteAtPos(int pos)
{
        // 1 2 3 4 5
        int i = 0;
        Node *tmp_head = head;
        while(tmp_head != NULL)
        {
            if(pos == i)
            {
                  if(tmp_head->next != NULL)
                  {
                      tmp_head->next = tmp_head->next->next;
                  }
                  else
                  {
                      tmp_head->next = NULL;
                  }
            }
            i++;
        }
}

void insertAtTail(int val)
{
        Node *new_last = new Node(val);
        Node *tmp_head = head;
        while(tmp_head != NULL)
        {
            if(tmp_head->next == NULL){
                  tmp_head->next = new_last;
                  break;
            }
            tmp_head = tmp_head->next;
        }
}

int main()
{
     Node node(5);
     head = &node;
     Node *second = new Node(10);
     Node *third = new Node(15);
    
     head->next = second;
     second->next = third;
     printList();
     insertAtHead(20);
     printList();
     insertAtTail(100);
     printList();
     insertAtPos(1,200);
     printList();
     deleteAtPos(0);
     cout<<"After Delette"<<endl;
     printList();
}

