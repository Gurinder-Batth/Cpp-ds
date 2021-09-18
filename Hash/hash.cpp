#include<iostream>
#include<vector>
using namespace std;

int bucket = 7;     
// Vector of Vector
vector< vector<int> > container;

void insert(int val)
{
     int rem = val % bucket;
     container[rem].push_back(val);
}

void printHashTable()
{
     for(int i = 0 ; i < container.size() ; i++){
           cout<<i<<"->";
           for(int j = 0 ; j < container.at(i).size() ; j++)
           {
               //  method chaining //Oops Feature
               
                vector<int> tmp_vector = container.at(i);
                cout<<tmp_vector.at(j)<<" ";
           }
           cout<<endl;
     }
}

void init()
{
    for(int i = 0 ; i < bucket ; i++)
    {
        // V2 represention inside vector
        vector<int> index;
        container.push_back(index);
    }
}




int main()
{
     init();
     insert(15);
     insert(8);
     insert(11);
     insert(27);
     printHashTable();
}

