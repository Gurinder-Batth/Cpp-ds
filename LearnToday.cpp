#include<iostream>
using namespace std;
class Student {
      public:
      int rollno = 29;
};
int main()
{
    Student *ptr = NULL;
    Student student1;
    ptr = &student1;
    // If it's Pointer Object of class then we use arrow -> operator to access class
    // poperties and methods or function
    // otherwise use dot . operator
    ptr->rollno = 49;
    cout<<ptr->rollno;
    cout<<"Address of Student 1 object"<<&student1<<endl;
    cout<<"Address of ptr object"<<ptr<<endl;
}