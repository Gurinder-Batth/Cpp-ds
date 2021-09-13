#include <iostream>
#include <queue>

using namespace std;
int matrix[5][5] = {0};
int visted_array[5] = {-1};
int insert_pos = 0;

 
void addNode(int n1,int n2){
     matrix[n1][n2] = 1;
     matrix[n2][n1] = 1;
}

void printMatrix(){
     for(int i = 0 ; i < 5 ; i++){
         for(int j = 0 ; j < 5 ; j++){
             cout<<matrix[i][j]<<" ";
         }
         cout<<endl;
     }
}

void travel(int node_pos){

     queue<int> q;
     q.push(node_pos);
    //  0 insert into visited array
    // [0,-1,-1,-1,-1]
     visted_array[insert_pos++] = node_pos;

     while (q.empty() == false)
     {
          int first = q.front();
          q.pop();
          cout<<first<<" ";
          /**
           * TODO: insert all node which belongs to current node
           * */
          int tmp[5] = {0};
          for(int i = first; i < (first+1) ; i++){
               for(int j = 0 ; j < 5 ; j++){
                    tmp[j] = matrix[i][j];
               }
          }
        // tmp[5] array store where we can travel from this node
        for(int i = 0; i < 5 ; i++){
             if(tmp[i] == 1){
                // but push only those elements which are unvisited
                 bool visited = false;
                 for(int k = 0 ; k < insert_pos ; k++){
                      if( visted_array[k] == i ){
                          visited = true;
                      }
                 }
                //  insert the above element only if visited is false
                 if(visited == false){
                     q.push(i);
                     visted_array[insert_pos++] = i;
                 }
             }
        }

     }
     

     
}


int main(){
    addNode(0,1);
    addNode(0,2);
    addNode(1,3);
    addNode(2,4);
    travel(2);
}