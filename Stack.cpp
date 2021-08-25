#include <iostream>
#include <stack>
using namespace std;
#define MAX 1000
class Stack {
    
     private:
     int top;
     public:
     Stack(){
         top = -1;
     }
     int a[MAX];
     bool push(int val);
     bool pop();
     int topData();
     bool isEmpty();
};

bool Stack::push(int val){
     if(top > MAX){
         return false;
     }
     a[++top] = val;
     return true;
}

int Stack::topData(){
    if(top < 0){
        cout<<"Stack is Empty"<<endl;
        return 0;
    }
    return a[top];
}
bool Stack::pop(){
    if(top < 0){
        return false;
    }
    top--;
    return true;
}

bool Stack::isEmpty(){
     return top < 0 ? true : false;
}



int main() {
    Stack stack;
    stack.push(10);
    stack.push(30);
    stack.push(60);
    while(stack.isEmpty() == false){
        cout<<stack.topData()<<endl;
        stack.pop();
    }
}