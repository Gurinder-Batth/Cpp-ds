#include<iostream>
using namespace std;
void divide(){
     int a;
     int b;
     std::cin>>a;
     std::cin>>b;
     if(b == 0){
        //  cout<<"Oops! Something went wrong"<<endl;
         throw("oops! zero error");
         return;
     }
     int c = a / b;
     std::cout<<c<<std::endl;
}

int main(){
      try{
         divide();
      }
      catch(const char *x){
          cout<<x<<endl;
      }
      cout<<"Runinng....."<<endl;
}