// Joma Class DS Course 
// C++ Resolution

#include <iostream>

using std::cout;
using std::cin;
using std::size;
// Define here the input 
int work [] = {1,2,3,2,3,5,1};


void Resolve() {

  int Bonus[size(work)];
  
  for (int i = 0; i < size(work); i++){
      Bonus[i] = 1;
  }

  for(int i = 1; i < size(work); i++){
      if (work[i] > work[i-1]){
          Bonus[i] = Bonus[i-1] + 1;
      }
  }

  for(int i = size(work) -1; i > 0; i--){
      if (work[i] > work[i-1]){
          
      if(Bonus[i] < (Bonus[i-1] +1 ))    Bonus[i] = Bonus[i-1] + 1;
      
      }
  }

    for(int i : Bonus) {
     cout << i << " ";
  }
    cout << "\n";

}



int main() {

  Resolve();

}