#include<iostream>
using namespace std;
class User
{
    //   member variables
    // access public private protected
    public:
    int age = 20;
    string first_name = "Gurinderpal";
    string last_name = "Singh";

    void printUserAge(int x){
         cout<<(age+x)<<endl;
    }

    string fullName(){
        return first_name + last_name;
    }


     
};

int main()
{
    User user1; //copy
    User user2;
    user1.age = 93;
    user1.printUserAge(5);
    user2.printUserAge(10);
    cout<<user1.fullName();
}