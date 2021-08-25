#include<iostream>
using namespace  std;

class User
{
    // Data Hiding
    private:
    int age;
    int usd_price = 70;
    protected:
    string name2 = "Abc";
    public:
    string name = "Test";
    void setAge(int a)
    {
        if(a < 100 && a > 0){
            age = a;
        }
    }
    int getAge()
    {
        return age;
    }
};

class MyUser : protected User 
{
        public:
        string getName(){
            return name2;
        }
};


int main()
{
    //  User user1;
    //  user1.age = 20;
    //  cout<<user1.age<<endl;
    //  User user2;
    //  user2.setAge(23);
    //  cout<<user2.age<<endl;

    // User user3(50);
    // user3.setAge(20);
    // cout<<user3.getAge();
    MyUser myUser1;
    cout<<myUser1.getName();
}

// Construtor
// Private proctected public access 
// Enculplasation 
// Inheritance
// Single
// Multiple
// Multilevel
// HyBird
// Polymorphism
// 