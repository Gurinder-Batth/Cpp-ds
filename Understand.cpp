#include<iostream>
using namespace  std;


class User 
{
   public:
   int age;
   User(int age){
       this->age = age;
   }
};

void changeUser(User *u)
{
        cout<<"Address is "<<u<<endl;
        User user(50);
        /**
         * TODO: here u is pointer type var which holds the address
         * TODO: below we rewrite the address of pointer 
         * TODO: So thats means it has no more connection with below main method user object
         * */
        // Below we change the address which pointer holds
        // u = &user;
        //  Below we copy the user object value of *u pointer
        // remeber this dont effect on pointer address
        *u = user;

        cout<<"Address is "<<&user<<endl;
        cout<<"Address is "<<u<<endl;

}

int main()
{
      User user1(20);
      cout<<"Below &user1"<<&user1<<endl;
      changeUser(&user1);
      cout<<user1.age;
      cout<<"Below &user1 "<<&user1<<endl;

}