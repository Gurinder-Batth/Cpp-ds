#include<iostream>
using namespace  std;

void dummy(int a,int b)
{
     a = a + b;
     cout<<"Upper "<<a<<endl;
}

int main()
{
     int x = 30;
     int y =  50;
     dummy(x,y); //agruments copy
     cout<<"Below "<<x<<endl;
}