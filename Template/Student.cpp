#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int roll;
public:
    Student(string name,int roll);
    ~Student();
    string getName(){
        return this->name;
    }
    int getRoll(){
        return this->roll;
    }
};

Student::Student(string name,int roll)
{
    this->name = name;
    this->roll = roll;
}

Student::~Student()
{
}

