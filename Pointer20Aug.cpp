#include<iostream>
using namespace  std;
int main()
{
    int a = 20;
    int *p = NULL;
    int **p2 = NULL;
    p = &a;
    p2 = &p;
    // cout<<&a<<endl;
    // cout<<p<<endl;
    // cout<<p2<<endl;

    cout<<a<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;
}