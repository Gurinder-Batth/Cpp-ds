#include<iostream>
using namespace  std;

class Player 
{
     public:
     int speed;
     Player(int speed){
         this->speed = speed;
     }
};

void change(Player **p){
    // Player *ptr2 = new Player(33);
    Player ptr2(33);
    cout<<"Inner ptr2"<<&ptr2<<endl;
    *p=&ptr2;
    cout<<"Inner Speed"<<(*p)->speed<<endl;
    // p->speed = 25;
    // cout<<p->speed<<endl;
}

int main()
{
        // Problem 1
        // int *p;
        // int a = 10;
        // p = &a;
        // cout<<*p;
        //
        // Player player1(20);
        // Player *ptr=NULL;
        // ptr=&player1;
        // cout<<ptr->speed<<endl;
        // cout<<player1.speed;
        //Player *ptr = new Player(20);
        Player *ptr = new Player(20);
        cout<<"Address of Player"<<ptr<<endl;
        cout<<"Unchanged player speed"<<ptr->speed<<endl;
        change(&ptr);
        cout<<"Address of Player changed"<<ptr<<endl;
        // cout<<"Changed player speed"<<ptr->speed<<endl;
        cout<<"ptr address "<<(ptr)->speed<<endl;
        // cout<<ptr.speed<<endl;