#include<iostream>

using namespace std;

int main() {
  int arr[10] = {
    1,
    1,
    0,
    0,
    1,
    1,
    1,
    0 ,
    1,
    1
  };
  // for(int i=0;i<10;i++)
  // cin>>arr[i];
  // 

  int highest = 0;


  for (int i = 0; i < 10; i++) {

    int x = 0;
    int counter = 0;
    int j = i;
    while ((x == 0 || x == 1) && j < 10) {
        if (arr[j] == 0) {
            x++;
        }
        counter++;
        j++;
    }
    if (counter > highest) {
      highest = counter;
    }
  }
  cout << "\n\n" << highest;

}
