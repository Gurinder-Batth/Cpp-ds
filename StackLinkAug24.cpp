#include<iostream>
using namespace std;
#define MAX 4


class Node {
      public:
      Node *next;
      int data;
      Node(int data){
          this->data = data;
          this->next = NULL;
      }
};

Node *head = NULL;


class Stack
{
     private:
     int top;
     public:
     bool push(int val);
     bool pop();
     bool isEmpty();
     int topElement();
     Stack(){
         top = -1;
     }
};

bool Stack::isEmpty(){
        return top == -1 ? true : false;
}

bool Stack::push(int val)
{
     if(top >= MAX){
        cout<<"Stack Overflow"<<endl;
        return false;
    }
     if(top == -1){
         head = new Node(val);
         top++;
         return true;
     }
        //  find previous
        Node *tmp_node = head;
        for(int i = 0 ; i < top; i++){
            tmp_node = tmp_node->next;
        }
        Node *new_node = new Node(val);
        tmp_node->next = new_node;
        top++;
        return true;
}

bool Stack::pop(){
    if(isEmpty()){
        cout<<"Stack Empty"<<endl;
        return false;
    }
    Node *tmp_node = head;
    for(int i = 0 ; i < top; i++){
        tmp_node = head->next;
    }
    tmp_node = NULL;
    top--;
    return true;
}

int Stack::topElement()
{
     if(isEmpty()){
        cout<<"Stack Empty"<<endl;
        return false;
    }
    Node *tmp_node = head;
    for(int i = 0 ; i < top; i++){
        tmp_node = tmp_node->next;
    }
    return tmp_node->data;
}

int main()
{
    Stack stack;
    stack.push(50);
    stack.push(60);
    stack.push(70);
    stack.pop();
    stack.push(80);
    while( stack.isEmpty() == false )
    {
        cout<<stack.topElement()<<endl;
        stack.pop();
    }
}
// Code