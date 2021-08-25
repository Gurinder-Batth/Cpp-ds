#include<iostream>
using namespace  std;

class Node 
{
     public:
     int data;
     Node *next;
     Node *prev;
     Node(int data){
         this->data = data;
         this->next = NULL;
         this->prev = NULL;
     }
};

Node *head = new Node(10);

void printList()
{
     Node *tmp_node = head;
     while(tmp_node != NULL){
         cout<<tmp_node->data<<"->";
         tmp_node = tmp_node->next;
     }
     cout<<endl;
}

void addHeadNode(int val)
{
    cout<<"After Head Insertion"<<endl;
    Node *new_node = new Node(val);
    new_node->next = head;
    head->prev = new_node;
    head = new_node;
}
void addNodeSpefic(int val,int pos)
{
    cout<<"After Spefic Insertion "<<pos<<" "<<endl;
    if(pos == 0){
        addHeadNode(val);
        return;
    }

    Node *tmp_node = head;
    for(int i = 0 ; i < pos ; i++){
        tmp_node = tmp_node->next;
    }
    Node *new_node = new Node(val);
    new_node->next = tmp_node;
    tmp_node->prev->next = new_node;
}

int main()
{
      Node *second = new Node(20);
      Node *third = new Node(30);
      Node *fourth = new Node(40);
      head->next = second;
      second->next = third;
      second->prev = head;
      third->next = fourth;
      third->prev = second;
      fourth->prev = third;
      printList();
      addHeadNode(50);
      printList();
      addNodeSpefic(60,1);
      printList();
}