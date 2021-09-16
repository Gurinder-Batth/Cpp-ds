#include <iostream>
#include <vector>
using namespace std;
int matrix[6][6] = {0};
int current_row[6] = {0};
vector<int> unvisited; 
vector<int> visited; 
void addVertex(int val1,int val2,int weight){
     matrix[val1][val2] = weight;
     matrix[val2][val1] = weight;
}

void printMatrix(){
     for(int i = 0 ; i < 6 ; i++){
         for(int j = 0 ; j < 6 ; j++){
             cout<<matrix[i][j]<<" ";
         }
         cout<<endl;
     }
}

void printList(){
     for(int i = 0 ; i < 6 ; i++){
         cout<<i;
         for(int j = 0 ; j < 6 ; j++){
              if(matrix[i][j] != 0){
                  cout<<"->"<<j<<"("<<matrix[i][j]<<")";   
              }
         }
         cout<<endl;
     }
}

void initArray(int source){
     visited.push_back(source);
     for(int i = 0 ; i <= 5 ; i++) {
            if(i != source){
                unvisited.push_back(i);
            }
            else{
                unvisited.push_back(-1);
            }
     }  
}
void initCurrentRow(int source){
      for(int i = 0; i <= 5 ; i++){
         if( matrix[source][i] != 0){
             current_row[i] = matrix[source][i];
         }
         else
         {
             current_row[i] = -1;
         }
    }
}


int * find(int source){
    int small = INT_MAX;
    int pos = -1;
       for(int i = 0; i <= 5 ; i++){
         if( current_row[i] != -1 && current_row[i] < small){
             small = current_row[i] ;
             pos = i;
         }
    }
    int arr[2] = { small , pos };
    return arr;
}

bool isAllVisited(){
     for(int i = 0 ; i < unvisited.size() ; i++){
         if(  unvisited.at(i) != -1 ){
             return false;
         }
     }
     return true;
}

int getLastElement(){
    //  2
    //  1 -> 4
    //  2 - 1
    // return 1
    return visited.at( visited.size() - 1 );
}

bool isVisited(int val){
    for(int i = 0 ; i < visited.size() ; i++){
        if(visited.at(i) == val){
            return true;
        }
    }
    return false;
}

void dijkstra(int source){
     initArray(source);
     initCurrentRow(source);
     int *p = find(source);
     int min_number = *(p);
     int index = *(p+1);
     cout<<source<<"<-->"<<index<<" " <<min_number<<"KM "<<endl;
     visited.push_back(index);
     unvisited[index] = -1;
     while(  isAllVisited() == false )
     {
          int last_ele = getLastElement();
          for(int i = 0 ; i <= 5 ;  i++ ){
              // here we check where to go
              // eg : 4 -> 3
              //  i = 3
              if( matrix[last_ele][i] != 0 && isVisited(i) == false){
                //   
                  int odis = current_row[i];
                  int ndis =  current_row[index] + matrix[last_ele][i];
                  if(odis == -1){
                        current_row[i] = current_row[index] + matrix[last_ele][i];
                  }
                  else
                  {
                      
                       if( ndis < current_row[i]){
                           current_row[i] = ndis ;
                       }
                  }
              }
          }
          current_row[index] = -1;
          int *p2 = find(source);
          min_number = *(p2);
          index = *(p2+1);
          cout<<source<<"<-->"<<index<<" " <<min_number<<"KM "<<endl;
          visited.push_back(index);
          unvisited[index] = -1;
     }

}

int main(){
    addVertex(0,4,4);
    addVertex(0,2,8);
    addVertex(1,3,2);
    addVertex(2,5,6);
    addVertex(3,5,3);
    addVertex(3,4,5);
    printMatrix();
    dijkstra(0);
}