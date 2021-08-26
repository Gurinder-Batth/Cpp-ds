#include<iostream>
using namespace  std;

class CalculationParent 
{
     public:
     int square(int x){
         return x * x;
     }
     int mul(int a, int b){
         return a * b;
     }
};


class Calculation : public CalculationParent
{
    public:
    int a ;
    int b;
    Calculation(int a , int b){
        this->a = a;
        this->b = b;
    }

    // Method Overloading
    // we can write same name function but different params
    // invoke depends of function based of arguments number
    int sum(){
        return a + b;
    }
    // Method Overloading
    // we can write same name function but different params
    // invoke depends of function based of arguments number
    int sum(int c){
        return this->a + this->b + c;
    }

    // method @Overriding
    int mul(int a , int b){
        return (a * b ) + 10;
    }

//    Operator overloading
    Calculation operator +(Calculation c2){
           Calculation c3(0,0);
           c3.a = this->a + c2.a;
           c3.b = this->b + c2.b;
           return c3;
    }
};


int main()
{
    Calculation c1(10,20);
    Calculation c2(30,40);
    cout<<c1.sum()<<endl;
    cout<<c1.sum(10)<<endl;
    cout<<c1.square(2)<<endl;
    cout<<c1.mul(2,2)<<endl;
    Calculation c3 = c1 + c2;
    cout<<c3.sum()<<endl;
}