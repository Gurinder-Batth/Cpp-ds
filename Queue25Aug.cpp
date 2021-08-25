#include<iostream>
using namespace std;
#define MAX 4
class Queue {
      private:
      int container[MAX];
      int front;
      int rear;
      public:
      Queue(){
          front = 0;
          rear = -1;
      }
      bool enqueue(int val){
           if(rear >= MAX -1){
               cout<<"Queue is full"<<endl;
               return false;
           }
           container[++rear] = val;
           return true;
      }
      bool dequeue(){
           if(isEmpty()){
               return false;
           }
           for(int i = 0; i < rear  ; i++){
                container[i] = container[i+1];
           }
           rear--;
           return true;
      }
      bool isEmpty(){
           return  rear == -1 ? true : false;
      }

      int frontElement(){
          if(isEmpty()){
               return 0;
          }
          return container[front];
      }

};

int main(){
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    while(q.isEmpty() == false){
        cout<<q.frontElement()<<endl;
        q.dequeue();
    }
}