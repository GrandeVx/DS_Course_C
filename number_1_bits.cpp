#include <iostream>

using std::cin;
using std::cout;

int one_bit(int N,int res) {
    if (N == 0) {cout << res << "\n"; return 0;}

    else {
        
        if (N % 2 == 1) res++;
        N = N / 2;
    }
    
    one_bit(N,res);

}

int main () {

    one_bit(23,0);



}