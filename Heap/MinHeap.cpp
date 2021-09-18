#include <iostream>
using namespace std;

int tree[7] = {-1};
int heap = 0;

int parent(int i){
     return (i-1) / 2;
}

void swap( int &a , int &b )
{
   int tmp = a;
   a = b;
   b = tmp;
}

void insert(int val)
{
     if(heap == 7){
         cout<<"Heap Tree Full";
         return ;
     }
     heap++;
     int i = heap - 1;
     tree[i] = val;
     while(i != 0 && tree[parent(i)] > tree[i] )
     {
          swap(tree[parent(i)],tree[i]);
          i = parent(i);
     }

}

void printTree(){
     for(int  i = 0 ; i < 7 ; i++){
         cout<<tree[i]<<" ";
     }
}

int main()
{
  //6 , 4 , 2 , 9 , 10 , 8 , 1
  insert(6);
  insert(4);
  insert(2);
  insert(9);
  insert(10);
  insert(8);
  insert(1);
  printTree();
}