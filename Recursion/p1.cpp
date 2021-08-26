#include <iostream>
 
using namespace std;

int something(int i){
    if(i == 1){
        return 1;
    }
    return i * something(i-1);
}

int main()
{
    cout<<something(5);
}