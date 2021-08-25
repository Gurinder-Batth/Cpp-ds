#include<iostream>
using namespace  std;
class Coding2
{
private:
    /* data */
public:
    int data;
    Coding2(){
        cout<<"Constructor Called"<<endl;
    }
    ~Coding2(){
     cout<<"DesConstructor Called";
    }
};
int main()
{
    Coding2 coding2;
    coding2.data = 30;
    cout<<coding2.data<<endl;

}