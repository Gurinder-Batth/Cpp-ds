#include<iostream>
using namespace std;
namespace Helper 
{
     void printUser(){
         cout<<"Good Morning"<<endl;
     }
     void logoutUser(){
         cout<<"User is logout"<<endl;
     }

     class Student
     {
     private:
         /* data */
     public:
         Student(/* args */);
         ~Student();
     };
     
     Student::Student(/* args */)
     {
         cout<<"Student Construct of Uni class called"<<endl;
     }
     
     Student::~Student()
     {
     }
     
}

namespace School {
         class Student
         {
         private:
             /* data */
         public:
             Student(/* args */);
             ~Student();
         };
         
         Student::Student(/* args */)
         {
            cout<<"Student Construct of School class called"<<endl;
         }
         
         Student::~Student()
         {
         }
         
}