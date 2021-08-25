#include<iostream>
using namespace std;
class User 
{
    public:
    int age;
};

void change(User *u)
{
    cout<<u<<endl;
    u->age = 48;
}

int main()
{
    User *user_ptr = new User();
    user_ptr->age = 10;
    cout<<user_ptr->age<<endl;
    change(user_ptr);
    cout<<user_ptr->age<<endl;
    cout<<user_ptr<<endl;
}