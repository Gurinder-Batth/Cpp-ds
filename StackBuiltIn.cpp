#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> s1;
    stack<int> s2;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s2.push(1);
    s2.push(2);
    s2.push(3);
    s2.push(4);
    s1.swap(s2);
    while(s1.empty() == false){
        cout<<s1.top()<<endl;
        s1.pop();
    }
}

// Array
// Link
// Stack stl
