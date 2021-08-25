#include <iostream>
#include <stack>
using namespace std;
#define MAX 4
class Queue {
    
     private:
     int front;
     int rear;
     int a[MAX];
     public:
     Queue(){
         front = rear = 0;
     }
     bool push(int val);
     bool pop();
     int  frontEle();
     bool isEmpty();
};

bool Queue::push(int val){
     if(rear >= MAX){
         cout<<"Queue is full"<<endl;
         return false;
     }
     a[rear++] = val;
     return true;
}

int Queue::frontEle(){
    if(front == rear){
        cout<<"Queue is Empty"<<endl;
        return 0;
    }
    return a[0];
}

bool Queue::pop(){
    if(front == rear){
        cout<<"Quque is empty";
        return false;
    }
    for(int i  = 0 ; i < rear - 1 ; i++){
        a[i] = a[i+1];
    }
    rear--;
    return true;
}

bool Queue::isEmpty(){
     return front == rear ? true : false;
}



int main() {
    Queue queue;
    queue.push(10);
    queue.push(30);
    queue.push(60);
    queue.push(80);
    queue.push(44);
    queue.pop();
    while(queue.isEmpty() == false){
        cout<<queue.frontEle()<<endl;
        queue.pop();
    }

      queue.push(234);
      cout<<queue.frontEle()<<endl;
}