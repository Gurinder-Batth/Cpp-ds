#include <iostream>
using namespace std;

template<typename T>
class Calculation
{
private:
public:
    T sum(T a,T b){
        return a + b;
    }
};



// template set of rules
template<typename T>
T sum(T a,T b){
    return a + b;
}
// int sum(int a , int b)
// {
//     return a + b;
// }
// double sum(double a , double b)
// {
//     return a + b;
// }
int main()
{
     Calculation<int> c;
     cout<<c.sum(40,54)<<endl;
    // cout<<sum(30,54)<<endl;
    // cout<<sum(34.4,54.3)<<endl;
}