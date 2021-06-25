// Joma Class DS Course 
// C++ Resolution

#include <iostream>
using std::cin;
using std::cout;

int res = 0;

 int climbStairs(int n) {
        
     if (n == 0) return 1;
     if (n == 1) return 1;

     int first = 1;
     int second = 2;

     for (int i = 2; i < n; i++)
     {
         int third = first + second;
         first = second;
         second = third;
     }
     
    return second;

}

    
int main() {

    int N = 3;

}