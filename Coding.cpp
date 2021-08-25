#include<iostream>
using namespace  std;
int main()
{
    int a = 20; // a = 20 
    int b = 49; // b = 49
    int *c = NULL;
    // int *c = &b;
    c = &b;
    *c = 78;
    cout<<c<<endl;
    cout<<&b<<endl;
}