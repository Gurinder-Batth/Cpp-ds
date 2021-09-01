#include <iostream>
#include "Student.cpp"
#include <vector>
using namespace std;



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