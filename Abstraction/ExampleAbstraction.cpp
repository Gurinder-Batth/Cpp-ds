#include <iostream>
using namespace std;
// Abstraction class known as which contain atleast one virtual method
// pure function
// pure virtual function
class MyRemote 
{
      protected:
      string brand = "Test";
      public:
      virtual void onAc() = 0;
      void offAc();

      int getTemp(){
          return 29;
      }
};

// class RemoteInter : protected MyRemote {
// };

// Encapsulation
class Remote :  public MyRemote 
{
        public:
        void onAc(){
            cout<<"Ac On"<<this->brand;
        }
};



int main(){
     Remote remote;
     remote.onAc();
     cout<<remote.getTemp();
}

// public - 1
// protected - > 2
// private  3