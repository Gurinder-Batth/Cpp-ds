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

void change(User *u)
{

    u->age = 50;
    // cout<<
    User user2(10);
    u = &user2;
}

int main()
{
    User user1(20);
    change(&user1);
    cout<<"From Main:"<<user1.age<<endl;
}