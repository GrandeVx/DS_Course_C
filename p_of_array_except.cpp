#include <iostream>
#include <vector>

using std::cin;
using std::cout;


int main() {
    
    int myints[] = {2,4,1,5,3};
    std::vector<int> Numeri (myints, myints + sizeof(myints) / sizeof(int) );


    int R[Numeri.size()];

    int L[Numeri.size()];

    L[0] = 1;
    R[Numeri.size()-1] = 1;


        for (int i = 1; i < Numeri.size(); i++)
        {
                L[i] = Numeri[i-1] * L[i-1];
        }
        
        for (int i = Numeri.size()-2; i >= 0; i--)
        {
                R[i] = Numeri[i+1] * R[i+1];
        }


        
        int pos = 1; // wich position we want..

        cout << R[pos] * L[pos] << "\n"; // the real operation


}