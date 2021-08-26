#include <iostream>
using namespace std;
// Encapsulation
class Car 
{
    private:
    int cc_power;
    public:
    Car(){
        this->cc_power = 1034;
    }
    
    friend void printCarPower(Car c2);

    int getCCPower(){
        return this->cc_power;
    }

    void setCCPower(int val)
    {
        if(val > 1000){
            this->cc_power = val;
        }
    }
};

void printCarPower(Car c2){
     cout<<c2.cc_power<<endl;
}

int main(){
     Car c1;
     printCarPower(c1);
}