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

int getMin(int source){
    int small = INT_MAX;
    for(int i = 0; i <= 5 ; i++){
         if( current_row[i] != -1 && current_row[i] < small){
             small = current_row[i] ;
         }
    }
    return small;
}

int getMinIndex(int source){
    int small = INT_MAX;
    int pos = -1;
       for(int i = 0; i <= 5 ; i++){
         if( current_row[i] != -1 && current_row[i] < small){
             small = current_row[i] ;
             pos = i;
         }
    }
    return small;
    return pos;
}

int * find(int source){
    int arr[2];
    int small = INT_MAX;
    int pos = -1;
       for(int i = 0; i <= 5 ; i++){
         if( current_row[i] != -1 && current_row[i] < small){
             small = current_row[i] ;
             pos = i;
         }
    }
    arr[0] = small;
    arr[1] = pos;
    return arr;
}

int getLastVisited(){
     return visited.at(visited.size()-1);
}

bool isAllVisited(){
     for(int i = 0; i < unvisited.size(); i++){
          if(unvisited.at(i) != -1){
              return false;
          }
     }
     return true;
}

void dijkstra(int source){
     initArray(source);
     initCurrentRow(source);
     int *p = find(source);
     int min_number = *p;
     int index = *(p+1);
     cout<<source<<"<-->"<<index<<" " <<min_number<<"KM "<<endl;
     current_row[index] = -1;
     visited.push_back(index);
     unvisited[index] = -1;

     int i = 0;
     while(isAllVisited() == false && i < 10){
          int last_el = getLastVisited();
          for(int i = 0; i < unvisited.size(); i++){
            if(unvisited.at(i) != -1 ){
                int node = unvisited.at(i);
                if( matrix[last_el][node] != 0 ){
                    int ndis = min_number + matrix[last_el][node];
                    int odis = current_row[node];
                    /**
                     * TODO: -1 means node distance is inifinty
                     * */
                    current_row[node] = odis == -1  ? ndis : ( ndis < odis ? ndis : odis );
                }
            }
         }
         int *p = find(source);
         min_number = *p;
         index = *(p+1);
         cout<<source<<"<-->"<<index<<" " <<min_number<<"KM "<<endl;
         current_row[index] = -1;
         visited.push_back(index);
         unvisited[index] = -1;
         i++;
     }

}

int main(){
    addVertex(0,4,4);
    addVertex(0,2,5);
    addVertex(1,3,2);
    addVertex(2,5,2);
    addVertex(3,5,3);
    addVertex(3,4,5);
    printMatrix();
    dijkstra(0);
}