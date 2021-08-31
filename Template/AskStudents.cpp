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
    bool run = true;
    while(run){
        string name;
        cout<<"Enter Name : ";
        cin>>name;
        int roll;
        cout<<"Enter Roll : ";
        cin>>roll;
        Student student(name,roll);
        v.push_back(student);
        cout<<"#######"<<endl;
        int res;
        cout<<"Press 1 for continue or any key for exits";
        cin>>res;
        if(res != 1){
            run = false;
        }
    }

    for(int i = 0 ; i < v.size() ; i++){
        Student student = v.at(i);
        cout<<"Student Name "<<student.getName()<<"  Roll: "<<student.getRoll()<<endl;
    }

}