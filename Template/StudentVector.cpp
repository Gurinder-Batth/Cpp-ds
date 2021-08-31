#include <iostream>
#include <vector>
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


int main(){
    vector<Student> v;
    for(int i = 0 ; i < 3; i++){
        string name;
        cout<<"Enter "<<i+1<<" Name : ";
        cin>>name;
        int roll;
        cout<<"Enter "<<i+1<<" Roll : ";
        cin>>roll;
        Student student(name,roll);
        v.push_back(student);
        cout<<"#######"<<endl;
    }

    for(int i = 0 ; i < v.size() ; i++){
        Student student = v.at(i);
        cout<<"Student Name "<<student.getName()<<"  Roll: "<<student.getRoll()<<endl;
    }

}