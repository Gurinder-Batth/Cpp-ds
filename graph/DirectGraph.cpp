#include <iostream>
using namespace std;
int matrix[5][5] = {0};


 
void addVertex(int val1,int val2){
     matrix[val1][val2] = 1;
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
         cout<<i;
         for(int j = 0 ; j < 5 ; j++){
              if(matrix[i][j] == 1){
                  cout<<"->"<<j;   
              }
         }
         cout<<endl;
     }
}

int main(){
    addVertex(0,1);
    addVertex(0,3);
    addVertex(0,2);
    addVertex(1,2);
    addVertex(3,0);
    addVertex(3,2);
    addVertex(4,2);
    addVertex(4,1);
    printMatrix();
    printList();
}