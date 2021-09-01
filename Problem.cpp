#include<iostream>
using namespace std;

class Vote{
    public:
    int age;
    Vote(int age){
        this->age=age;
    }
    void apply()
    {
        try{
                if(age>18)
                {
                    cout<<"Thankyou for voting"<<age<<endl;
                }
                else{
                    throw(age);
                }
        }catch(int age){
            cout<<age<<"Error"<<endl;
        }
    }
};

int main(){
    Vote v1(20);
    Vote v2(15);
    Vote v3(27);

    v1.apply();
    v2.apply();
    v3.apply();

}