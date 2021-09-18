#include<iostream>
#include<vector>
using namespace std;

int bucket = 7;     
// Vector of Vector
int arr[7][5] = {0};

void insert(int val)
{
     int rem = val % bucket;
     int free_pos = -1;
     for(int i = 0 ; i < 5;i++){
          if( arr[rem][i] == 0 ){
              free_pos = i;
              break;
          }
     }
     arr[rem][free_pos] = val;
}

void deleteVal(int val)
{
     int rem = val % bucket;
     int val_index = -1;
     for(int i = 0 ; i < 5;i++){
          if( arr[rem][i] == val ){
              val_index = i;
              break;
          }
     }
     arr[rem][val_index] = 0;
}

void printHashTable()
{
     for(int i = 0 ; i < 7; i++){
           cout<<i<<"->";
           for(int j = 0 ; j < 5 ; j++)
           {
                if(arr[i][j] != 0){
                    cout<<arr[i][j]<<" ";
                }
           }
           cout<<endl;
     }
}



int main()
{
    // Constant time operation
     insert(15);
     insert(8);
     insert(11);
     insert(27);
     printHashTable();
     deleteVal(8);
     cout<<endl;
     printHashTable();
}

