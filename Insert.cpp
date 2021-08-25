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

void insertAtEnd(int val)
{
        Node *new_node = new Node(val);
        Node *tmp_node = head;
        while(tmp_node != NULL){
              if(tmp_node->next == NULL)
              {
                  tmp_node->next = new_node;
                  break;
              }
              tmp_node = tmp_node->next;
        }
}

void insertAtSpefic(int val,int pos)
{
        Node *new_node = new Node(val);
        Node *tmp_node = head;
        int i = 0;
        while(tmp_node != NULL){
            if(i == pos){
                Node *next_of_next = tmp_node->next;
                tmp_node->next = new_node;
                new_node->next = next_of_next;
                break;
            }
            tmp_node = tmp_node->next;
            i++;
        }
}


void insertAtSpefic2(int val,int pos)
{
        if(pos == 0){
            insertAtHead(val);
            return ;
        }
        Node *new_node = new Node(val);
        Node *tmp_node = head;
        int i = 0;
        while(tmp_node != NULL){
            if(i == pos - 1){
                Node *next_of_next = tmp_node->next;
                tmp_node->next = new_node;
                new_node->next = next_of_next;
                break;
            }
            tmp_node = tmp_node->next;
            i++;
        }
}

bool search(int val){
    Node *tmp_node = head;
    while(tmp_node!=NULL){
        if(val==tmp_node->data)
           return true;
        tmp_node = tmp_node->next;
    }
    return false;
}

void deleteHeadNode(){
     Node *tmp_node;
     tmp_node = head->next;
     head = tmp_node;
}

void deleteTailNode(){
     Node *tmp_node = head;
     while(tmp_node != NULL){
        if(tmp_node->next != NULL){
            if(tmp_node->next->next == NULL)
            {
                // cout<<tmp_node->data;
                tmp_node->next = NULL;
                break;
            }
        }
        tmp_node = tmp_node->next;
     }
}

void deleteAtSpefic(int pos)
{
        Node *tmp_node = head;
        if(pos == 0){
            deleteHeadNode();
            return ;
        }
        int i = 0;
        while(tmp_node != NULL){
            if(i == pos - 1){
                tmp_node->next = tmp_node->next->next;
                break;
            }
            tmp_node = tmp_node->next;
            i++;
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
     insertAtEnd(3);
     cout<<"After Insert At End"<<endl;
     printList();
     insertAtSpefic2(100,1);
     cout<<"After 100 Insert At 1 Pos"<<endl;
     printList();
     cout<<"Search 15 -> "<<search(80)<<endl;
     deleteHeadNode();
     cout<<"After Head Deletetion "<<endl;
     printList();
     deleteTailNode();
     cout<<"After Tail Deletetion "<<endl;
     printList();
     deleteAtSpefic(3);
     cout<<"After 1 Deletetion  "<<endl;
     printList();
    //  1 -> 2 -> 3 -> NULL
    // 10
    // 1) Create a new Node 
    // 2) 
}

// Link List Creation
// Insertion at Head
// Insertion at Tail
// Insertion at Spefic Index
// Search 
