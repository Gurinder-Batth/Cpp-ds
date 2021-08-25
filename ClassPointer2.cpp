#include<iostream>
using namespace  std;
// Advance 
class User
{
     public:
     int age;
     User(int age){
         this->age = age;
     }
};

void change(User **u)
{   
     User user2(40);
    //  cout<<*u<<endl;
    //  User user2(39);
    //  (*u) = &user2;
    cout<<*u<<endl;
    *u = &user2;
    cout<<*u<<endl;
    cout<<(*u)->age<<endl;
}

int main()
{
    User user(20);
    cout<<&user<<endl;
    User *user1 = &user;
    cout<<user1<<endl;
    change(&user1);
    cout<<"Main user1 "<<user1<<endl;
    cout<<"From Main:"<<user1->age<<endl;
}