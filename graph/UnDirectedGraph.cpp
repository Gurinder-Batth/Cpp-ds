#include <iostream>
using namespace std;
int matrix[5][5] = {0};
string friends[5]= { "Rahul" , "Neha" , "John" , "Vevek" , "Adesh" };

int getIndexByName(string name){
    for(int i = 0; i < 5 ; i++){
         if(name == friends[i]){
             return i;
         }
    }
    return -1;
}
string getNameByIndex(int idx){
    for(int i = 0; i < 5 ; i++){
         if(i == idx){
             return friends[i];
         }
    }
    return NULL;
}
 
void addFriend(string name1,string name2){
     int name1_index = getIndexByName(name1);
     int name2_index = getIndexByName(name2);
     matrix[name1_index][name2_index] = 1;
     matrix[name2_index][name1_index] = 1;
}

void printMatrix(){
     for(int i = 0 ; i < 5 ; i++){
         for(int j = 0 ; j < 5 ; j++){
             cout<<matrix[i][j]<<" ";
         }
         cout<<endl;
     }
}

void printList(){
     for(int i = 0 ; i < 5 ; i++){
         string person_name = getNameByIndex(i);
         cout<<person_name;
         for(int j = 0 ; j < 5 ; j++){
              if(matrix[i][j] == 1){
                  cout<<"->"<<getNameByIndex(j);   
              }
         }
         cout<<endl;
     }
}

int main(){
    addFriend("Rahul","Neha");
    addFriend("Rahul","Adesh");
    addFriend("Rahul","Vevek");
    addFriend("Neha","Vevek");
    addFriend("Neha","John");
    printMatrix();
    printList();
}