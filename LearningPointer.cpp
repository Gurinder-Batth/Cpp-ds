#include<iostream>
using namespace std;

class User 
{
    public:
    int age;
    User(int age){
        this->age = age;
    }
};

void changeRef(User u)
{
    u.age = 30;
    cout<<"Inside"<<endl;
    cout<<u.age<<endl;
}

int main()
{
     User user(20);
     changeRef(user);
     cout<<"Outside"<<endl;
     cout<<user.age<<endl;
     int a = 20;
     int *p = NULL;
     p = &a;
     int **p2 = NULL;
     p2 = &p;
     cout<<"A Address "<<&a<<endl;
     cout<<"*P Holds "<<p<<endl;
     cout<<"**P2 Holds "<<**p2<<endl;


}