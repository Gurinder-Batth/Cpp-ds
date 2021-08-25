#include<iostream>
using namespace std;
#define MAX 4

class Stack
{
     private:
     int container[MAX];
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
     //ternary operator
     return top == -1 ? true : false;
}

bool Stack::push(int val)
{
    // cout<<"top "<<top<<"max "<<MAX<<endl;
    if(top >= MAX - 1){
        cout<<"Stack Overflow"<<endl;
        return false;
    }
    container[++top] = val;
    return true;
}

bool Stack::pop(){
     if(isEmpty() == true){
         cout<<"Stack is Empty"<<endl;
         return false;
     }
     top--;
     return true;
}

int Stack::topElement()
{
    if(isEmpty() == true){
         cout<<"Stack is Empty"<<endl;
         return false;
     }
    return container[top];
}

int main()
{
    Stack stack;
    stack.push(50);
    stack.push(60);
    stack.push(70);
    stack.push(80);
    stack.push(90);
    while( stack.isEmpty() == false )
    {
        cout<<stack.topElement()<<endl;
        stack.pop();
    }
}
